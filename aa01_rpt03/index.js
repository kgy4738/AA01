var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

/* GET home page. /aa01. -> multi-routing */
router.get('/aa01', function(req, res, next) {
  res.render('aa01', { title: 'Express App',
  						id: 'AA01',
  						name: 'kgy4738' });
});

module.exports = router;
