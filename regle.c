#include "main.h"

void affichageregle (int **modeee,int **nbrjoueursss)
{
        int decisionn=0;
        system("cls");
        printf("Regle :\n\n");
        QWIRKLE;
        printf(" est un jeu tactique d'association et de logique.\nIl y a ");
        color(4,0);
        printf("2");
        color(15,0);
        printf(" a ");
        color(4,0);
        printf("4");
        color(15,0);
        printf(" joueurs.\nChaque joueur dispose de ");
        color(4,0);
        printf("6");
        color(15,0);
        printf(" tuiles.\nA son tour il en place un maximum a condition de les poser sur une seule ligne avec un caractere commun: la couleur ou la forme.\nA chaque tour on marque les points des lignes que l'on a completees.\nL'astuce consiste a placer ses pieces a des endroits strategiques, comme par exemple des intersections, pour marquer un maximum de points.\nUne ligne est soit constituee de pieces de la meme couleur mais toutes de formes differentes,\nsoit de pieces de la meme forme mais toutes de couleurs differentes\n\n");
        color(3 ,0);
        printf("calcul des points:\n\n");
        color(15,0);
        printf("Quand un joueur forme une ligne, il marque ");
        color(4,0);
        printf("1");
        color(15,0);
        printf(" point pour chaque tuile presente dans la ligne.\nQuand il ajoute une tuile a une ligne existante, il marque ");
        color(4,0);
        printf("1");
        color(15,0);
        printf(" point pour chaque tuile de cette ligne,\n y compris les tuiles qui se trouvaient au prealable sur cette ligne.\nUne tuile peut rapporter ");
        color(4,0);
        printf("2");
        color(15,0);
        printf(" points si elle appartient a deux lignes differentes.\nLe joueur marque ");
        color(4,0);
        printf("6");
        color(15,0);
        printf(" points supplementaires chaque fois qu'il termine une ligne de ");
        color(4,0);
        printf("6");
        color(15,0);
        printf(" tuiles (couleur ou forme).\nLe joueur qui termine la partie obtient ");
        color(4,0);
        printf("6");
        color(15,0);
        printf(" points supplementaires.\n"); //Affichage des regles
        do{
        printf("\nEntrez 0 pour retourner au menu : ");
        fflush(stdin);
        scanf("%d",&decisionn);
        }while(decisionn!=0); //Blindage
        if (decisionn==0)
        {
            menu(&modeee,&nbrjoueursss); //Retour au menu
        }
}
