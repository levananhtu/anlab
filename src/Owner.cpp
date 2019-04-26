#include "Owner.h"
#include <iostream>
#include <fstream>
#include <vector>

Owner::Owner() = default;


Owner::~Owner() = default;

void Owner::setRoomId(string str) {
    this->room_id = str;
}

string Owner::getRoomId() {
    return this->room_id;
}

void Owner::setInfo(string rules, string user) {

}

void Owner::banUser(string user) {
    set<string> users = getUsers("D:/source-code/cc++/jetbrain/leviathan/src/text/BanList.txt");
    users.insert(user);
    writeFile("D:/source-code/cc++/jetbrain/leviathan/src/text/BanList.txt", users);
}

void Owner::mod(string user) {
    set<string> users = getUsers("D:/source-code/cc++/jetbrain/leviathan/src/text/ModList.txt");
    users.insert(user);
    writeFile("D:/source-code/cc++/jetbrain/leviathan/src/text/ModList.txt", users);
}

void Owner::unBanUser(string user) {
    set<string> users = getUsers("D:/source-code/cc++/jetbrain/leviathan/src/text/BanList.txt");
    users.erase(user);
    writeFile("D:/source-code/cc++/jetbrain/leviathan/src/text/BanList.txt", users);

}

void Owner::unMod(string user) {
    set<string> users = getUsers("D:/source-code/cc++/jetbrain/leviathan/src/text/ModList.txt");
    users.erase(user);
    writeFile("D:/source-code/cc++/jetbrain/leviathan/src/text/ModList.txt", users);

}

set<string> Owner::getUsers(string fileName) {
    set<string> users;
    ifstream stream;
    stream.open(fileName);
    string member;
    if (stream.is_open()) {
        while (getline(stream, member)) {
            users.insert(member);
        }
        stream.close();
    }
    return users;

}

void Owner::writeFile(string fileName, set<string> users) {
    ofstream myfile;
    //enter the directory file
    myfile.open(fileName, ios::trunc);
    if (myfile.is_open()) {
        for (string const &user : users) {
            myfile << user << endl;
        }
        myfile.close();
    }
}

