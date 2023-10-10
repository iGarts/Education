#include <iostream>

class Hen {
    private:
        char c1 = '1';
    public:
        void display() {std::cout << c1 << std::endl;};
        friend void print1(Hen &lnk) {std::cout << lnk.c1 << std::endl;};
        class Nest {
            private:
                char c2 = '2';
            public:
                void display() {std::cout << c2 << std::endl;};
                friend void print2(Nest &lnk) {std::cout << lnk.c2 << std::endl;};
                class Egg {
                    private:
                        char c3 = '3';
                    public:
                        void display() {std::cout << c3 << std::endl;};
                        friend void print3(Egg &lnk) {std::cout << lnk.c3 << std::endl;};
                };
        };
};

int main() {
    Hen hen;
    Hen::Nest nest;
    Hen::Nest::Egg egg;
    hen.display();
    nest.display();
    egg.display();
    print1(hen);
    print2(nest);
    print3(egg);
}