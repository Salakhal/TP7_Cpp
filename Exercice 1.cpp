#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
  
    Contact(string n) : nom(n), telephone("Non défini"), email("Non défini") {}

    
    Contact(string n, string t) : nom(n), telephone(t), email("Non défini") {}

    Contact(string n, string t, string e) : nom(n), telephone(t), email(e) {}

  
    void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Téléphone : " << telephone << endl;
        cout << "Email : " << email << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Création des contacts avec différents constructeurs
    Contact c1("Salma");
    Contact c2("Adnan", "0601020304");
    Contact c3("Imane", "0611223344", "imane@email.com");

    // Affichage des contacts
    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
