#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <winsock2.h>
#include "Enums.h"

using namespace std;

class Client {
private:
    WSADATA WSAData;
    SOCKET serverSocket;
    SOCKADDR_IN clientAddr;
    string name;
    string ip;
    string roomId;
    Status status;
    Member role;

public:
    Client(string name, Member role);

    void connectToServer(string serverIp);

    void sendMessage(char mess[]);

    void finish();

    string getName();

    string getRoomId();

    Status getStatus();

    Member getRole();

};

#endif