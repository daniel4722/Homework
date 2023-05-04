//Напишете програма, която моли потребителя да въведе низ. След това принтирайте низа, но с премахнати дублиращи се последователни space-а

#include<iostream>
#include<cstring>
int main()
{
char str[30];
std::cin.getline(str,30);
for(int i=0; i<30;i++){
  if((str[i]==' ' && str[i+1]==' ') || (str[i] == ' ' && str[i-1]==' ' ) )
  {
    for (int j=1; j<30 ; j++) str[j]=str[j+1];
  }
}
std::cout<<str;
return 0;
}