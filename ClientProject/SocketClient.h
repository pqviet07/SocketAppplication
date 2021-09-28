#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <errno.h>
#include <SocketBuffer.h>

using namespace std;
class SocketClient
{
private:
    std::string host;
    int port;
    SocketBuffer dataStream;

public:
    SocketClient();
    int receive_data(int);
    int connectToServer(std::string, int);
    const SocketBuffer* getDataStream() const;
};
#endif // SOCKETCLIENT_H
