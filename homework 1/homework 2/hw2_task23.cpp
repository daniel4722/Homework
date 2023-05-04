//Напишете програма, която моли потребителя да въведе текст на няколко реда до достигането на EOF. След това принтирайте: броя на редовете, броя на думите и броя на буквите в текста
#include<iostream>

int main()
{
int redove = 0,dumi = 0,bukvi = 0;
char p;

while (std::cin.get(p)){
  if(p =='\n'){
    redove++;
  }
  if(isalpha(p)){
    bukvi++;
  }
  if(isspace(p)){
    dumi++;
  }
}
dumi++;
std::cout<<"Broyat na redovete sa : "<<redove<<std::endl;
std::cout<<"Broyat na dumite sa :"<<dumi<<std::endl;
std::cout<<"Broyat na bukvite sa: "<<bukvi << std::endl;

return 0;
}
