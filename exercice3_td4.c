#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct etudiant{
   char nom[20];
   char prenom[20];
   int cne;
   float note[4];
   float moyenne;
   int test=0;
  
 }etudiant;
int main() {
    int max;
    etudiant T[5];int somme=0;float moyenne=0;
    for(int i=0;i<5;i++){
        printf("enter le nom:");
        scanf("%s",T[i].nom);
        printf("enter le prenom:");
        scanf("%s",T[i].prenom);
        printf("enter le cne:");
        scanf("%d",&T[i].cne);
        for(int j=0;j<4;j++){
            printf("enter les note:");
            scanf("%d",&T[i].note[j]);
        }
        for(int i=0;i<5;i++){
             for(int j=0;j<4;j++){
                somme=somme+T[i].note[j];

             }
             moyenne=somme/4;
             T[i].moyenne=moyenne;
        }
    }
    max=T[0].moyenne;
    for(i=0;i<5;i++){
        if(T[i].moyenne>max){
            max=T[i].moyenne;
            test=i;
        }
    }
    printf("le nom:%s",T[test].nom);
    printf("le prenom:%s",T[test].prenom);
    printf("le cne :%d",T[test].cne);
    for(int i=0;i<4;i++){
        printf("les notes:%d",T[test].note[i]);
    }
    printf("la moyenne:%f",T[test].moyenne);
    // Trie du Tableau selon la moyenne
for(i=0; i<n; i++)
for(j=i; j<n; j++)
if(T[j].moyenne > T[i].moyenne ){
T[i].moyenne = T[i].moyenne ;
 
T[j].moyenne = T[i].moyenne ;
 
T[i].moyenne = T[i].moyenne ;
 
}
    return 0;
}
