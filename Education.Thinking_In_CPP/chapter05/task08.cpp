#include <iostream>

class Map {
    private:
        int i;
        char c;
    public:
        int pi;
        char pc;
        void show_map(Map &lnk) 
            {std::cout << i << " " << pi << " " << c << " " << pc << std::endl;}
        void set_public (Map &lnk)
            {lnk.i = 1; lnk.c = 'c';}
};

int main() {
    Map map;
    map.pi = 11;
    map.pc = 'C';
    map.set_public(map);
    map.show_map(map);
}