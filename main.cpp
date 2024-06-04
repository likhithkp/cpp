#include<iostream>
#include<deque>

int main(){
    std::deque<int> a;

    a.push_front(1);
    a.push_back(2);

    std::cout << a.front() << '\n';
    std::cout << a.back() << '\n';

    std::cout << "-------------" << '\n';

    a.pop_back();
    for(int i : a){
        std::cout << i << '\n'; 
    }

    std::cout << "-------------" << '\n';

    std::cout << a.empty() << '\n';

    std::cout << "-------------" << '\n';

    a.erase(a.begin(), a.begin() + 1);
    std::cout << "---**********--------" << '\n';

    std::cout << a.empty() << '\n';
    return 0;
}
