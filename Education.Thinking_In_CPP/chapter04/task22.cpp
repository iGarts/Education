#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Stack
{
    struct 
    {
        string word;
        vector<string> words;
    }stash;        
};

int main() {
    int i = 0;
    Stack stack;
    fstream in("text.txt");
    while (in >> stack.stash.word && i < 5)
    {
        stack.stash.words.push_back(stack.stash.word);
        i++;
    }
    for (int i = 0; i < 5; i++)
        cout << stack.stash.words[i] << " ";
}