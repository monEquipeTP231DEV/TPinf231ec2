#include <stdio.h>

int main() {
    int a,b,i,j,p;
    p=0;
    printf("entrer le premier nombre: ");
    scanf("%d",&a);
    printf("entrer le second nombre: ");
    scanf("%d",&b);
    if(a>0 && b>0){
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
            p=p+1;
            }
        }
    } else {
        printf("les nombres doivent etre positifs\n");
    } 
            printf("le resultat est :%d\n",p);
            return 0;
}