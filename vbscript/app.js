const http = require('http');
const fs = require('fs');

const server = http.createServer(controller).listen(3000, () => console.log('server started on http://localhost:3000'));

function controller(req, res) {
    fs.readFile('./index.html', function(err, data) {
        if (err) {
            res.writeHead(500, {'Content-Type': 'text/plain'});
            res.end('Грешка при зареждане на файла');
        } else {
            res.writeHead(200, {'Content-Type': 'text/html'});
            res.end(data);
        }
    });
}