#include <iostream>

int main(){
    double temp;
    char unit;
    double result;

    std::cout << "Enter the unit you need to convert into (C/c, F/f)\n";
    std::cin >> unit;

    std::cout << "Enter the temperature\n";
    std::cin >> temp;

    if(unit == 'F' || unit == 'f'){
        temp = (1.8 * temp) + 32;
        std::cout << "The temperature in Fahrenheit is: " << temp << 'F' << '\n';
    } else if (unit == 'C' || unit =='c'){
        temp = (temp - 32) / 1.8;
        std::cout << "The temperature in Celsius is: " << temp << 'C' << '\n';
    }else {
        std::cout << "Please enter a valid input";
    }

    return 0;
}
