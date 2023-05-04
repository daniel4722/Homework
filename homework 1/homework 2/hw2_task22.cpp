//Напишете програма, която принтира въведен от потребителя низ, като прави всички букви главни и заменя точките с 3 удивителни.

#include <iostream>
#include <string>

int main() {
  std::string str;
  std::getline(std::cin, str);

  for (char & c : str) {
    if (c == '.') {
      c = '!';
      std::cout << "!!!" ;
    } 
  else {
      c = std::toupper(c); 
    }
  }

  std::cout << str << std::endl;

  return 0;
}