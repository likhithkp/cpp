#include <iostream>
#include <cmath>

int main(){
    int age ;

    std::cout << "Enter your age";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are too old";
    }
    else if (age >= 18){
        std::cout << "Welcome to the bar!!";
    }
    else if (age < 0){
        std::cout << "You aren't even born yet";
    }
    else{
        std::cout << "You are not old enough";
    }

    return 0;
}