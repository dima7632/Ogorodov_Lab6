#include <iostream>
using namespace std;

int main() {
int a = 15,  b = 25; 
int* ptr1 = &a;    
int* ptr2 = &b;    
    
ptrdiff_t difference = ptr2 - ptr1;
    
cout << "Адреса ptr1: " << ptr1 << endl;
cout << "Адреса ptr2: " << ptr2 << endl;
cout << "Різниця адрес: " << difference << endl;

return 0;
}
