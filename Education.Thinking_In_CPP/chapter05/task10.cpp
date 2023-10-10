#include "task10.h"

int main() {
    Stash stash;
    Stash::Hen hen;
    Stash::Hen::Nest nest;
    Stash::Hen::Nest::Egg egg;
    hen.display();
    nest.display();
    egg.display();
}