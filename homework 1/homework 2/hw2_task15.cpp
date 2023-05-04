//Напишете програма, която принтира въведен от потребителя символен низ наобратно. Използвайте unsigned тип за итериране

#include<iostream>
#include<cstring>
int main(){
const int max_size = 50;
char str[max_size];
std::cout<< "Vuvedete String :";
std::cin.getline(str,max_size);

std::cout<<"Obraten String: ";
for (unsigned int i = strlen(str); i > 0; i--){
  std::cout<<str[i-1];  
}
std::cout << std::endl;
return 0;
}