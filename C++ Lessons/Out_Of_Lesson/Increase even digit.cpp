#include <iostream>
int main() {
    int a;
    std::cin>>a;
    int first  = a/10000;
    int second = a/1000 - first*10;
    int third  = a/100 - first*100  - second *10;
    int fourth = a/10 - first*1000 - second*100 - third*10;
    int fifth  = a%10;
    if(first %2 == 0)first++;
    if(second%2 == 0)second++;
    if(third %2 == 0)third++;
    if(fourth%2 == 0)fourth++;
    if(fifth %2 == 0)fifth++;
    std::cout<<first<<second<<third<<fourth<<fifth;
}