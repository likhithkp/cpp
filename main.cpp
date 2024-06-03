#include<iostream>

struct car{
    std::string brand;
    std::string name;
    double mileage;
    std::string color;
};

void displayCar(car &x){
    std::cout << &x << '\n';
    std::cout << "The car details are" << '\n';
    std::cout << x.brand << '\n';
    std::cout << x.name << '\n';
    std::cout << x.mileage << '\n';
    std::cout << x.color << '\n';
}

void paintCar(car &x, std::string color){
    x.color = color;
}

int main(){
    car bmw;
    bmw.brand = "BMW";
    bmw.name = "5 series";
    bmw.mileage = 9.82;
    bmw.color = "Metallic blue";

    std::cout << &bmw << '\n';
    paintCar(bmw, "Gold");
    displayCar(bmw);
    return 0;
}
