#include<iostream>
using namespace std;
int main()
{
int num, sum = 0, count = 0;
cout<<"Vuvedete chislo : ";
cin >> num;
while (num != 0 )
{
  sum += num%10;
  count++;
  num/=10;
}
int average = sum / count;
cout<<"Srednoto aritmetichno na tsifrite e : "<< average << endl;
return 0;
}
// Задачата е като предната ,но добавих един count.