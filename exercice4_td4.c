#include<stdio.h>
typedef struct Repertoire{
char nom[15], prenom[15];
int Tele;
};
void Afficher(Repertoire A[], int t){
int i, j;
printf("Les donnees saisis sont: \n");
for(i=0; i<t; i++){
printf("<------ Enregistrement %d ------> \n",i+1);
printf("Nom: %s \n",A[i].nom);
 
printf("Prenom: %s \n",A[i].prenom);
printf("Tele: %d \n",A[i].Tele);
}
}
int main(){
int i, j, n;
printf("Donner le nombre des enregistrements : ");
scanf("%d",&n);
Repertoire T[n];
 
printf("\n\nVeuillez saisir les donnees: \n");
for(i=0; i<n; i++){
printf("<------ Enregistrement %d ------> \n",i+1);
printf("Nom: ");
scanf(" %s",T[i].nom);
printf("Prenom: ");
scanf(" %s",T[i].prenom);
printf("Tele: ");
scanf("%d",&T[i].Tele);
printf("\n");
}
Afficher(T,n);
return 0;
}