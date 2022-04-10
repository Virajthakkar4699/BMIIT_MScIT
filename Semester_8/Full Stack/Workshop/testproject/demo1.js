var http = require('http');
http.createServer(function (req, res) {
    res.write('Hello World viraj');
    res.end();
  })
  .listen(8080);
