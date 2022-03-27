const express = require('express')
const router= express.Router();

//@route GET api/auth  - Test Route - Publice
router.get('/',(req,res) => res.send('auth Route'));

module.exports=router;