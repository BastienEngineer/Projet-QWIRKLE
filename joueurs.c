#include "main.h"

void nomjoueur (int *nombrej)
{
    int i=0;
    FILE* fp;
    fp=fopen("SCORES.txt","a"); //Creation d'un fichier si inexistant et ouverture
    if(fp==NULL)
    {
       printf("...");
    }
    else
    {
        fprintf(fp,"Debut de partie :\n");
        for (i=0;i<*nombrej;i++) //La boucle depend du nombre de joueur que l'on recoit grace a un pointeur
        {
        system("cls");//On efface l'ecran
        joueur[i].pnt=0; //On affecte le nombre de point du joueur
        joueur[i].numeroj=i+1; //On affecte au joueur un numero
        printf("Nom du joueur %d : ",i+1);
        scanf("%s",&joueur[i].name);
        fprintf(fp,"player %d : %s avec %d point\n",joueur[i].numeroj,joueur[i].name,joueur[i].pnt); //Nom ecrit dans un dossier
        }
        fprintf(fp,"\n");
    }
    fclose(fp); //On ferme le fichier
}

void sauvegardescore(int *nombrej)
{
    int i=0;
    FILE* fp;
    fp=fopen("SCORES.txt","a"); //Creation d'un fichier si inexistant et ouverture
    if(fp==NULL)
    {
        printf("...");
    }
    else
    {
        fprintf(fp,"Fin de partie :\n");
        for (i=0;i<*nombrej;i++) //La boucle depend du nombre de joueur que l'on recoit grace a un pointeur
        {
        fprintf(fp,"player %d : %s avec %d points\n",joueur[i].numeroj,joueur[i].name,joueur[i].pnt); //Nom ecrit dans un dossier avec nouveau score
        }
        fprintf(fp,"\n\n");
    }
    fclose(fp); //On ferme le fichier
}

void affsauve(int **modeee,int **nbrjoueursss)
{
    int decisionn=0;
    FILE*fr;
    char tab[1000][30];
    int i;
    int j;
    fr = fopen("SCORES.txt", "r");
    if(fr == NULL)
        {printf("...");}
    else
    { while(!feof(fr))
	{for(i=0; i<j; i++){
	    for(j=0; j<1; j++){
	    fgets(tab, 35 ,fr);
	    printf("%s", tab);}}}
	    fclose(fr);
    }
    do{
        printf("\nEntrez 0 pour retourner au menu : ");
        fflush(stdin);
        scanf("%d",&decisionn);
        }while(decisionn!=0);
        if (decisionn==0)
        {
            menu(&modeee,&nbrjoueursss);
        }

}
