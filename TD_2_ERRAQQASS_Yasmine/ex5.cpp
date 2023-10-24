#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int &ref_a = a;
    int *p_a = &a;

cout << "Variable a : " << a <<endl;
cout << "Adresse de a : " << &a << endl;
cout << "Valeur pointée par p_a : " << *p_a <<endl;
cout << "Adresse de p_a : " << p_a <<endl;
cout << "Valeur de ref_a : " << ref_a <<endl;

    return 0;
}
