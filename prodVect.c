#include<stdio.h>
#include<stdlib.h>

typedef struct{
    float x;
    float y;
    float z;
} Vect;

int main(){
    Vect v1,v2,w;

    printf("entrer les coordonnees dde v1: ");
    scanf("%f %f %f",&v1.x,&v1.y,&v1.z);
    printf("entrer les coordonnees dde v2: ");
    scanf("%f %f %f",&v2.x,&v2.y,&v2.z);
    
    w.x=(v1.y*v2.z)-(v1.z*v2.y);
    w.y=(v1.z*v2.x)-(v1.x*v2.z);
    w.z=(v1.x*v2.y)-(v1.y*v2.x);
    printf("le produit est w:%.2f %.2f %.2f",w.x,w.y,w.z);
return 0 ;

}