//Напишете програма, която по въведени от потребителя база на бройна система и брой цифри на цяло положително 
//число, принтира най-голямата възможна стойност на числото в десетичен вид.

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
string num_system;
int num_type;

cout<<"Izberete / Vuvedete broina sistema (binary, octal, decimal, ili hexadecimal) ";
cin>>num_system;
cout<<"Vuvedete chislo: ";
cin>>num_type;

int base;
if(num_system == "binary")  {
  base = 2;
}
if (num_system == "octal")
{
  base = 8;
}
if(num_system == "decimal"){
  base = 10;
}
if(num_system == "hexadecimal"){
  base = 16;
}
int largestnum = pow(base , num_type) ;
cout<< "Nai - golqmata vuzmojna stoinost na chisloto e: "<<largestnum<<endl;
return 0;
}