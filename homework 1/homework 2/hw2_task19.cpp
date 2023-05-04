//Напишете програма, която проверява дали въведен от потребителя символен низ е палиндром.

#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Vuvedete chislo: ";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Chisloto e palidrom.";    
else    
cout<<"Chisloto ne e palidrom.";   
  return 0;  
}