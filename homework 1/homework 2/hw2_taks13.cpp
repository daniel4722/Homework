//Напишете програма, в която инициализирате променливи, използвайки всички видове литерали, които се сетите и която евентуално бихте могли да ползвате за референция вбъдеще.
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Vuvedete c++ int literal ot binary,octal,decimal ili hexadecimal brona systema: ";
    cin >> input;

    unsigned int value;
    if (input.substr(0, 2) == "0b") { 
        string binary = input.substr(2);
        value = stoi(binary, nullptr, 2);
    } else if (input.substr(0, 2) == "0x") { 
        string hex = input.substr(2);
        stringstream ss;
        ss << hex << hex;
        ss >> value;
    } else if (input[0] == '0') {
        value = stoi(input, nullptr, 8);
    } else { 
        value = stoi(input);
    }

    cout << "Stoynostta e : " << value << endl;

    return 0;
}
//МНОГО си помогнах с интернет.Чувствам се длъжен да спомена това.