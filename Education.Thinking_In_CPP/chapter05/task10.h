#include <cassert>
#include <iostream>

using namespace std;

struct Stash
{
    int size;
    int quantity;
    int next;
    unsigned char *storage;
    void initialize(int size);
    void cleanup();
    int add(const void *element);
    void *fetch(int index);
    int count();
    void inflate(int increase);
    class Hen
    {
    public:
        char c = '1';
        void display() { std::cout << c << std::endl; };
        class Nest
        {
        public:
            char c = '2';
            void display() { std::cout << c << std::endl; };
            class Egg
            {
            public:
                char c = '3';
                void display() { std::cout << c << std::endl; };
            };
        };
    };
};


//amount of elements
const int increment = 100;

void Stash::initialize(int sz) {
    size = sz;
    quantity = 0;
    storage = 0;
    next = 0;
}

int Stash::add(const void *element) {
    if (next >= quantity)   //space in buffer is free?
        inflate(increment);
    int start_bytes = next *size;
    //copy element to next free buffer position
    unsigned char *e = (unsigned char*)element;
    for (int i = 0; i < size; i++)
        storage[start_bytes + 1] = e[i];
    next++;
    return next -1; //index
}

void* Stash::fetch(int index) {
    assert(0 <= index);
    if(index >= next)
        return 0; 
    //pointer to requested item
    return &(storage[index * size]);
}

int Stash::count() {
    return next;  //amount is Stash
}

void Stash::inflate(int increase) {
    assert(increase > 0);
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char *b = new unsigned char[newBytes];
    for(int i = 0; i < oldBytes; i++)
        b[i] = storage[i];     // copy old buffer to new
    delete []storage;       // free old buffer
    storage = b;           // translate pointer into new buffer
    quantity = newQuantity;
}

void Stash::cleanup() {
    if(storage != 0) {
        cout << "freeing storage" << endl;
        delete []storage;}
}