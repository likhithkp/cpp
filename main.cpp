#include<iostream>
#include<list>

int main(){
    std::list<int> l;
    l.push_front(1);
    l.push_back(2);

    l.erase(l.begin());
    for(int i: l){
        std::cout << i << '\n';
    }
    return 0;
}
