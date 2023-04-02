// Homework_2.3.cpp 

#include <iostream>

struct Address
{
    std::string city;
    std::string street;
    int house_number;
    int apartment_number;
    int index;
};

void Print_address(Address* p)
{
    std::cout << "Город: " << p->city << std::endl;
    std::cout << "Улица: " << p->street << std::endl;
    std::cout << "Номер дома : " << p->house_number << std::endl;
    std::cout << "Номер квартиры : " << p->apartment_number << std::endl;
    std::cout << "Индекс: " << p->index << std::endl << std::endl;
}

int main()
{
    system("chcp 1251");
    system("cls");

    Address address_1 = {"Москва","Арбат",12,8,123456};
    Address address_2 = {"Ижевск","Пушкина",59,143,953769};

    Print_address(&address_1);
    Print_address(&address_2);
}

