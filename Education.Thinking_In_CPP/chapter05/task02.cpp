#include <iostream>
#include <string>

struct Lib {
    std::string s[3];
};

class Libc {
    private:
        std::string a,b,c;
        std::string s[3];
    public:
        void seta();
        void geta();
        void setb();
        void getb();
        void setc();
        void getc();
};

void Libc::seta() {a = "ONE";}
void Libc::geta() {std::cout << a << std::endl;}

void Libc::setb() {b = "TWO";}
void Libc::getb() {std::cout << b << std::endl;}

void Libc::setc() {c = "THREE";}
void Libc::getc() {std::cout << c << std::endl;}

int main() {
    Libc x;
    x.seta();
    x.geta();
    x.setb();
    x.getb();
    x.setc();
    x.getc();
}