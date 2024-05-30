#include <iostream>

double balance = 10000;

void showBalance(){
    std::cout << "Your balance is " << balance;
    return;
}

double addMoney(double money){
    std::cout << "Enter the amount to be added \n";
    std::cin >> money;
    return balance + money;
}

double withDraw(double money){
    std::cout << "Enter the amount to be withdrawn \n";
    std::cin >> money;
    return balance - money;
}

int main(){
    double amount = 0;
    char option = 'x';

    std::cout << "*******************\n";
    std::cout << "Welome to your bank\n";
    std::cout << "*******************\n";
    std::cout << "Select between (b - balance, w - withdraw, a - add, e - exit)\n";
    std::cin >> option;

    do{
        switch(option){
            case 'b': showBalance();
                    break;
            case 'a': addMoney(amount);
                    break;
            case 'w': double result = withDraw(amount);
                    std::cout << "The updated balance is " << result;
                    break;
            case 'e': std::cout << "Thank you for visting your bank\n";
                    break;
            default: std::cout << "Not a valid option, select between (b - balance, w - withdraw, a - add, e - exit)\n";
        }
    }while(option != 'e');
    return 0;
}


