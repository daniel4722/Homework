#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Vuvedete chislo: ";
cin>>num;

int last_digit = num % 10;

cout<<"poslednata tsifra na vuvedenoto chislo e : " << last_digit;

return 0;
}