#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure pour représenter un article
struct Article {
    string nom;
    double prixUnitaire;
    int quantite;
    double tva;

    Article(string n, double p, int q = 1, double t = 0.2) 
        : nom(n), prixUnitaire(p), quantite(q), tva(t) {}
};

class Facture {
private:
    vector<Article> articles;

public:
    // Version avec nom et prix unitaire (quantité=1, TVA=20%)
    void ajouterArticle(const string& nom, double prix) {
        articles.push_back(Article(nom, prix));
    }

    // Version avec nom, prix et quantité (TVA=20%)
    void ajouterArticle(const string& nom, double prix, int quantite) {
        articles.push_back(Article(nom, prix, quantite));
    }

    // Version avec nom, prix, quantité et TVA
    void ajouterArticle(const string& nom, double prix, int quantite, double tva) {
        articles.push_back(Article(nom, prix, quantite, tva));
    }

    // Méthode pour afficher le total de la facture
    void afficherTotal() const {
        double total = 0;
        cout << "Facture détaillée :" << endl;
        for (const auto& a : articles) {
            double montant = a.prixUnitaire * a.quantite * (1 + a.tva);
            cout << a.nom << " - Prix: " << a.prixUnitaire
                 << " x " << a.quantite 
                 << " (TVA " << a.tva*100 << "%) = " << montant << endl;
            total += montant;
        }
        cout << "----------------------" << endl;
        cout << "Total facture : " << total << endl;
    }
};

int main() {
    Facture f;

    // Ajout d'articles avec différentes surcharges
    f.ajouterArticle("Stylo", 2.5);                 // quantité=1, TVA=20%
    f.ajouterArticle("Cahier", 5.0, 3);            // TVA=20%
    f.ajouterArticle("Sac à dos", 50.0, 1, 0.1);   // TVA=10%

    f.afficherTotal();

    return 0;
}
