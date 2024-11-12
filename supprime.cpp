#include <stdio.h>

void supprime_caractere(char *chaine, char caractere) {
    int i = 0, j = 0; // i parcourt la chaîne, j garde la nouvelle position sans le caractère à supprimer

    // Parcourir la chaîne pour copier les caractères différents de 'caractere'
    while (chaine[i] != '\0') {
        if (chaine[i] != caractere) {
            chaine[j] = chaine[i]; // Copier le caractère courant dans la nouvelle position
            j++; // Avancer l'index de la position sans le caractère supprimé
        }
        i++; // Passer au caractère suivant
    }

    chaine[j] = '\0'; // Ajouter le caractère nul à la fin de la chaîne modifiée
}

int main() {
    char texte[] = "je vais a l'ecole"; // Chaîne de test
    supprime_caractere(texte, 'e'); // Supprimer les 'e'
    printf("Chaîne avoir ete supprimer : %s\n", texte); // Afficher le résultat
    return 0;
}