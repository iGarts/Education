#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    vector<string> words;
    string word;
    ifstream in("text.txt");
    while (in >> word)
    {
        words.push_back(word);
        if (word == "you")
            i++;
    }
    cout << i << endl;
}