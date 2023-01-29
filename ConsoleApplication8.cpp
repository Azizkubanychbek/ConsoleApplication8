
#include <iostream>
class Calculator {
public:

    Calculator(double num1, double num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
    double add() {
        double num3 = num1 + num2;
        std::cout << "num1 + num2 = " << num3 << std::endl;
        return num3;
    }
    double multiply() {
        double num3 = num1 * num2;
        std::cout << "num1 * num2 = " << num3 << std::endl;
        return num3;
    }
    double subtract_1_2() {
        double num3 = num1 - num2;
        std::cout << "num2 - num1 = " << num3 << std::endl;
        return num3;
    }
    double subtract_2_1() {
        double num3 = num2 - num1;
        std::cout << "num1 - num2 = " << num3 << std::endl;
        return num3;
    }
    double divide_1_2() {
        double num3 = num1 / num2;
        std::cout << "num1 / num2 = " << num3 << std::endl;
        return num3;
    }
    double divide_2_1() {
        double num3 = num2 / num1;
        std::cout << "num2 / num1 = " << num3 << std::endl;
        return num3;
    }
    bool set_num1() {
        if (num1 == 0) {
            return false;
        }
        else {
            return true;
        }
    }
    bool set_num2() {
        if (num2 == 0) {
            return false;
        }
        else {
            return true;
        }
    }

private:
    double num1 ,num2;


};


int main()
{
    while (true)
    {
        double num1 = 1, num2 = 1;
        std::cout << "enter num 1: ";
        std::cin >> num1;
        std::cout << "enter num 2: ";
        std::cin >> num2;
        Calculator calculator(num1, num2);


        if (calculator.set_num1() * calculator.set_num2() == false) {
            std::cout << "Invaild input!\n";
            continue;
        }
        calculator.add();
        calculator.multiply();
        calculator.subtract_1_2();
        calculator.subtract_2_1();
        calculator.divide_1_2();
        calculator.divide_2_1();
    }
}
