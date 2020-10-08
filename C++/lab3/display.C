#include <iostream>
#include <string>




void display(int a){
	std:: cout<<a<< std::endl;
}
void display( char word){

	std:: cout <<word<<std::endl;
}

void display(double b){
	std::cout<<b<<std::endl;
}
void display(long c){
	std::cout<<c<<std::endl;
}
void display(std::string word){
std::cout<<word<< std::endl;
}

int main(){
	display(2);
	display('a');
	display(3.00);
	display("Joshua");
	return 0;

}