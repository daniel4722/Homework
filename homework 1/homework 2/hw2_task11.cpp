//Напишете програма, която моли потребителя да въведе символен низ, репрезентиращ цяло положително число в 
//бинарен формат (низът е валиден вход ако е съставен само от символите на бинарните цифри - '0' и '1'), и принтира 
//числото в десетичен формат

#include<iostream>
#include<cmath>

int main()
{
int convert(long long);
  long long bin_num;
  std::cout<<"Vuvedete chislo v binaren format: ";
  std::cin>>bin_num;
  std::cout<<bin_num<<" v binaren format ; "<< convert(bin_num)<<" v desetichen format ";
}

int convert(long long big_num) {
  int dec = 0 , i = 0, rem;

  while (big_num != 0){
    rem = big_num % 10;
    big_num /= 10;
    dec += rem * pow(2,i);
    ++i;
  
}

return 0;
}