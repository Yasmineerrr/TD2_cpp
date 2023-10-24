#include <iostream>

void incrementer(int &valeur) {
    valeur++;
}

void permuter(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Avant incrementer() : a = " << a << ", b = " << b << std::endl;

    incrementer(a);

    std::cout << "Après incrementer() : a = " << a << ", b = " << b << std::endl;

    std::cout << "Avant permuter() : a = " << a << ", b = " << b << std::endl;

    permuter(a, b);
    std::cout << "Après permuter() : a = " << a << ", b = " << b << std::endl;

    return 0;
}
