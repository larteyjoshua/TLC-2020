# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    

    cout << "Enter two operands: ";
    cin >> num1;
    cin >> num2;
std::cout << "Enter operator either + or - or * or /: ";
   std::cin >> op;
    switch(op)
    {
        case '+':
            cout<<"Adding "<<num1<<" and "<< num2<<"= "<< num1+num2<<endl;
            break;

        case '-':
           cout<<"Substracting "<<num1<<" and "<< num2<<"= "<< num1-num2<<endl;
            break;

        case '*':
            cout<<"Multiplying "<<num1<<" and "<< num2<<"= "<< num1*num2<<endl;
            break;

        case '/':
            cout<<"Dividing "<<num1<<" and "<< num2<<"= "<<num1/num2<<endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            std::cout << "Error! operator is not correct";
            break;
    }

    return 0;
}