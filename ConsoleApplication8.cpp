
#include <iostream>
class Calculator {
public:
    double num1() { return get_num1; }
    double num2() { return get_num2; }
    void set_priv_field1(int value) {  get_num1 = value; }
    void set_priv_field2(int value) {  get_num2 = value; }
    double add() {
        double num3 = num1 + num2;
        std::cout << "num1 + num2 = " << num3 << std::endl;
        return num3;
    }
    double multiply(){
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
    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            return true;
        }
    }
    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            return true;
        }
    }
 
private:
    double get_num1 = 1, get_num2 = 1;
 

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
        Calculator name;
        name.set_priv_field1(num1);
        name.set_priv_field2(num2);


        if (name.set_num1() * name.set_num2() == false) {
            std::cout << "Invaild input!\n";
            continue;
        }
        name.add();
        name.multiply();
        name.subtract_1_2();
        name.subtract_2_1();
        name.divide_1_2();
        name.divide_2_1();
    }
}

