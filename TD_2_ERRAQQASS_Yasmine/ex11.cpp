#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0.0f, float y = 0.0f, float z = 0.0f) : x(x), y(y), z(z) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D somme(const Vecteur3D& autre) const {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }

    float produitScalaire(const Vecteur3D& autre) const {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    bool coincide(const Vecteur3D& autre) const {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    static const Vecteur3D& normax(const Vecteur3D& v1, const Vecteur3D& v2) {
        return v1.norme() >= v2.norme() ? v1 : v2;
    }
};

int main() {
    Vecteur3D v1(1.0f, 2.0f, 3.0f);
    Vecteur3D v2(3.0f, 2.0f, 1.0f);

    cout << "Vecteur v1 : ";
    v1.afficher();
   cout << "Vecteur v2 : ";
    v2.afficher();

    Vecteur3D somme = v1.somme(v2);
    cout << "Somme des vecteurs : ";
    somme.afficher();

    float produit_scalaire = v1.produitScalaire(v2);
    cout << "Produit scalaire des vecteurs : " << produit_scalaire <<endl;

    if (v1.coincide(v2)) {
       cout << "Les vecteurs ont les mêmes composantes." <<endl;
    } else {
       cout << "Les vecteurs n'ont pas les mêmes composantes." <<endl;
    }

    float norme_v1 = v1.norme();
    cout << "Norme du vecteur v1 : " << norme_v1 <<endl;

    const Vecteur3D& vecteurMax = Vecteur3D::normax(v1, v2);
    cout << "Le vecteur avec la plus grande norme est : ";
    vecteurMax.afficher();

    return 0;
}
