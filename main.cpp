#include<iostream>

int main(){
    std::string name = "Likhith";
    std::string *pName = &name;
    std::cout << *pName << '\n';
    return 0;
};