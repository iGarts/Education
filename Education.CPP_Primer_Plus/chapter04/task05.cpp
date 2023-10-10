#include <iostream>
#include <string>

struct candy_bar
{
    std::string title;
    double height;
    int calories;
};

int main()
{
    candy_bar strela {"Strela", 0.238, 892};
    std::cout << "title: " << strela.title << std::endl
              << "height: " << strela.height << std::endl
              << "calories: " << strela.calories << std::endl;
}
