#include "ControlCenter.h"

ControlCenter::ControlCenter() = default;

ControlCenter::~ControlCenter() = default;

void ControlCenter::addMessage(string str) {
    this->message.push(str);
}

string ControlCenter::getMessage() {
    return "";
}