#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string dateNaissance;

public:
    Personne(const string& n, const string& p, const string& d)
        : nom(n), prenom(p), dateNaissance(d) {}

    virtual void Afficher() const {
        cout << "Nom: " << nom <<endl;
        cout << "Prénom: " << prenom <<endl;
        cout << "Date de naissance: " << dateNaissance <<endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(const string& n, const string& p, const string& d, double s)
        : Personne(n, p, d), salaire(s) {}

    void Afficher() const override {
        Personne::Afficher();
        cout << "Salaire: " << salaire << " DH" <<endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef(const string& n, const string& p, const string& d, double s, const string& ser)
        : Employe(n, p, d, s), service(ser) {}

    void Afficher() const override {
        Employe::Afficher();
        cout << "Service: " << service <<endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(const string& n, const string& p, const string& d, double s, const string& ser, const string& soc)
        : Chef(n, p, d, s, ser), societe(soc) {}

    void Afficher() const override {
        Chef::Afficher();
        cout << "Société: " << societe <<endl;
    }
};

int main() {
    Directeur directeur("ERRAQQASS", "Yasmine", "23/02/2000", 4500, "responsable commerciale", "TSS");
    directeur.Afficher();

    return 0;
}
