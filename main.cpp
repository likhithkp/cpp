#include<iostream>

class Car{
    private:
        void drive(){
            std::cout << "Car has started and is moving";
        };
    public:
        void getDrive(){
            drive();
        }
};

int main(){
    Car car1;
    car1.getDrive();
    return 0;
}
