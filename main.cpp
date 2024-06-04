#include<iostream>

class Student{
    public:
        std::string name;
        int age;
        std::string branch;
        std::string usn;

        void greet(){
            std::cout << "Hello from " << name << '\n';
        }
};

int main(){
    Student student1;

    student1.name = "Shiba Kumar";
    student1.age = 23;
    student1.branch = "CSE";
    student1.usn = "4CP22CS876";

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.branch << '\n';
    std::cout << student1.usn << '\n';
    student1.greet();
    return 0;
}
