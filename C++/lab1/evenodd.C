#include <iostream>

int main()
{
    int n;

    std::cout << "Enter an integer: ";
   std:: cin >> n;

    if ( n % 2 == 0){
      std::cout << n << " is even."<<std::endl;
      std::cout<<"The multiplication table for "<< n <<" is as follows:"<<std::endl;
   for (int i = 1; i <= 20; i++)
  std::cout << n << " * " << i << " = " << n * i << std::endl;
    }
    else {
        std::cout << n << " is odd."<<std::endl;
        std::cout<<"The 30 odd numbers not divisible the "<< n <<" is as follows:"<<std::endl;
        for (int i = 1; i <= 30; i++)
        std::cout<<n+i<<std::endl;
    }

    return 0;
}