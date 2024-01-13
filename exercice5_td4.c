#include<stdio.h>
#include<string.h>
int nb_occurrence(char T[], int n, char c){
int i, cmp=0, p_occ, d_occ;
for(i=0; i<n; i++)
if(T[i] == c){
p_occ = i;
break;
}
printf("p_occ = %d \n", p_occ);
for(i=n; i>0; i--)
if(T[i] == c){
d_occ = i;
break;
}
printf("d_occ = %d \n", d_occ);
for(i=0; i<n; i++)
if(T[i] == c) cmp++;
 
return cmp;
}
int main(){
int t;
char h;
printf("Donner la taille du tableau: ");
scanf("%d",&t);
char A[t];
printf("Saisir les caracteres: ");
scanf(" %s",A);
printf("Donner le caracter a cherche: ");
scanf(" %c",&h);
printf("Le nombre des occuences est: %d",nb_occurrence(A, t, 
h));
return 0;
}