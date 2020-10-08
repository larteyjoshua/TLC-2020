#include <iostream>
using namespace std;

void removeDupWord(string str)
{
string word = "";
for (auto x : str)
{
if (x == '-')
{
int count = 0;
for(auto ch : word) {
count++;
}
cout << word << " "<< count << endl;
word = "";
}
else
{
word = word + x;
}
}
int count = 0;
for(auto ch : word) {
count++;
}
cout << word << " "<< count << endl;
}
int main()
{
string str;
cout <<"please enter string"<<endl;
cin>> str;
removeDupWord(str);
return 0;
}