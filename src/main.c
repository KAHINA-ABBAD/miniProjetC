#include<stdio.h>
#include "header.h"



int main()
{   
     //Declaration de variables 
    int choix = 0 ;

    do 
    {
       
    printf("******** gestionnaire de contacts ********\n");

    printf("\t1- Ajouter un contact \n");
    printf("\t2- Afficher tous les contacts \n");
    printf("\t3- Rechercher un contact \n");
    printf("\t4- Supprimer un contact \n");
    //printf("\t5- Quitter le gestionnaire\n");
    printf("******************************************\n");




    printf("Veuillez saisir votre choix SVP : ");
    scanf("%d", &choix);


    switch (choix) {
                    case 1 :
                        // char nom[20];
                        // char telephone[10];
    
                        // printf("Entrez le nom : ");
                        // scanf("%s", nom);

                        // printf("Entrez le numéro de téléphone : ");
                        // scanf("%s", telephone);
                        ajouterContact();
                        
                        break;
                    case 2 :
                        afficherContacts();
                        break;
                    case 3 :
                       // rechercherContact();
                        break;
                    case 4 :
                      //  supprimerContact();
                        break;
                    
                    default:
                        // Quitter
                        break;
                }



    }
    while (choix >= 5);

    return 0 ;
}