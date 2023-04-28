#include<iostream>
using namespace std;
int main()
{
int num, sum = 0;
cout<<"Vuvedete chislo : ";
cin >> num;
while (num != 0 )
{
  sum += num%10;
  num/=10;
}
cout<<"sumata na tsifrite e : "<< sum << endl;
return 0;
}