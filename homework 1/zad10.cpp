#include<iostream>
using namespace std;
int main()
{
int n , count = 0;
cout<<"Vuvedete chislo : ";
cin>>n;

while(n != 0) {
  count++;
  n /= 10;
}
cout<<"broyat na tsifrite na chisloto e: "<<count;
return 0;
}


//Тука си помогнах с интернет ,защото не се досетих да направя loop с count.