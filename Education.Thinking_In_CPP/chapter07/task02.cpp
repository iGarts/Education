#include <iostream>
#include <string>

class Message {
    private:
        std::string str;
    public:
        Message();
       ~Message();
        void print();
        void print(std::string str);
};

Message:: Message() {}
Message::~Message() {}

void Message::print() {
    std::cout << "empty message" << std::endl;}
void Message::print(std::string str) {
    std::cout << "empty message " << str << std::endl;}

int main() {
    Message message;
    message.print();
    message.print("not empty message");
}