//INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//DEFINE
#define souris SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),co)
#define dodo Sleep(50)
#define RES color(15,0)
#define QWIRKLE color(4,0);printf("Q");color(12,0);printf("W");color(14,0);printf("I");color(2,0);printf("R");color(13,0);printf("K");color(9,0);printf("L");color(5,0);printf("E");color(15,0);
#define EFF printf("                                                                                    ")
#define EFF2 printf("                         ")


//STRUCTURE
typedef struct piece{
    int couleur;
    int boool;
    char forme;
    }t_piece;
t_piece tab1[108];
t_piece tab2[36];

typedef struct personne{
    char name[20];
    int numeroj;
    int main[6];
    int pnt;
    }t_personne;
t_personne joueur[4];


//MAIN
int main();

//MENU
void menu();
void fctdecision();
void jeu();

//PIOCHE
void genere1();
void genere2();
void piocher1();
void piocher2();
void tirer1();
void tirer2();
void repioche1();
void repioche2();

//PLATEAU
void information();
void plateau();
void color();

//JOUEURS
void nomjoueur();
void sauvegardescore();

//REGLE
void affichageregle();

//TOUR
void tourdejeu1();
void tourdejeu2();


