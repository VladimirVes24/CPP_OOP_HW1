// CPPOOP_HW1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


//Task 1 ==================================================
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

//Task 2 ====================================================

class RGBA
{

public:
    RGBA()
    {
        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha = 255;
    }
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
    {
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha = alpha;
    }

    void print() 
    {
        std::cout << "\n\nRed: " << static_cast<int>(m_red) << "\nGreen: " << static_cast<int>(m_green) << "\nBlue: " << static_cast<int>(m_blue) << "\nAlpha: " << static_cast<int>(m_alpha);
    }
private:
    std::uint8_t m_red, m_green, m_blue, m_alpha;
};

//Task 3 ======================================================================================================================================================================================

class Stack
{
public:
    void reset()
    {
        for (int i = 0; i < stackLength; i++)
        {
            array[i] = 0;
        }
        stackLength = 0;
    }

    bool push(int num)
    {
        if (stackLength == 9) return false;
        else
        {
            array[stackLength] = num;
            stackLength++;
            return true;
        }
    }

    int pop()
    {
        int temp = array[stackLength];
        array[stackLength] = 0;
        stackLength--;
        return temp;
    }

    void print()
    {
        std::cout << "\n";
        for (int i = 0; i < stackLength; i++)
        {
            std::cout << array[i] << " ";
        }
    }
  
private:
    int stackLength = 0;
    int array[10];
};



int main()
{
    //Task1
    Power* num = new Power();
    std::cout << num->calculate() << "\n";
    num->setNumbers(3.8, 2.1);
    std::cout << num->calculate();
    delete num;


    //Task2
    RGBA* color = new RGBA(5,5,5,100);
    color->print();
    delete color;

    RGBA* color2 = new RGBA();
    color2->print();
    delete color2;

    //Task 3
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
    
}

