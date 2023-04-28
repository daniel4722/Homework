#include<iostream>
using namespace std;
int main()
{
int num;
cout <<"Vuvedete chislo: ";
cin>> num;
while (num != 0)
{
  cout<< num%10<<endl;
  num /=10 ; 
}

return 0;
}

//И тука си помогнах с интернет ,но съвсем малко