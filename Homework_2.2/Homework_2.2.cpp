// Homework_2.2.cpp

#include <iostream>

struct Account
{
    int account_number;
    std::string owner_name;
    double balance;
};

void New_owner_acc(Account* p)
{
    std::cout << "Введите номер счёта : ";
    std::cin >> p->account_number;
    std::cout << "Введите имя владельца : ";
    std::cin >> p->owner_name;
    std::cout << "Введите баланс : ";
    std::cin >> p->balance;
}

void New_balance(Account* p)
{
    std::cout << "Введите новый баланс : ";
    std::cin >> p->balance;
}

void Print_account(Account* p)
{
    std::cout << "Ваш счёт : " << p->owner_name << "," << p->account_number << "," << p->balance << std::endl;
}

int main()
{
    system("chcp 1251");
    system("cls");
    Account account_new;
    New_owner_acc(&account_new);
    New_balance(&account_new);
    Print_account(&account_new);
}