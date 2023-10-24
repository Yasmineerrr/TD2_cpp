#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& n, int a) : name(n), age(a) {}

    void display_info() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
    }
};

class Zebra : public Animal {
public:
    Zebra(const std::string& n, int a) : Animal(n, a) {}

    void display_info() {
        Animal::display_info();
        std::cout << "Origin: Africa" << std::endl;
    }
};

class Dolphin : public Animal {
public:
    Dolphin(const std::string& n, int a) : Animal(n, a) {}

    void display_info() {
        Animal::display_info();
        std::cout << "Origin: Oceans" << std::endl;
    }
};

int main() {
    Zebra zebra("Stripes", 5);
    Dolphin dolphin("Flipper", 10);

    std::cout << "Zebra Information:" << std::endl;
    zebra.display_info();

    std::cout << "\nDolphin Information:" << std::endl;
    dolphin.display_info();

    return 0;
}
