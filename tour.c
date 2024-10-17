#include "main.h"

void tourdejeu1(int *nombredejoueur,int*tour)
{
    COORD co;
    int numero=0,i=0,j=0,k=0,l=0,m=0,t=0,nbrT=0,nbrC=0,nbrL=0,choice=0,nbj=*nombredejoueur;
    char colonne=0,ligne=0;
    t=*tour;
    for (i=0;i<nbj;i++)
    {
        color(3, 0);
        co.X = 8;co.Y = 2;souris;printf("%d",i+1);RES; //Numero du joueur
        co.X=1;co.Y=9;souris;printf("Vous avez %d points",joueur[i].pnt); //Nombre de points en fonction du joueur
        co.X = 1;co.Y = 4;souris;EFF2;co.X = 1;co.Y = 4;souris;printf("%s",joueur[i].name); //Nom du joueur
        for(j=0,k=0;k<6;j+=2,k++){co.Y=14;co.X=1+j;souris;l=joueur[i].main[k];color(tab1[l].couleur,0);printf("%c",tab1[l].forme);RES;} //Main du joueur
        co.X = 1;co.Y = 16;souris;printf("1 2 3 4 5 6");
        do{co.X = 0;co.Y = 21;souris;printf("Taper 1 pour repiocher ou 2 pour jouer : ");scanf("%d",&choice);}while(choice!=1&&choice!=2); //Action du joueur et blindage
        fflush(stdin);
        if(choice==1){repioche1(i);} //On repioche
        else if(choice==2)
        {
        do{co.X = 0;co.Y = 23;souris;printf("Selectionner le nombre de tuile a placer : ");scanf("%d",&nbrT);}while(nbrT<1||nbrT>6); //Nombre de tuile selectionne et blindage
        fflush(stdin);
        for(m=0;m<nbrT;m++)
        {
        do{co.X = 0;co.Y = 25;souris;printf("Selectionner la tuile a placer : ");scanf("%d",&numero);}while(numero<1||numero>6); //Tuile selectionne et blindage
        fflush(stdin);
        do{co.X = 0;co.Y = 27;souris;printf("Selectionner la colonne : ");scanf("%c",&colonne);}while(colonne<'A'||colonne>'Z'); //Colonne et blindage
        fflush(stdin);
        do{co.X = 0;co.Y = 29;souris;printf("Selectionner la ligne : ");scanf("%c",&ligne);}while(ligne<'A'||ligne>'K'); //Ligne et blindage
        fflush(stdin);
        nbrC=(colonne-64)*2+40;co.X=nbrC; //Placement avec -64 de la table ASCII fois 2 car espace et 40 debut du tableau
        nbrL=ligne-64+7;co.Y=nbrL;souris; //Placement avec -64 de la table ASCII et 7 debut du tableau
        l=joueur[i].main[numero-1];color(tab1[l].couleur,0);printf("%c",tab1[l].forme);RES; //On pace la tuile choisi
        co.X = 100;co.Y=7+(t*2);souris;printf("%s ",joueur[i].name);printf("%c",colonne);printf("%c",ligne);color(tab1[l].couleur,0);printf("%c",tab1[l].forme);RES; //On ecrit la piece placé
        joueur[i].pnt++; //Plus de points
        tirer1(numero,i); //Nouvelle tuile
        t++;
        co.Y=14;co.X=(numero*2)-1;souris;printf(" "); //On efface la tuile
        co.Y=16;co.X=(numero*2)-1;souris;printf(" "); //On efface le numero de la tuile
        co.X = 0;co.Y = 25;souris;EFF;co.X = 0;co.Y = 27;souris;EFF;co.X = 0;co.Y = 29;souris;EFF; //On efface les phrases
        }
        co.X = 0;co.Y = 23;souris;EFF;  //On efface la phrase
        }
        co.X = 0;co.Y = 21;souris;EFF;  //On efface la phrase
    }
    *tour=t;
}

