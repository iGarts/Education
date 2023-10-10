#ifndef PORT_H
#define PORT_H
#include <iostream>
#include <cstring>

class Port
{
    private:
        char *brand;
        char style[20];
    public:
        Port(const char *br = "none", const char *st = "none", int b = 0);
        Port(const Port &p);
        virtual ~Port();
        virtual void show() const;
        virtual int bottle_count() const {return bottles;};
        Port & operator=(const Port &p);
        Port & operator+=(int b);
        Port & operator-=(int b);
        friend std::ostream & operator<<(std::ostream &os, const Port &p);
    protected:
        int bottles;
};

Port::Port(const char *br, const char *st, int b)
{
    int br_size = std::strlen(br);
    brand = new char[br_size + 1];
    std::strcpy(brand, br);
    std::strncpy(style, st, sizeof style - 1);
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
}

Port::~Port()
{
    delete [] brand;
}

Port & Port::operator=(const Port &p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    return *this;
}

Port & Port::operator+=(int b)
{
    if (b <= 0)
        return *this;
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if (b <= 0)
        return *this;
    bottles -= b;
    return *this;
}


void Port::show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


/////////////////////////////////////////////////////////////////////////


class Vintage_Port : public Port
{
private:
    char * nickname;
    int year;
public:
    Vintage_Port(const char *nn = "none", int y = 0);
    Vintage_Port(const char *br,const char *st, int b, const char* nn, int y);
    Vintage_Port(const Vintage_Port &vp);
    virtual ~Vintage_Port();
    virtual void show() const;
    virtual int bottle_count() const {return bottles;};
    Vintage_Port & operator=(const Vintage_Port &vp);
    friend std::ostream & operator<<(std::ostream &os, const Vintage_Port &vp);
};

Vintage_Port::Vintage_Port(const char *nn,int y) : Port()
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

Vintage_Port::Vintage_Port(const char *br, const char *st, int b, const char* nn, int y) : Port(br, st, b)
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

Vintage_Port::Vintage_Port(const Vintage_Port &vp) : Port(vp)
{
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
}

Vintage_Port::~Vintage_Port()
{
    delete [] nickname;
}

Vintage_Port & Vintage_Port::operator=(const Vintage_Port &vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void Vintage_Port::show() const
{
    Port::show();
    std::cout << "Name: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}

std::ostream & operator<<(std::ostream &os, const Vintage_Port &vp)
{
    os << dynamic_cast<const Port&>(vp);
    os << "Nickname: " << vp.nickname << std::endl;
    os << "Year: " << vp.year << std::endl;
    return os;
}

#endif // PORT_H
