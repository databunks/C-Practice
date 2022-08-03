const http = require('http');
const fs = require('fs');

const port = 3000;

fs.readFile('../../Views/client.html', function (err : any, html : any) {

  if (err) {
      throw err; 
  }       
  http.createServer(function(request : any, response : any) {  
      response.writeHeader(200, {"Content-Type": "text/html"});  
      response.write(html);  
      response.end();  
  }).listen(port);

});