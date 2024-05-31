#include <iostream>

int main(){
    std::string name = "Likhith KP erb wrfwr rff3f34 24fr3";
    std::string names[] = {"Likhith KP", "Shiba", "Kumar", "Lauda"};
    int age = 2;
    double price = 22.45;
    char grade = 'A';
    char grades[] = {'A', 'B', 'C', 'D'};
    bool isHot = true;

    std::cout << sizeof(name) << '\n';
    std::cout << sizeof(names) << '\n';
    std::cout << sizeof(age) << '\n';
    std::cout << sizeof(price) << '\n';
    std::cout << sizeof(grade) << '\n';
    std::cout << sizeof(grades) << '\n';
    std::cout << sizeof(isHot) << '\n';

    return 0;
}


