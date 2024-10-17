#include "main.h"

void genere1()
{
    int h=0,i=0,j=0,k=0;
    char piece[6]={0x04,0x05,0x06,0x03,0x0F,0x0E};
    int colo[6]={4,12,14,2,13,9};
    for(h=0;h<3;h++)
    {
        for(j=0;j<6;j++)
        {
            for(k=0;k<6;k++)
            {
                tab1[i].forme=piece[j];
                tab1[i].couleur=colo[k];
                tab1[i].boool=0;  //Initialisation totale de la pioche
                i++;
            }
        }
    }
}

void genere2()
{
    int i=0,j=0,k=0;
    char piece[6] = {0x04,0x05,0x06,0x03,0x0F,0x0E};
    int colo[6] = {4,12,14,2,13,9};
    for(j=0;j<6;j++)
    {
        for(k=0;k<6;k++)
        {
            tab2[i].forme=piece[j];
            tab2[i].couleur=colo[k];
            tab2[i].boool=0; //Initialisation totale de la pioche
            i++;
        }
    }
}

void piocher1(int nbjoueurs)
{
    int i=0,j=0,alea=0;
    srand(time(NULL)); //On initialise la fonction rand
    for(i=0;i<nbjoueurs;i++)
    {
        for(j=0;j<6;j++)
        {
            do{alea=rand()%(108 + 1);}while(tab1[alea].boool!=0); // Pour chaque joueur et chaque place de la main on affecte une valeur aleatoire + blindage
            joueur[i].main[j]=alea;
            tab1[alea].boool=1;
        }
    }
}

void piocher2(int nbjoueurs)
{
    int i=0,j=0,alea=0;
    srand(time(NULL)); //On initialise la fonction rand
    for(i=0;i<nbjoueurs;i++)
    {
        for(j=0;j<6;j++)
        {
            do{alea=rand()%(36 + 1);}while(tab2[alea].boool!=0); // Pour chaque joueur et chaque place de la main on affecte une valeur aleatoire + blindage
            joueur[i].main[j]=alea;
            tab2[alea].boool=1;
        }
    }
}

void tirer1 (int number,int player)
{
    number=number-1;
    srand(time(NULL)); //On initialise la fonction rand
    int aleaa=0;
    do{aleaa=rand()%(108 + 1);}while(tab1[aleaa].boool!=0); // Pour la place vide de la main on affecte une valeur aleatoire + blindage
    joueur[player].main[number]=aleaa;
    tab1[aleaa].boool=1;
}

void tirer2 (int number,int player)
{
    number=number-1;
    srand(time(NULL)); //On initialise la fonction rand
    int aleaa=0;
    do{aleaa=rand()%(36 + 1);}while(tab2[aleaa].boool!=0); // Pour la place vide de la main on affecte une valeur aleatoire + blindage
    joueur[player].main[number]=aleaa;
    tab2[aleaa].boool=1;
}

void repioche1(int numeroP)
{
    int j=0,aleaaa=0;
    srand(time(NULL)); //On initialise la fonction rand
    for(j=0;j<6;j++)
        {
            tab1[joueur[numeroP].main[j]].boool=0; //On remet les tuiles dans la pioche
            do{aleaaa=rand()%(108 + 1);}while(tab1[aleaaa].boool!=0); // Pour chaque joueur et chaque place de la main on affecte une valeur aleatoire + blindage
            joueur[numeroP].main[j]=aleaaa;
            tab1[aleaaa].boool=1; //On retire la tuile de la pioche
        }
}

void repioche2(int numeroP)
{
    int j=0,aleaaa=0;
    srand(time(NULL)); //On initialise la fonction rand
    for(j=0;j<6;j++)
        {
            tab2[joueur[numeroP].main[j]].boool=0; //On remet les tuiles dans la pioche
            do{aleaaa=rand()%(36 + 1);}while(tab2[aleaaa].boool!=0); // Pour chaque joueur et chaque place de la main on affecte une valeur aleatoire + blindage
            joueur[numeroP].main[j]=aleaaa;
            tab2[aleaaa].boool=1; //On retire la tuile de la pioche
        }
}
