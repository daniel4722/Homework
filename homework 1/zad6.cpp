#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Vuvedi chislo: ";
cin>>n;

if (n < 0){
n = -n;
}
cout<<"Absolutnata stoinoist na vuvedenoto chislo e: "<<n;
return 0;
}