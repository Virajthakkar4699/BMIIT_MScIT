const express = require('express')
const router= express.Router();
const {check,validationResult}= require('express-validator')
const User=require('../../models/User')
const garavar=require('gravatar');
const jwt=require('jsonwebtoken');
const config=require('config')
const gravatar = require('gravatar');

const bcrypt=require('bcryptjs');

//@route GET api/users  - Test Route - Public
//router.get('/',(req,res) => res.send('User Route'));

//@route GET api/users  - Register User - Public
router.post('/',[
    check('name','Name is required').not().isEmpty(),
    check('email','email is invalid').isEmail(),
    check('password','password is invalid').isLength({min: 6})
],async (req,res) => {
    console.log(req.body);
    const errors = validationResult(req);
    if(!errors.isEmpty())
    {
        return res.status(400).json({errors: errors.array()})
    }

    const {name,email,password}=req.body;

    try {
        //find user
        let user=await User.findOne({email});
        if(user){
            res.status(400).json({errors:[{msg:"User Already Exist"}]});
        }

        const avatar = gravatar.url(email,{s:'200',r:'pg',d:'mm'})

        user = new User({
            name,email,avatar,password
        });

        const salt= await bcrypt.genSalt(10);
        user.password= await bcrypt.hash(password,salt);
        
        await user.save();
        //res.send('User Registered');
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