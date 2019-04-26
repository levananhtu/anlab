#include <string>
#include <vector>
#include "Owner.h"

#ifndef LEVIATHAN_CONFIG_H
#define LEVIATHAN_CONFIG_H

using namespace std;

class Config {
private:
    Owner owner;
    string roomId;
    string name;
    string ip;
    int port;
    vector<string> filterList;
    vector<string> banList;
    vector<string> modList;
    vector<string> memberList;

    vector<string> readFileList(string str);

public:
    Config();

    const Owner &getOwner() const;

    void setOwner(const Owner &owner);

    const string &getRoomId() const;

    void setRoomId(const string &roomId);

    const string &getName() const;

    void setName(const string &name);

    const string &getIp() const;

    void setIp(const string &ip);

    int getPort() const;

    void setPort(int port);

    const vector<string> &getFilterList() const;

    void setFilterList(const vector<string> &filterList);

    const vector<string> &getBanList() const;

    void setBanList(const vector<string> &banList);

    const vector<string> &getModList() const;

    void setModList(const vector<string> &modList);

    const vector<string> &getMemberList() const;

    void setMemberList(const vector<string> &memberList);

};


#endif //LEVIATHAN_CONFIG_H
