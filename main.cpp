#include <iostream>

int main(){
    char grade;

    std::cout << "Enter your grade";
    std::cin >> grade;

    switch (grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did fine";
            break;
        case 'C':
            std::cout << "Study hard...";
            break;
        case 'D':
            std::cout << "You will be hanged to death for 5 years";
            break;
        default:
            std::cout << "Please enter grade in caps(A-D)";
    }

    return 0;
}
