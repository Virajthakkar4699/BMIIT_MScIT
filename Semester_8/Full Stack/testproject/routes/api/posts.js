const express = require('express')
const router= express.Router();

//@route GET api/posts  - Test Route - Publice
router.get('/',(req,res) => res.send('posts Route'));

module.exports=router;