#ifndef TASK07_H
#define TASK07_H

#include <string>
#include <iostream>

class Plorg
{
private:
    std::string name;
    uint32_t CI;
public:
    Plorg();
    Plorg(std::string n, uint32_t index);
    ~Plorg();
    void show();
    Plorg* set_index(Plorg &obj, uint32_t index);
};

#endif // TASK07_H
