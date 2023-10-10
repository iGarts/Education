#include "task07.h"

Plorg::Plorg()
{
    name = "Plorga";
    CI = 50;
}

Plorg::Plorg(std::string n, uint32_t index)
{
    if (n.size() < 19)
        name = n;
    else name = "Plorga";
    CI = index;
}

Plorg::~Plorg() {}

void Plorg::show()
{
    std::cout << name << "\n" << CI << std::endl;
}

Plorg* Plorg::set_index(Plorg &obj, uint32_t index)
{
    obj.CI = index;
    return &obj;
}

int main()
{
    Plorg p1;
    p1.show();
    Plorg p2("yap yap", 18);
    p2.show();
    Plorg p3("lkdjsklgfjas dgflajw gjr ;rj ;rgje ;rjg ", 228);
    p3.show();
}
