#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    double solde;
    string codeSecurite;

public:
    
    CompteBancaire() : solde(0.0), codeSecurite("0000") {}

    CompteBancaire(double s) : solde(s), codeSecurite("0000") {}

    CompteBancaire(double s, const string& code) : solde(s), codeSecurite(code) {}

    void afficherSolde() const {
        cout << "Solde actuel : " << solde << " €" << endl;
    }

    void retrait(double montant) {
        if (montant <= 0) {
            cout << "Montant invalide." << endl;
            return;
        }
        if (montant > solde) {
            cout << "Fonds insuffisants pour retirer " << montant << " €" << endl;
        } else {
            solde -= montant;
            cout << "Retrait de " << montant << " € effectué avec succès." << endl;
        }
    }

    void retrait(double montant, const string& code) {
        if (code != codeSecurite) {
            cout << "Code de sécurité incorrect !" << endl;
            return;
        }
        retrait(montant);
    }
};

int main() {
    CompteBancaire c1;                 // solde = 0
    CompteBancaire c2(1000);           // solde = 1000
    CompteBancaire c3(500, "1234");    // solde = 500, code = 1234

    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();
    cout << "----------------------" << endl;

    // Retraits
    c2.retrait(200);                  
    c3.retrait(100, "0000");          
    c3.retrait(100, "1234");           

    cout << "----------------------" << endl;
    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();

    return 0;
}
