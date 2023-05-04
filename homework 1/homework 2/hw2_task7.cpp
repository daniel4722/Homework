//Напишете програма, която принтира размерите на примитивните типове в битове и в байтове на средата, за която компилирате.

#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "Size of char: " << CHAR_BIT << " bits, " << sizeof(char) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) * 8 << " bits, " << sizeof(int) << " bytes" << endl;
   cout << "Size of float: " << sizeof(float) * 8 << " bits, " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) * 8 << " bits, " << sizeof(double) << " bytes" << endl;    
return 0;
}