#include <stdio.h>
#include <string.h>
#include "header.h"  // le fichier d'en-tête


char noms[MAX_CONTACTS][TAILLE_NUM];
char telephones[MAX_CONTACTS][TAILLE_NUM];
int nombreContacts = 0, exist = 0;

// Fonction pour ajouter un contact
void ajouterContact() {

    char nom[TAILLE_NUM];
    char telephone[TAILLE_NUM];

    if (nombreContacts >= MAX_CONTACTS) 
    { 
        printf("La liste de contacts est pleine.\n");
        return;
    }
    else
    {
        printf("Entrez le nom : ");
        scanf("%s", nom);

        // Vérifier si le existe déja
        for (int i = 0; i < nombreContacts; i++)
        {
            if (strcmp(noms[i], nom) == 0) {
                printf("Le contact existe déjà.\n");

                exist = 1;
                return;
            }
        }

        if (exist == 1)
           printf("Le contact existe déjà.\n");

        else
        {
            printf("Entrez le numéro de téléphone : ");
            scanf("%s", telephone);
            
            // Ajouter le contact
            strcpy(noms[nombreContacts], nom);
            strcpy(telephones[nombreContacts], telephone);
            nombreContacts++;
            printf("nombreContacts = %d", nombreContacts);
            printf("Contact ajouté avec succès.\n");
        }

    }
    
}


// Fonction pour afficher tous les contacts
void afficherContacts() {
    if (nombreContacts == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }

    printf("Liste des contacts :\n");
    printf("NOM ------|------- TELEPHONE\n");
    for (int i = 0; i < nombreContacts; i++) 
    {   
        printf("%s\t%s\n", noms[i], telephones[i]);
    }
}

// // Fonction pour supprimer un contact
// void supprimerContact() {
//     char nom[TAILLE_NUM];
//     printf("Entrez le nom à supprimer : ");
//     scanf("%s", nom);
    
//     for (int i = 0; i < nombreContacts; i++) {
//         if (strcmp(noms[i], nom) == 0) {
//             // Déplacer les contacts suivants vers la gauche
//             for (int j = i; j < nombreContacts - 1; j++) {
//                 strcpy(noms[j], noms[j + 1]);
//                 strcpy(telephones[j], telephones[j + 1]);
//             }
//             nombreContacts--;
//             printf("Contact supprimé avec succès.\n");
//             return;
//         }
//     }
//     printf("Contact non trouvé.\n");
// }



// // Fonction pour vérifier si un nom existe déjà dans le tableau
// int nomExisteDeja(const char *nom) {
//     for (int i = 0; i < nombreContacts; i++) {
//         if (strcmp(noms[i], nom) == 0) {
//             return 1;  // Le nom existe déjà
//         }
//     }
//     return 0;  // Le nom n'existe pas
// }