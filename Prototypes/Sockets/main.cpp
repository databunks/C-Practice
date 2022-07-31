#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

using namespace std;

int main(void)
{
    // Create a socket
    // AF_INET just uses ipv4
    int listening = socket(AF_INET, SOCK_STREAM, 0);

    if (listening == -1)
    {
        cerr << "Error occured while creating socket :(";
        return -1;
    }

    // Bind the socket to an IP / Port
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000);

    // inet_pton just converts 127.0.0.1 into an array of integers
    // 0.0.0.0 just means to choose any address
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

    if (bind(listening, (sockaddr*)&hint, sizeof(hint)) == -1)
    {
        cerr << "Cant Bind to IP / port";
        return -2;
    }

    // Mark the socket for listening in
    if (listen(listening, SOMAXCONN) == -1)
    {
        cerr << "Cant bind to IP/port";
    }

    // Accept a call
    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    char host[NI_MAXHOST];
    char svc[NI_MAXSERV];

    int clientSocket = accept(listening, (sockaddr*)&client, &clientSize);

    if (clientSocket == -1)
    {
        cerr << "Client cant connect";
        return -4;
    }

    memset(host, 0, NI_MAXHOST);
    memset(svc, 0, NI_MAXSERV);

    int result = getnameinfo(
    (sockaddr*)&client, 
    sizeof(client), 
    host, 
    NI_MAXHOST, 
    svc, 
    NI_MAXSERV, 
    0);

    if (result)
    {
        cout << host << " coonnected on " << svc << endl;
    }
    else
    {
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
        cout << host << " connected on " << ntohs(client.sin_port) << endl;
    }

    // While receiving - display the message and echo it
    char buf[5000];

    while (true)
    {
        // Clear the buffer
        memset(buf, 0, 4096);

        // Wait for a message
        int bytesRecv = recv(clientSocket, buf, 4096, 0);

        if (bytesRecv == -1)
        {
            cerr << "There was a connection issue" << endl;
            break;
        }

        // Display message
        cout << "Received: " << string(buf, 0 , bytesRecv) << endl;

        // Resend message
        send(clientSocket, buf, bytesRecv  + 1, 0);
            
    }

    // Close socket
    close(clientSocket);

}