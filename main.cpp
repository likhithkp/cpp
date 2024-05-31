#include <iostream>

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}

int main(){
    double prices[] = {5500.78, 4500.34, 55.07};
    int size = sizeof(prices)/sizeof(double);

    double result = getTotal(prices, size);
    std::cout << result << '\n';

    return 0;
}


