#include<iostream>
#include<stack>

int main(){
    std::stack<std::string> s;

    s.push("Likhith");
    s.push("Shiba");
    s.push("Lauda");

    std::cout << s.top() << '\n';
    s.pop();
    std::cout << s.top() << '\n';
    std::cout << s.size() << '\n';
    std::cout << s.emplace() << '\n';

    return 0;
}
