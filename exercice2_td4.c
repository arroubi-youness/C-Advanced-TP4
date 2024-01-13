#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct date{
 int jour;
 char mois[10];
 int annee;
 }date;
 typedef struct employe{
 char nom[15];
 char prenom[15];
 date date_naissance;
 date date_embauche;
 }employe;
int main() {
    employe *p;
    p=(employe*)malloc(sizeof(employe)*4);
    for(int i=0;i<4;i++){
    printf("enter le nom:");
    scanf("%s",(p+i)->nom);
    printf("enter le prenom:");
    scanf("%s",(p+i)->prenom);
    printf("enter le date_naissace:");
    scanf("%d",&(p+i)->date_naissance.jour);
    scanf("%d",(p+i)->date_naissance.mois);
    scanf("%d",&(p+i)->date_naissance.annee);

      }
    for(int i=0;i<4;i++){

        printf("nom:%s\n",(p+i)->nom);
        printf("prenom:%s\n",(p+i)->prenom);
        printf("date de naissance:%d\n",(p+i)->date_naissance.jour);
        printf("date de embauche:%d\n",(p+i)->date_naissance.mois);
        printf("date de naissance:%d\n",(p+i)->date_naissance.annee);
    }
    return 0;
}
