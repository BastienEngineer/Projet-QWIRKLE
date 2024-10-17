#include "main.h"

void menu (int *modee,int *nbrjoueurss)
{
    int decision=0;
    do{
        system("cls");
        printf("Bienvenue,\nNous vous invitons dans ce jeux du ");
        QWIRKLE;
        printf(" a aligner des tuiles ayant des symboles de formes ou de couleurs identiques\nde facon a realiser des combinaisons rapportant un maximum de points et gagner ma partie.\n\n");
        printf("Menu :\n\n");
        printf("1 : Nouvelle Partie\n");
        printf("2 : Partie Sauvegardee\n");
        printf("3 : Regle\n");
        printf("4 : Vos Score\n");
        printf("5 : Quitter\n");
        printf("\nVotre choix ? "); //On affiche le menu et on demande le choix de l'utilisateur
        scanf("%d",&decision);
        } while (decision < 1 || decision > 5); //Blindage
        fctdecision(&modee,&nbrjoueurss,&decision);
}

 void fctdecision (int **mod,int **nbrjoueur,int *decisio)
 {
    int decisionn = 0;
    int choi=0;
    switch(*decisio)
    {
    case 1:
        do
        {
            system("cls");
            printf("Nouvelle Partie :\n\n");
            printf("1 : Mode normal : 108 tuiles pour 6 formes et 6 couleurs.\n");
            printf("2 : Mode degrade : 36 tuiles pour 6 formes et 6 couleurs.\n");
            printf("3 : Retour au menu\n");
            printf("4 : Quitter\n");
            printf("\nVotre choix ? "); //On affiche le menu et on demande le choix de l'utilisateur
            scanf("%d", &choi);
        }while (choi < 1 || choi > 4); //Blindage
        *mod=choi;
        if (choi==1 || choi==2)
        {
            jeu(&choi);  //Lancement du jeu
        }
        else if (choi==3)
        {
           menu(&mod,&nbrjoueur);  //Retour au menu
        }
        break;
    case 2:
        system("cls");
        printf("LES SAUVEGARDES DE PARTIES NE SONT PAS ENCORE DISPONIBLE");
        do{
        printf("\n\nEntrez 0 pour retourner au menu : ");
        fflush(stdin);
        scanf("%d",&decisionn);
        }while(decisionn!=0); //Blindage
        if (decisionn==0)
        {
            menu(&mod,&nbrjoueur); //Retour au menu
        }

        break;
    case 3:
        affichageregle(&mod,&nbrjoueur);  //Lancement des regles
        break;
    case 4:
        affsauve();
        break;
    case 5:
        break;
    default:
        break;
    }

}

void jeu(int *cho)
{
    COORD co;
    int choix=*cho;
    int decisionn=0;int mod,nbrjoueur;
    int joueurs=0,fin=0,var=0,i=0,tour=1;
    do
        {
            system("cls");
            printf("Choisisez le nombre de joueurs (entre 2 et 4) : \n");
            scanf("%d", &joueurs);  //Nombre de joueur
        }while (joueurs < 2 || joueurs > 4);  //Blindage
        nomjoueur(&joueurs);
        if(choix == 1)
        {
            genere1();  //On genere une pioche
            piocher1(joueurs);  //on genere les mains de chaque joueur
            system("cls");
            information();  //On affiche les infos
            plateau();  //On affiche le plateau
            do{
            co.X = 0;co.Y = 29;souris;EFF;
            tourdejeu1(&joueurs,&tour);  //Tour de jeu si le jeu n'est pas fini
            co.X = 0;co.Y = 29;souris;printf("Taper 1 pour continuer ou 2 pour arreter la partie: ");scanf("%d",&fin);
            for(i=0;i<108;i++){if(tab1[i].boool==1){var++;}}
            if(var==joueurs){fin=2;}  //Fin du jeu quand la pioche est vide
        }while(fin!=2);
        }
        if(choix == 2)  //comme dans choix 1
        {
            genere2();
            piocher2(joueurs);
            system("cls");
            information();
            plateau();
            do{
            co.X = 0;co.Y = 29;souris;EFF;
            tourdejeu2(&joueurs,&tour);
            co.X = 0;co.Y = 29;souris;printf("Taper 1 pour continuer ou 2 pour arreter la partie: ");scanf("%d",&fin);
            for(i=0;i<36;i++){if(tab2[i].boool==1){var++;}}
            if(var==joueurs){fin=2;}
        }while(fin!=2);
        }
        if(fin==2)
        {
            sauvegardescore(&joueurs);
        }

}
