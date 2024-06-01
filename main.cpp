#include <iostream>

int getIndex(std::string array[], int size, std::string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    std::string foods[5] = {"burger", "pizza", "paratha", "poori", "idli"};
    int size = sizeof(foods)/sizeof(std::string);
    std::string myFood;
    int index;

    std::cout << "Enter the food\n"; 
    std::getline(std::cin, myFood);

    index = getIndex(foods, size, myFood);

    if(index != -1 ){
        std::cout << "The food is in the index " << index; 
    }else {
        std::cout << "The food is not in the index\n";
    }


    return 0;
}