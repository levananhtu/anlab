#include <iostream>
#include <string>
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "cli-ser\Server.h"
#include "cli-ser\Client.h"
#include "cli-ser\Texter.h"
#include "cli-ser\Enums.h"

using namespace std;

void runServer(string owner, string rule) {
    Server *server = Server::getInstance();
    server->start();
    server->run();
}

void runClient(string name, Member role, string ip) {
    Texter *texter = new Texter(name, role, ip);
    texter->run();
}

int main(int argc, char const *argv[]) {

    int running = 1;

    cout << "Enter username: ";
    string name = "";
    cin >> name;

    while (running == 1) {
        cout << "1. Create room." << endl;
        cout << "2. Join room." << endl;
        cout << "3. Exit." << endl;

        int key;
        cin >> key;
        cin.ignore();

        switch (key) {
            case 1: {
                string rule;
                cout << "Input rule: ";
                getline(cin, rule);

                string ip;
                cout << "Input ip: ";
                getline(cin, ip);

                thread serverThread(runServer, name, rule);
                thread clientThread(runClient, name, ADMIN, ip);

                if (serverThread.joinable()) {
                    serverThread.join();
                }
                if (clientThread.joinable()) {
                    clientThread.join();
                }
            }
                break;
            case 2: {
                string ip;
                cout << "Input ip: ";
                getline(cin, ip);
                Texter *texter = new Texter(name, MEMBER, ip);
                texter->run();
            }
                break;
            case 3:
                cout << endl;
                break;
        }
    }


    return 0;
}
