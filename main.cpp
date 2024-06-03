#include<iostream>

int main(){
    int *pPincode = nullptr;
    int size;

    std::cout << "Enter the size of pincode ";
    std::cin >> size;

    pPincode = new int[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter the number " << i + 1 << '\n';
        std::cin >> pPincode[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pPincode[i] << '\n';
    }
    
    delete[] pPincode;

    return 0;
}