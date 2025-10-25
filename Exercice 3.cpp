#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    double solde;
    string codeSecurite;

public:
    // Constructeur sans solde initial, code par défaut "0000"
    CompteBancaire() : solde(0.0), codeSecurite("0000") {}

    // Constructeur avec solde initial et code par défaut "0000"
    CompteBancaire(double s) : solde(s), codeSecurite("0000") {}

    // Constructeur avec solde initial et code de sécurité personnalisé
    CompteBancaire(double s, const string& code) : solde(s), codeSecurite(code) {}

    // Méthode pour afficher le solde
    void afficherSolde() const {
        cout << "Solde actuel : " << solde << " €" << endl;
    }

    // Retrait avec montant uniquement
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

    // Retrait avec montant et code de sécurité
    void retrait(double montant, const string& code) {
        if (code != codeSecurite) {
            cout << "Code de sécurité incorrect !" << endl;
            return;
        }
        // Appel de la version sans code pour la logique métier
        retrait(montant);
    }
};

int main() {
    // Création de comptes
    CompteBancaire c1;                 // solde = 0
    CompteBancaire c2(1000);           // solde = 1000
    CompteBancaire c3(500, "1234");    // solde = 500, code = 1234

    // Affichage des soldes
    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();
    cout << "----------------------" << endl;

    // Retraits
    c2.retrait(200);                   // Retrait simple
    c3.retrait(100, "0000");           // Code incorrect
    c3.retrait(100, "1234");           // Code correct

    // Affichage des soldes après retrait
    cout << "----------------------" << endl;
    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();

    return 0;
}
