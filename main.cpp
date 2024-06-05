#include<iostream>
#include<map>

int main(){
    std::map<int, std::string> m;

    m[1] = "Hello";    
    m[2] = "Likhith";    
    m[3] = "Shiba";    
    m[22] = "Lauda";   

    m.insert({12, "Cobra"});

    for(auto v : m){
        std::cout << v.first << " " << v.second << " " << "\n";
    }; 

    std::cout << m.count(3) << '\n';

    return 0;
}
