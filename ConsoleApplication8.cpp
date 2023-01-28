
#include <iostream>
class Calculator {
public:
    double num1,num2;
    double add(double num1, double num2);// -метод должен возвращать результат сложения num1 и num2
    double multiply(double num1, double num2);// -метод должен возвращать результат перемножения num1 и num2
    double subtract_1_2(double num1, double num2);// -метод должен возвращать результат вычитания num2 из num1
    double subtract_2_1(double num1, double num2);// -метод должен возвращать результат вычитания num1 из num2
    double divide_1_2(double num1, double num2);// -метод должен возвращать результат деления num1 на num2
    double divide_2_1(double num1, double num2);// -метод должен возвращать результат деления num2 на num1
    bool set_num1(double num1);
    bool set_num2(double num2);
};

bool Calculator::set_num1(double num1) {
    if (num1 == 0) {
        return false;
    }
}
bool Calculator::set_num2(double num2) {
    if (num2 == 0) {
        return false;
    }
}
double Calculator::add(double num1, double num2) {
    double num3 = num1 + num2;
    std::cout << "num1 + num2 = "<< num3<<std::endl;
    return num3;
}
double Calculator::multiply(double num1, double num2) {
    double num3 = num1 * num2;
    std::cout << "num1 * num2 = " << num3 << std::endl;
    return num3;
}
double Calculator::subtract_1_2(double num1, double num2) {
    double num3 = num1 - num2;
    std::cout << "num2 - num1 = " << num3 << std::endl;
    return num3;
}
double Calculator::subtract_2_1(double num2, double num1) {
    double num3 = num1 - num2;
    std::cout << "num1 - num2 = " << num3 << std::endl;
    return num3;
}
double Calculator::divide_2_1(double num2, double num1) {
    double num3 = num1 / num2;
    std::cout << "num2 / num1 = " << num3 << std::endl;
    return num3;
}
double Calculator::divide_1_2(double num1, double num2) {
    double num3 = num1 / num2;
    std::cout << "num1 / num2 = " << num3 << std::endl;
    return num3;
}

int main()
{
    while (true)
    {
        double num1 = 1, num2 = 1;
        Calculator name{num1 , num2};
        std::cout << "enter num 1: ";
        std::cin >> num1;
        std::cout << "enter num 2: ";
        std::cin >> num2;
        if (name.set_num1(num1) * name.set_num2(num2) == false) {
            std::cout << "Invaild input!\n";
            continue;
        }
        name.add(num1, num2);
        name.multiply(num1, num2);
        name.subtract_1_2(num1, num2);
        name.subtract_2_1(num1, num2);
        name.divide_1_2(num1, num2);
        name.divide_2_1(num1, num2);
    }
}

