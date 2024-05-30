#include <iostream>
#include <string>
#include <sstream>
 
int main() {
 
    std::string s;
    std::getline(std::cin,s);
    std::stringstream ss(s);
    int sum=0,num;
    while(ss>>num)
    sum+=num;
    std::cout<<sum<<std::endl;
 
    return 0;
}