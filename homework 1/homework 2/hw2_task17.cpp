//Напишете програма, която прочита стринг и char от потребителя и принтира първата и последната позиция на която се среща символа в низа
#include<iostream>
#include<string>
using namespace std;

int main()
{
string str1;
char p;
int count = 0;

cout<< "Vuvedete string: ";
getline(cin, str1);

cout<< "Vuvedete character : ";
cin>>p;

for (unsigned i = 0; i< str1 .length();i++){
  if(str1[i] == p){
    count++;
  }
}
cout<<p<<count;
return 0;
}