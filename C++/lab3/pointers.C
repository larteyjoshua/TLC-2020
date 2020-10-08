#include <iostream>
int main(){
char name[] {"C++ Programming"};
char *p {name};
std:: cout<<name[4] <<std::endl;
std:: cout <<*(p +4)<<std::endl;
std:: cout << *(4 +p)<< std::endl;

}

