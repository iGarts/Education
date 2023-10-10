#include "port.h"

int main()
{
    Port p1;
    Port p2("777", "Dark", 10);
    Port p3("999", "Dark", 20);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    int b1 = p1.bottle_count();
    int b2 = p2.bottle_count();
    int b3 = p3.bottle_count();
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    p1.show();
    p2.show();
    p3.show();
    Vintage_Port vp1;
    Vintage_Port vp2("Capitan", "white", 100, "semi-shit", 2007);
    Vintage_Port vp3("Bacardi", 2018);
    int bvp1 = vp1.bottle_count();
    int bvp2 = vp2.bottle_count();
    int bvp3 = vp3.bottle_count();
    std::cout << bvp1 << std::endl;
    std::cout << bvp2 << std::endl;
    std::cout << bvp3 << std::endl;
    vp1.show();
    vp2.show();
    vp3.show();
}
