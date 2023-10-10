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
    ifstream in("doc.txt");
    while (in >> word)
    {
        i++;
        words.push_back(word);
    }
    cout << i << endl;
}