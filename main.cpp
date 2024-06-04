#include<iostream>
#include<vector>

int main(){
    std::vector<int> a(5, 1);
    std::cout << "Size " << a.size() << '\n';
    std::cout << "Capacity " << a.capacity() << '\n';

    for(int i : a){
        std::cout << a[i];
    }
    return 0;
}
