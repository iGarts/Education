#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Stack
{
    void get_string(Stack &str) {
        int i = 0;
        fstream in("text.txt");
        while (in >> str.stash.word && i < 5)
        {
            str.stash.words.push_back(str.stash.word);
            i++;
        }
        for (int i = 0; i < 5; i++)
        cout << str.stash.words[i] << " ";
    }
    struct {
        string word;
        vector<string> words;}
        stash;        
};

int main() {
    Stack stack;
    stack.get_string(stack);
}