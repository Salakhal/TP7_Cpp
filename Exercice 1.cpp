#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    // Constructeur avec nom uniquement
    Contact(string n) : nom(n), telephone("Non défini"), email("Non défini") {}

    // Constructeur avec nom et numéro de téléphone
    Contact(string n, string t) : nom(n), telephone(t), email("Non défini") {}

    // Constructeur avec nom, téléphone et email
    Contact(string n, string t, string e) : nom(n), telephone(t), email(e) {}

    // Méthode pour afficher les informations du contact
    void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Téléphone : " << telephone << endl;
        cout << "Email : " << email << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Création des contacts avec différents constructeurs
    Contact c1("Alice");
    Contact c2("Bob", "0601020304");
    Contact c3("Charlie", "0611223344", "charlie@email.com");

    // Affichage des contacts
    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
