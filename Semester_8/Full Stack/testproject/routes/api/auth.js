const express = require('express')
const router= express.Router();
const auth = require('../../middleware/auth');
const User = require('../../models/User');
const config=require('config')
const jwt=require('jsonwebtoken');
const {check,validationResult}= require('express-validator')
const bcrypt=require('bcryptjs');


//@route GET api/auth  - Test Route - Public
//router.get('/',auth,(req,res) => res.send('auth Route'));

router.get('/',auth,async (req,res) => {

    try {

        const user = await User.findById(req.user.id).select('-password');
        res.json(user);
        
    } catch (err) {

        console.error(err.message);
        res.status(500).send('server error');
        
    }

});

//@route POST api/auth  - Authenticate user - Public
router.post('/',[
    check('email','email is invalid').isEmail(),
    check('password','Password is required').exists()
],async (req,res) => {
    console.log(req.body);
    
    const errors = validationResult(req);
    if(!errors.isEmpty())
    {
        return res.status(400).json({errors: errors.array()})
    }

    const {email,password}=req.body;

    try {
        //find user
        let user=await User.findOne({email});
        if(!user){
            res.status(400).json({errors:[{msg:"Invalid Credentials"}]});
        }

        const isMatch= await bcrypt.compare(password,user.password);

        if(!isMatch)
        {
            return res.status(400).json({errors:[{msg:'Invalid Credentials'}]});
        }


        //create payload
        const payload={
            user:{
                id: user.id
            }
        }

        jwt.sign(payload,config.get('jwtSecret'),{
            expiresIn:360000
        },(err,token)=>{ 
            if(err) throw err;
            res.json({token})
         });
        
    } catch (err) {
        console.log(err.message);
        res.status(500).send(err.message);
    }
});

module.exports=router;