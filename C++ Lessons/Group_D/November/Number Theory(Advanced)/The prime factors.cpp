#include <iostream>
int main() {
    long long a;
    std::cin>>a;
    for(long long i = 2;i<=a;i++){
        if(a%i == 0){
            if(a/i == 1){
                std::cout<<i;
                return 0;
            }
            std::cout<<i<<"*";
            a = a/i;
        }
    }
}