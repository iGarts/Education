#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char ** argv)
{
    int n = 100;
    vector<int> primes = { 2 };
    cout << 2 << ",";
    for (int j = 3; j < n; j+=2)
    {
        bool flag = true;
        for(auto i: primes)
        {
            if (j % i == 0)
            {
                flag = false;
                break;
            }
            if (i*i > j) break;
        }
        if (flag)
        {
            cout << j << ",";
            primes.push_back(j);
        }
    }
}