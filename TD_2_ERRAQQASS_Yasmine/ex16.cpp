#include <iostream>
using namespace std;

struct Element {
    int donnee;
    Element* suivant;

    Element(int valeur) : donnee(valeur), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier;

public:
    Liste() : premier(nullptr) {}

    void AjouterElement(int valeur) {
        Element* nouvelElement = new Element(valeur);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void SupprimerElement() {
        if (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void AfficherListe() {
        Element* courant = premier;
        while (courant) {
            cout << courant->donnee << " ";
            courant = courant->suivant;
        }
        cout <<endl;
    }

    ~Liste() {
        while (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.AjouterElement(10);
    maListe.AjouterElement(20);
    maListe.AjouterElement(30);

    cout << "Liste actuelle : ";
    maListe.AfficherListe();

    maListe.SupprimerElement();
    cout << "Liste après suppression : ";
    maListe.AfficherListe();

    return 0;
}
