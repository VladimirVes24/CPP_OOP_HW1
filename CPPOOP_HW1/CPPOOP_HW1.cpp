// CPPOOP_HW1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Power 
{
public:
    Power()
    {
        firstNumber = 2;
        secondNumber = 5;
    }
    void setNumbers(double a, double b)
    {
        firstNumber = a;
        secondNumber = b;
    }

    double calculate()
    {
        return (pow(firstNumber, secondNumber));
    }
private:
    double firstNumber;
    double secondNumber;
};

int main()
{
    //Task1
    Power* num = new Power();
    num->setNumbers(3, 2);
    std::cout << num->calculate();
    delete num;

    
}

