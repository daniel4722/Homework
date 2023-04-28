#include <iostream>
using namespace std;

int main() {
int num1, num2, num3, min;

cout << "Vuvedi 3 chisla: ";
cin >> num1 >> num2 >> num3;
min = num1;
if(num2<num1)
{
  min = num2;
}
if (num3<min)
{
  min=num3;
}

cout<<"nai-malkoto chislo e: "<<min; 
return 0;
}






