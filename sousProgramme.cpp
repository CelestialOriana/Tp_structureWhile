//
// Created by emmanuel.a on 15/10/2024.
//

#include "sousProgramme.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Procédure pour afficher 10 nombres
void affichage10Nombres(int nbDepart) {
    int compteur = 1;  // Initialiser le compteur

    // Utiliser une boucle while pour afficher les 10 nombres
    while (compteur < 11) {
        cout << nbDepart + compteur << endl; // Afficher le nombre
        compteur++;
    }
}
void compteRebours() {
    int compteur = 5;  // Initialiser le compteur
    while (compteur >= 0) {
        cout << compteur << endl; // Afficher le nombre
        compteur--;
    }
}
void nombreAléatoire() {
    srand(time(0));
        cout << rand() << endl;
    int randomNum1 = rand();
    cout << "Premier nombre aleatoire : " << randomNum1 << endl;


    int randomNum2 = rand();
    cout << "Deuxieme nombre aleatoire : " << randomNum2 << endl;


    if (randomNum1 != randomNum2) {
        cout << "Les deux nombres sont differents." << endl;
    } else {
        cout << "Les deux nombres sont identiques." << endl;
    }
}