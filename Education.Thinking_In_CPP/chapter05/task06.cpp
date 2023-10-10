#include <iostream>

class Hen {
    public:
        char c = '1';
        void display() {std::cout << c << std::endl;};
        class Nest {
            public:
                char c = '2';
                void display() {std::cout << c << std::endl;};
                class Egg {
                    public:
                        char c = '3';
                        void display() {std::cout << c << std::endl;};
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
}