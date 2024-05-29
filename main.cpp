#include <iostream>

int main(){
    double temp;
    bool isSunny = true;

    std::cout << "Enter the temperature";
    std::cin >> temp;

    if(temp >=0 && temp <= 30){
        std::cout << "The temperature is great\n";
    }else{
        std::cout << "The temperature is bad\n";
        !isSunny;
    }

    if(!isSunny){
        std::cout << "It is not sunny";
    } else {
        std::cout << "It is sunny";
    }

    return 0;
}
