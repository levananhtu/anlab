#include <queue>
#include <string>

using namespace std;

class ControlCenter {
public:
    ControlCenter();

    ~ControlCenter();

    void addMessage(string str);

    string getMessage();

private:
    queue<string> message;
};

