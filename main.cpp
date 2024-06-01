#include<iostream>

typedef std::string nameSyntax;

int main(){
    nameSyntax name;
    std::cout << "Enter your name\n";
    std::cin >> name;

    std::cout << "Your name is " << name;
    return  0;
}