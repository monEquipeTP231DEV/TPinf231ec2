#include <stdio.h>
#define MAX 100

int main () {
    int t[MAX],i,pr=-1,r,n ; // r est mis pour  l'element recherche et pr pour la position de l'element recherche

    // saisie des elements
    printf("entrer la taille du tableau: \n");
    scanf("%d",&n);
        if(n<=MAX || n>=0){
                printf("entrer les elements du tableau: \n");

                for ( i = 0; i <n; i++){
                    scanf("%d",&t[i]);
                }
                printf("entrer l'element recherche : \n");
                scanf("%d", &r);
                printf("\n");
                for ( i = 0; i <n; i++){
                    if (t[i]==r)
                    {
                        pr=i;
                    }
                }
                    if(pr!=-1){
                        printf("%d se trouve a la position %d \n" ,r,pr);
                    } else {
                        printf("element introuvable \n");
                    }
                
            }else {
                printf("nombre invalide\n");
            }
    return 0 ;
                
                    
}