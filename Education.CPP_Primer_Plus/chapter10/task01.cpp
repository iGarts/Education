#include "task01.h"

Client::Client()
{
    client_name = ("empty");
    account = 0;
    balance = 0;
};

Client::Client(std::string name, long acc, double bal)
{
    client_name = name;
    account = acc;
    balance = bal;
}

Client::~Client() {}

void Client::print_client(Client &str)
{
    std::cout << str.client_name << ": \n"
         << "Account number: " << str.account << "\n"
         << "Balance: " << str.balance << std::endl;
}

void Client::deposit(Client &client, double sum)
{
    client.balance += sum;
}

void Client::withdraw(Client &client, double sum)
{
    client.balance -=sum;
}


int main()
{
    Client client("Vasya Petrov", 00001, 10.00);
    client.print_client(client);
    client.deposit(client, 2.58);
    client.print_client(client);
    client.withdraw(client, 8.0);
    client.print_client(client);
}
