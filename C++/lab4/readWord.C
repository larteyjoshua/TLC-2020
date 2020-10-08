#include <iostream>
#include <cstring>
#include <string>

int main(){
    //taking string input
    std::cout<<"Please Enter a word"<<std::endl;

    std::string str = "";

    getline(std::cin, str);

    char * c_array = new char [str.length()];
    strcpy(c_array, str.c_str());

for (int i=0; i<str.length(); i++){
    std:: cout <<c_array[i]<<std::endl;
}
  return 0;  

}