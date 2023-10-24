#include <iostream>
using namespace std;

class Fichier {
private:
    char* pointeur;
    int longueur;

public:
    Fichier(int taille) {
        pointeur = new char[taille];
        longueur = taille;
    }


    ~Fichier() {
        delete[] pointeur;
    }


    void Creation(int taille) {
        pointeur = new char[taille];
        longueur = taille;
    }


    void Remplit() {
        for (int i = 0; i < longueur; i++) {
            pointeur[i] = 'X';
        }
    }


    void Affiche() {
        for (int i = 0; i < longueur; i++) {
            cout << pointeur[i];
        }
        cout <<endl;
    }
};

int main() {
    Fichier* monFichier = new Fichier(100);

    monFichier->Remplit();
    monFichier->Affiche();

    delete monFichier;

    return 0;
}
