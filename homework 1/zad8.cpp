#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Vuvedete tsyalo chislo: ";
  cin >> num;

int digit_last = num % 10;

if(digit_last == 0){
  cout<<"Poslednata tsifra e ravna na 0"<<endl;
}
else {
  cout<<"Poslednata tsifra ne e ravna na 0"<<endl;
}
return 0;
}