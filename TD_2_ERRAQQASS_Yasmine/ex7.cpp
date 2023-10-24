#include <iostream>
using namespace std;
void triBulle(int tab[], int taille) {
    int echanges = 0;
    bool permut = true;

    while (permut) {
        permut = false;
        for (int i = 0; i < taille - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                swap(tab[i], tab[i + 1]);
                permut = true;
                echanges++;
            }
        }
    }

    cout << "Nombre d'échanges effectués : " << echanges <<endl;
}

int main() {
    const int taille = 10;
    int tableau[taille];


    for (int i = 0; i < taille; i++) {
        cout << "Entrez un entier : ";
        cin >> tableau[i];
    }


    triBulle(tableau, taille);


    cout << "Tableau trié : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout <<endl;

    return 0;
}
