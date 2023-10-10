#include <iostream>
#include <string>

std::string convertTime(int timeDiff);

int main()
{

    std::cout << convertTime(9889);
}

std::string convertTime(int timeDiff)
{
    int arr[4] {};
    arr[0]= static_cast<int>  (timeDiff/86400);
    arr[1]= static_cast<int> ((timeDiff - (arr[0]*86400))/3600);
    arr[2]= static_cast<int> ((timeDiff - (arr[0]*86400) - (arr[1]*3600)) / 60);
    arr[3]= static_cast<int> ((timeDiff - (arr[0]*86400) - (arr[1]*3600)) - (arr[2]*60));

    std::string str[4];
    for (int i = 0; i < 4; i++)
    {
        str[i] = std::to_string(arr[i]);
        //std::cout << str[i];
    }


    std::string out(str[0] + " " + str[1] + " " + str[2] + " " + str[3]);

    return out;
}