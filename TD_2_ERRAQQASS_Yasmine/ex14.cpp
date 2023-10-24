#include <iostream>
using namespace std;

class Pile {
private:
    int* elements;
    int taille;
    int sommet;

public:
    Pile(int tailleMax) : taille(tailleMax), sommet(-1) {
        elements = new int[taille];
    }

    ~Pile() {
        delete[] elements;
    }

    bool estVide() const {
        return sommet == -1;
    }

    bool estPleine() const {
        return sommet == taille - 1;
    }

    void push(int valeur) {
        if (!estPleine()) {
            elements[++sommet] = valeur;
        } else {
            cout << "La pile est pleine, impossible d'empiler." << endl;
        }
    }

    int pop() {
        if (!estVide()) {
            return elements[sommet--];
        } else {
            cout << "La pile est vide, impossible de dépiler." <<endl;
            return -1;
        }
    }
};

int main() {
    Pile p1(5);
    Pile p2(3);

    for (int i = 1; i <= 5; i++) {
        p1.push(i * 10);
    }

    for (int i = 1; i <= 3; i++) {
        p2.push(i * 5);
    }

    cout << "Dépilement de p1 : ";
    while (!p1.estVide()) {
       cout << p1.pop() << " ";
    }
   cout <<endl;

    cout << "Dépilement de p2 : ";
    while (!p2.estVide()) {
        cout << p2.pop() << " ";
    }
    cout <<endl;

    return 0;
}
