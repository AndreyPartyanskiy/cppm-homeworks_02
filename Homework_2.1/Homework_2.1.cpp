// Homework_2.1.cpp 

#include <iostream>

enum class months {
    январь=1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int code=1;
    months month;

    while (code!=0) 
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> code;
        month = static_cast <months> (code);
        switch (month)
        {
            case months::январь: 
                std::cout << "Январь \n";
                break;
            case months::февраль:
                std::cout << "Февраль \n";
                break;
            case months::март:
                std::cout << "Март \n";
                break;
            case months::апрель:
                std::cout << "Апрель \n";
                break;
            case months::май:
                std::cout << "Май \n";
                break;
            case months::июнь:
                std::cout << "Июнь \n";
                break;
            case months::июль:
                std::cout << "Июль \n";
                break;
            case months::август:
                std::cout << "Август \n";
                break;
            case months::сентябрь:
                std::cout << "Сентябрь \n";
                break;
            case months::октябрь:
                std::cout << "Октябрь \n";
                break;
            case months::ноябрь:
                std::cout << "Ноябрь \n";
                break;
            case months::декабрь:
                std::cout << "Декабрь \n";
                break;
            default:
                if (code!=0) std::cout << "Неправильный номер! \n";
        }
    }
    std::cout << "До свидания \n";
}