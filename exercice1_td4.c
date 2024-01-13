#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct nombre_complexe{
  float partie_reel;
  float partie_imaginaire;
}complexe;
double imag(complexe z){
return z.partie_imaginaire;
}
double real(complexe z){
return z.partie_reel;
}
complexe mul(complexe z1,complexe z2){
       complexe z3;
       z3.partie_reel=(z1.partie_reel*z2.partie_reel)-(z1.partie_imaginaire*z2.partie_imaginaire);
       z3.partie_imaginaire=(z1.partie_reel*z2.partie_imaginaire)+(z1.partie_imaginaire*z2.partie_reel);
       return z3;
}
double imagp(complexe *z){
return z->partie_imaginaire;
}
double realp(complexe *z){
return z->partie_reel;
}
complexe* mulp(complexe *z1,complexe *z2){
       complexe *z3;
       z3=(complexe*)malloc(sizeof(complexe));
       z3->partie_reel=(z1->partie_reel*z2->partie_reel)-(z1->partie_imaginaire*z2->partie_imaginaire);
       z3->partie_imaginaire=(z1->partie_reel*z2->partie_imaginaire)+(z1->partie_imaginaire*z2->partie_reel);
       return z3;
}
int main() {
    complexe z1,z2,*z3;
    printf("entrer la partie reel de z1:");
    scanf("%f",&z1.partie_reel);
    printf("entrer la partie reel de z2:");
    scanf("%f",&z1.partie_imaginaire);
    printf("entrer la partie reel de z2:");
    scanf("%f",&z2.partie_reel);
    printf("entrer la partie reel de z2:");
    scanf("%f",&z2.partie_imaginaire);

    printf("%f+i(%f)\n", real(z1),z1.partie_imaginaire);
    printf("%f+i(%f)\n",z2.partie_reel,z2.partie_imaginaire);
    z3=mulp(&z1,&z2);
    printf("%f+i%f",z3->partie_reel,z3->partie_imaginaire);

    return 0;
}
