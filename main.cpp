#include "sousProgramme.h"

int main() {
    int nombreDepart;

    // Demander à l'utilisateur de choisir le nombre de départ
    cout << "Veuillez entrer le nombre de depart : ";
    cin >> nombreDepart;

    // Appeler la fonction pour afficher les nombres
    affichage10Nombres(nombreDepart);
    cout << "**************************************************\n";
    compteRebours();
    cout << "**************************************************\n";
    nombreAléatoire();
    cout << "**************************************************\n";
    Dé();


    return 0;
}
