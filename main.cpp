#include<iostream>
#include<vector>

int main(){
    std::vector<int> age;
    age.push_back(1);
    age.push_back(1);
    age.push_back(1);
    age.push_back(1);

    std::cout << age.size() << '\n';
    return 0;
}