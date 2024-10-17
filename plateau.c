#include "main.h"

void information()
{
    COORD co;
    color(3, 0);
    co.X = 1;co.Y = 2;souris;printf("JOUEUR");dodo;
    co.X = 1;co.Y = 7;souris;printf("NOMBRE DE POINT");dodo;
    co.X = 1;co.Y = 12;souris;printf("VOTRE MAIN");dodo;
    co.X = 100;co.Y = 7;souris;printf("DERNIERS COUPS");dodo;
    co.X = 65;co.Y = 4;souris;QWIRKLE;dodo; //On affiche les infos grace a la fonction curseur
    RES;
}
void plateau()
{
    int i=0,j,Ncolonne=0,Nligne=0;COORD co;
    color(9,0);
    for (i=1,j=0;i<52;i+=2,j++)
    {
        co.Y=7;
        Ncolonne='A'+j;
        co.X=i+40;souris;printf(" %c",Ncolonne);dodo;
    }

    for (i=1,j=0;i<12;i++,j++)
    {
        co.X=39;
        Nligne='A'+j;
        co.Y=i+7;souris;printf(" %c",Nligne);dodo;
    }
    RES; //On affiche le plateau grace a des boucles et la fonction curseur
}

void color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte); //Fonction couleur recupere dans mes cours et projet info

    /*
    0 : Noir
    1 : Bleu foncé
    2 : Vert foncé
    3 : Turquoise
    4 : Rouge foncé
    5 : Violet
    6 : Vert caca d'oie
    7 : Gris clair
    8 : Gris foncé
    9 : Bleu fluo
    10 : Vert fluo
    11 : Turquoise
    12 : Rouge fluo
    13 : Violet 2
    14 : Jaune
    15 : Blanc
    */

}



