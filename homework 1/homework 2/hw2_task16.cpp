//Напишете програма, която прочита стринг и char от потребителя и връща броя на срещанията на символа в стринга
#include<iostream>
#include<string>
using namespace std;

int main()
{
string str1;
char p;

cout << "Vuvedete string : ";
getline(cin,str1);

cout<<"Vuvedete characters: ";
cin>>p;

int count = 0 ;
for(unsigned int i = 0 ; i < str1.length(); i++)
{
  if ( str1 [i] == p)
  {
    count ++;
  }
}
cout<< p << count <<endl ; 

return 0;
}