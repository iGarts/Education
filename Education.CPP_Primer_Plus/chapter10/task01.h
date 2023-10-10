#ifndef TASK01_H
#define TASK01_H

#include <string>
#include <iostream>

class Client
{
    private:
        std::string client_name;
        long account;
        double balance;

    public:
        Client();
        Client(std::string name, long acc = 0, double bal = 0);
        ~Client();
        void print_client(Client &str);
        void deposit(Client &client, double sum);
        void withdraw(Client &client, double sum);
};

#endif // TASK01_H
