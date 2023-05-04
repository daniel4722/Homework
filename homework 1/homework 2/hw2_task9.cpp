//Напишете програма, която по въведени от потребителя интервал от време в милисекунди, го принтира във формат: 
//<брой денонощия> <брой часове> <брой минути> <брой секунди> <брой милисекунди>
//Например, при въведени 63400 мс, програмата трябва да принтира:

#include<iostream>
int main()
{
  long long miliseconds;
  std::cout<<"Enter the time interval in miliseconds:";
  std::cin>>miliseconds;

  int days = miliseconds / (24 * 60 * 60 * 1000);
    miliseconds %= (24 * 60 * 60 * 1000);
  int hours = miliseconds / (60 * 60 * 1000);
    miliseconds %= (60 * 60 * 1000);
  int minutes = miliseconds / (60 * 1000);
    miliseconds %= (60 * 1000);
  int seconds = miliseconds / (1000);
    miliseconds %= (1000);
  
  std::cout << days << " dni, "<<hours << " chasove, "<<minutes<< " minuti , "<<seconds<< " sekundi, "<<miliseconds<<" milisekundi"<<std::endl;

}