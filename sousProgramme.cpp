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
    int randomNum1 = rand() % 100; // Entre 0 et 99
    cout << "Nombre aleatoire entre 0 et 99 : " << randomNum1 << endl;

    int randomNum2;
    do {
        randomNum2 = rand() % 100; // Entre 0 et 99
        cout << "Nombre aleatoire entre 0 et 99 : " << randomNum2 << endl;
    } while (randomNum1 == randomNum2);

    cout << "Les deux nombres sont differents." << endl;
}
void Dé() {
    int De;
    do {
        De = rand() % 6 + 1;
        cout << "Resultat du de : " << De << endl;

        if (De != 6) {
            cout << "Dommage, relance ton de." << endl;
        } else {
            cout << "Bravo, vous avez obtenu un 6 !" << endl;
        }
    } while (De != 6);
}
