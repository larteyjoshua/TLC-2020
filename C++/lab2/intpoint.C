#include <iostream>

int main(){
int number {}; 
number=5;

std::cout <<"number assign to the value 5"<< std::endl;

const int Number {number};

int *numberptr{&number};

std::cout<<"Increasing the number "<<std::endl;
std::cout<<"Number increased is "<< ++*numberptr<<std::endl;
int &numberr {*numberptr};
std::cout <<"Increasing Reference number "<<std::endl;
std::cout <<"Reference Number increased is " << ++numberr<< std::endl;
std::cout <<"Constant number is "<< Number<<std::endl;
int literals1 {0xf3f2};
int literals2 {0437};
int literals3 {'a'};
std::cout<<"Literal 1= "<<literals1<<std::endl;
std::cout<<"Literal 2= "<<literals2<<std::endl;
std::cout <<"Literal 3=" <<literals3 <<std::endl;

}

