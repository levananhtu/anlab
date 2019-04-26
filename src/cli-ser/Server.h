#ifndef SERVER_H
#define SERVER_H
#include <winsock2.h>
#include <string>
using namespace std;
class Server
{
private:
    string roomId;
    WSADATA WSAData;
    SOCKET serverSocket;
    SOCKADDR_IN serverAddr;
    void setRoomId();
    static Server *instance;
    Server();

public:
    static Server * getInstance();
    string getRoomId();
    void start();
    void run();
};
#endif