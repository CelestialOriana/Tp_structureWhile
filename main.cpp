#include "sousProgramme.h"


void affichage10Nombres(int nbDepart);

int main() {
    int nombreDepart;

    // Demander à l'utilisateur de choisir le nombre de départ
    cout << "Veuillez entrer le nombre de depart : ";
    cin >> nombreDepart;

    // Appeler la fonction pour afficher les nombres
    affichage10Nombres(nombreDepart);

    return 0;
}
