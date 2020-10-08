#include <iostream>
#include <string>
int main(){

std::cout<<"Please Enter a text"<<std::endl;
 std::string str;
getline(std::cin, str);
int n =str.length();
for (int i=0; i<n/2; i++)
    std::swap(str[i], str[n-i-1]);
    std::cout<<"The reverse string is "<<str<<std::endl;
    return 0;

}