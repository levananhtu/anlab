
#include "Owner.h"
#include "Config.h"
#include <fstream>
#include <iostream>

Config::Config() {
    //change the directory file
    cout << "leviathan\n";
    this->memberList = readFileList("D:/source-code/cc++/jetbrain/leviathan/src/text/MemberList.txt");
    this->banList = readFileList("D:/source-code/cc++/jetbrain/leviathan/src/text/BanList.txt");
    this->filterList = readFileList("(D:/source-code/cc++/jetbrain/leviathan/src/text/FilterList.txt");
    this->modList = readFileList("D:/source-code/cc++/jetbrain/leviathan/src/text/ModList.txt");
}

const Owner &Config::getOwner() const {
    return owner;
}

void Config::setOwner(const Owner &owner) {
    Config::owner = owner;
}

const std::basic_string<char> &Config::getRoomId() const {
    return roomId;
}

void Config::setRoomId(const std::basic_string<char> &roomId) {
    Config::roomId = roomId;
}

const std::basic_string<char> &Config::getName() const {
    return name;
}

void Config::setName(const std::basic_string<char> &name) {
    Config::name = name;
}

const std::basic_string<char> &Config::getIp() const {
    return ip;
}

void Config::setIp(const std::basic_string<char> &ip) {
    Config::ip = ip;
}

int Config::getPort() const {
    return port;
}

void Config::setPort(int port) {
    Config::port = port;
}

const std::vector<string> &Config::getFilterList() const {
    return filterList;
}

void Config::setFilterList(const std::vector<string> &filterList) {
    Config::filterList = filterList;
}

const std::vector<string> &Config::getBanList() const {
    return this->banList;
}

void Config::setBanList(const std::vector<string> &banList) {
    Config::banList = banList;
}

const std::vector<string> &Config::getModList() const {
    return modList;
}

void Config::setModList(const std::vector<string> &modList) {
    Config::modList = modList;
}

const std::vector<string> &Config::getMemberList() const {
    return memberList;
}

void Config::setMemberList(const std::vector<string> &memberList) {
    Config::memberList = memberList;
}

vector<string> Config::readFileList(string str) {
    vector<string> list;
    ifstream stream;
    stream.open(str);
    string member;
    if (stream.is_open()) {
        while (getline(stream, member)) {
            list.push_back(member);
        }
        stream.close();
    }
    return list;
}

