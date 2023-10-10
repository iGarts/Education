#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string>
#include <valarray>

class Worker
{
    private:
        std::string fullname;
        long id;
    protected:
        virtual void data() const;
        virtual void get();
    public:
        Worker() : fullname("no one"), id(0L) {}
        Worker(const std::string &s, long n) : fullname(s), id(n) {}
        virtual ~Worker() =0;
        virtual void set() =0;
        virtual void show() const =0;
};

class Waiter : virtual public Worker
{
    private:
        int panache;
    protected:
        void data() const;
        void get();
    public:
        Waiter() : Worker(), panache(0) {}
        Waiter(const std::string &s, long n, int p) : Worker(s, n), panache(p) {}
        Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
        void set();
        void show() const;
};

class Singer : virtual public Worker
{
    protected:
        enum {other, alto, contralto, soprano, bass, baritone, tenor};
        enum {v_types = 7};
        void data() const;
        void get();
    private:
        static char *pv[v_types];
        int voice;
    public:
        Singer() : Worker(), voice(other) {}
        Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}
        Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
        void set();
        void show() const;
};

class SingWait : public Singer, public Waiter
{
    protected:
        void data() const;
        void get();
    public:
        SingWait() {}
        SingWait(const std::string &s, long n, int p = 0, int v = other) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
        SingWait(const Worker &wk, int p = 0, int v = other) : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
        SingWait(const Waiter & wt, int v = other) : Worker(wt), Waiter(wt), Singer(wt,v) {}
        SingWait(const Waiter &wt, int p = 0) : Worker(wt), Waiter(wt, p), Singer(wt) {}
        void set();
        void show() const;
};

/* Worker methods */
Worker::~Worker() {}

void Worker::get()
{
    getline(std::cin, fullname);
    std::cout << "Enter worker's ID: ";
    std::cin >> id;
    while (std::cin.get() != '\n')
        continue;
}

/* Waiter Methods */

void Waiter::get()
{
    std::cout << "enter waiter's panache rating: ";
    std::cin >> panache;
    while (std::cin.get() != '\n')
        continue;
}

void Waiter::set()
{
    std::cout << "Enter waiter's name: ";
    Worker::get();
    get();
}

void Waiter::data() const
{
    std::cout << "Panache rating: " << panache << std::endl;
}

void Waiter::show() const
{
    std::cout << "Category: waiter" << std::endl;
    Worker::data();
    data();
}

/* singer methods */
char *Singer::pv[Singer::v_types] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::get()
{
    std::cout << "Enter number for singers vocal range: " << std::endl;
    int i = 0;
    for (i = 0; i < v_types; i++)
    {
        std::cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3)
            std::cout << std::endl;
    }
    std::cin >> voice;
    while (std::cin.get() != '\n')
        continue;
}

void Singer::set()
{
    std::cout << "enter singer's name: ";
    Worker::get();
    get();
}

void Singer::data() const
{
    std::cout << "Vocal range: " << pv[voice] << std::endl;
}

void Singer::show() const
{
    std::cout << "Category: singer" << std::endl;
    Worker::data();
    data();
}

#endif //WORKER_H
