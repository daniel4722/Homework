//Напишете програма, която изчислява броя на секундите в една година
#include<iostream>
using namespace std;
int main()
{
const int sekundi_na_minuta = 60;
const int minuti_na_chas = 60;
const int chasove_na_den = 24;
const int dni_na_godina = 365;

int const sekundi_na_godina = sekundi_na_minuta * minuti_na_chas * chasove_na_den * dni_na_godina ;
cout << sekundi_na_godina;
return 0;
}