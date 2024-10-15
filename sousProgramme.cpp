//
// Created by emmanuel.a on 15/10/2024.
//

#include "sousProgramme.h"
#include <iostream>
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
