#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>

class Logger {
public:
    void logMessage(std::string nickName, std::string message);

    void getMessage();

private:
    std::string getCurrentTime();

};