void tourdejeu2(int *nombredejoueur,int*tour)
{
    COORD co;
    int numero=0,i=0,j=0,k=0,l=0,m=0,t=0,nbrT=0,nbrC=0,nbrL=0,choice=0,nbj=*nombredejoueur;
    char colonne=0,ligne=0;
    t=*tour;
    for (i=0;i<nbj;i++)
    {
        color(3, 0);
        co.X = 8;co.Y = 2;souris;printf("%d",i+1);RES; //Numero du joueur
        co.X=1;co.Y=9;souris;printf("Vous avez %d points",joueur[i].pnt); //Nombre de points en fonction du joueur
        co.X = 1;co.Y = 4;souris;EFF2;co.X = 1;co.Y = 4;souris;printf("%s",joueur[i].name); //Nom du joueur
        for(j=0,k=0;k<6;j+=2,k++){co.Y=14;co.X=1+j;souris;l=joueur[i].main[k];color(tab2[l].couleur,0);printf("%c",tab2[l].forme);RES;} //Main du joueur
        co.X = 1;co.Y = 16;souris;printf("1 2 3 4 5 6");
        do{co.X = 0;co.Y = 21;souris;printf("Taper 1 pour repiocher ou 2 pour jouer : ");scanf("%d",&choice);}while(choice!=1&&choice!=2); //Action du joueur et blindage
        fflush(stdin);
        if(choice==1){repioche2(i);} //On repioche
        else if(choice==2)
        {
        do{co.X = 0;co.Y = 23;souris;printf("Selectionner le nombre de tuile a placer : ");scanf("%d",&nbrT);}while(nbrT<1||nbrT>6); //Nombre de tuile selectionne et blindage
        fflush(stdin);
        for(m=0;m<nbrT;m++)
        {
        do{co.X = 0;co.Y = 25;souris;printf("Selectionner la tuile a placer : ");scanf("%d",&numero);}while(numero<1||numero>6); //Tuile selectionne et blindage
        fflush(stdin);
        do{co.X = 0;co.Y = 27;souris;printf("Selectionner la colonne : ");scanf("%c",&colonne);}while(colonne<'A'||colonne>'Z'); //Colonne et blindage
        fflush(stdin);
        do{co.X = 0;co.Y = 29;souris;printf("Selectionner la ligne : ");scanf("%c",&ligne);}while(ligne<'A'||ligne>'K'); //Ligne et blindage
        fflush(stdin);
        nbrC=(colonne-64)*2+40;co.X=nbrC; //Placement avec -64 de la table ASCII fois 2 car espace et 40 debut du tableau
        nbrL=ligne-64+7;co.Y=nbrL;souris; //Placement avec -64 de la table ASCII et 7 debut du tableau
        l=joueur[i].main[numero-1];color(tab2[l].couleur,0);printf("%c",tab2[l].forme);RES; //On pace la tuile choisi
        co.X = 100;co.Y=7+(t*2);souris;printf("%s ",joueur[i].name);printf("%c",colonne);printf("%c",ligne);color(tab2[l].couleur,0);printf("%c",tab2[l].forme);RES; //On ecrit la piece placé
        joueur[i].pnt++; //Plus de points
        t++;
        tirer2(numero,i); //Nouvelle tuile
        co.Y=14;co.X=(numero*2)-1;souris;printf(" "); //On efface la tuile
        co.Y=16;co.X=(numero*2)-1;souris;printf(" "); //On efface le numero de la tuile
        co.X = 0;co.Y = 25;souris;EFF;co.X = 0;co.Y = 27;souris;EFF;co.X = 0;co.Y = 29;souris;EFF; //On efface les phrases
        }
        co.X = 0;co.Y = 23;souris;EFF;  //On efface la phrase
        }
        co.X = 0;co.Y = 21;souris;EFF;  //On efface la phrase
        }
        *tour=t;
}
