#include <iostream>
int sum(int a, int b);
void input(){
int a = 0;
int b= 0;

std::cout<<"Please enter two integers"<<std::endl;
std::cin >>a;
std::cin >>b;
std::cout <<"The sum is "<< sum(a,b)<< std::endl;
}


int sum(int a, int b){
int add =0;
add= a+b;
return add;

}
int main(){

input();
}
