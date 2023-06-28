const net = require('net');

const server = net.createServer((socket) => {
    let receivedData = '';

    socket.on('data', (data) => {
        receivedData += data.toString();
    });

    socket.on('end', () => {
        try {
        const json = JSON.parse(receivedData);
        // Check if the received data is a valid JSON
        if (json && typeof json === 'object') {
            // Perform any required operations with the received JSON data

            // Sending a confirmation response
            socket.write('Received valid JSON');
        } else {
            // Sending an error response if the received data is not a valid JSON
            socket.write('error');
        }
        } catch (error) {
        // Sending an error response if the received data is not a valid JSON
            socket.write('error');
        }
        socket.end();
    });
});

server.listen(1000, '127.0.0.1', () => {
    console.log('TCP server listening on port 1000');
});
