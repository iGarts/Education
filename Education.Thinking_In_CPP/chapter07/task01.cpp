#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Text {
    private:
        string file_name;
        string temp;
        ifstream in;
    public:
        Text();
        Text(string input);
        ~Text();
        void contents(void);
};
Text::Text() {};

Text::Text(string input) {
    input = file_name;
}
Text::~Text() {}

void Text::contents(void) {
    ifstream in(file_name);
    while (in >> temp)
        std::cout << temp << endl;
}

int main() {
    Text text("text");
    text.contents();
}