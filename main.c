#include "main.h"

int main()
{
    int mode=0,nbrjoueurs=0,decisionn=0;
    RES;
    menu(&mode,&nbrjoueurs); //Lancement du menu
    system("cls"); //On efface l'ecran
    printf("\n\t\tLES SCORES SONT DISPONIBLES DANS LE FICHIER SCORES.TXT OU DANS LE MENU VOS SCORES(4)");
    printf("\n\n\b\t\t\t\t\t\tA BIENTOT SUR ");
    QWIRKLE;
    Sleep(2000);
     do{
        printf("\n\nEntrez 0 pour retourner au menu : ");
        fflush(stdin);
        scanf("%d",&decisionn);
        }while(decisionn!=0); //Blindage
        if (decisionn==0)
        {
            menu(&mode,&nbrjoueurs); //Retour au menu
        }
    return 0;
}




