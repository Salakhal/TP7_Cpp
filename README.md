# TP 7 – Surcharge de méthodes et constructeurs 

## Description générale

Ce TP a pour objectif de pratiquer la **surcharge de constructeurs et de méthodes** en C++ à travers différents exercices : gestion de contacts, système de facturation et comptes bancaires.  
Chaque exercice illustre l’adaptation du comportement d’une classe selon les paramètres disponibles.

---



## Exercice 1 : Gestion d’un carnet d’adresses

**Objectif pédagogique :**  
Comprendre la surcharge de constructeurs en fonction des paramètres disponibles.

**Description :**  
- Classe `Contact` avec trois constructeurs surchargés :  
  1. Nom uniquement.  
  2. Nom + numéro de téléphone.  
  3. Nom + numéro + email.  
- Méthode `afficher()` pour afficher les informations d’un contact.

**Exemple d’exécution :**

```
Nom : Salma
Téléphone : Non défini
Email : Non défini
----------------------
Nom : Adnan
Téléphone : 0601020304
Email : Non défini
----------------------
Nom : Imane
Téléphone : 0611223344
Email : imane@email.com
----------------------
```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="768" height="425" alt="image" src="https://github.com/user-attachments/assets/180e1eb3-f215-4594-adcc-5576992f7f12" />

---

## Exercice 2 : Système de facturation

**Objectif pédagogique :**  
Maîtriser la surcharge de méthodes pour ajouter des articles à une facture.

**Description :**  
- Classe `Facture` avec méthode `ajouterArticle()` surchargée :  
  1. Nom + prix unitaire (quantité=1, TVA=20%).  
  2. Nom + prix + quantité (TVA=20%).  
  3. Nom + prix + quantité + TVA personnalisée.  
- Articles stockés dans un `std::vector<Article>`.  
- Méthode `afficherTotal()` pour le détail et le total.



**Exemple d’exécution :**
```
Facture détaillée :
Stylo - Prix: 2.5 x 1 (TVA 20%) = 3
Cahier - Prix: 5 x 3 (TVA 20%) = 18
Sac à dos - Prix: 50 x 1 (TVA 10%) = 55
----------------------
Total facture : 76

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="769" height="220" alt="image" src="https://github.com/user-attachments/assets/54e33137-725e-4c68-9cda-95f9c1c06208" />


---

## Exercice 3 : Banque – Compte bancaire

**Objectif pédagogique :**  
Savoir surcharger constructeurs et méthodes pour gérer la logique métier et la sécurité.

**Description :**  
- Classe `CompteBancaire` avec :  
  - Constructeurs surchargés : sans solde, avec solde, avec solde + code sécurité.  
  - Méthodes `retrait()` surchargées : retrait simple ou avec code de sécurité.  
  - Méthode `afficherSolde()` pour afficher le solde actuel.


**Exemple d’exécution :**
```
Solde actuel : 0 €
Solde actuel : 1000 €
Solde actuel : 500 €
----------------------
Retrait de 200 € effectué avec succès.
Code de sécurité incorrect !
Retrait de 100 € effectué avec succès.
----------------------
Solde actuel : 0 €
Solde actuel : 800 €
Solde actuel : 400 €

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="790" height="390" alt="image" src="https://github.com/user-attachments/assets/1906e6d5-4b2f-447a-b3cc-fa75ad848391" />















