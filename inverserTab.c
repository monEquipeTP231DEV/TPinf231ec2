#include<stdio.h>
#define MAX 100

int main (){
    int t[MAX],i,e,n; // e est variable echangee

        // saisie des elements
    printf("entrer la taille du tableau: \n");
    scanf("%d",&n);
        if(n<=MAX || n>=0){
                printf("entrer les elements du tableau: \n");

                for ( i = 0; i <n; i++){
                    scanf("%d",&t[i]);
                }

                // inversion du tableau
                for ( i = 0; i < n/2; i++) // n/2 car l'on echange pas l'element du milieu et donc on fait juste n/2 echange
                {
                  e=t[i];
                  t[i]=t[n-1-i];
                  t[n-1-i]=e;  
                }
                    printf("\n");
                    printf("le tableau inverse est t :");
                    for ( i = 0; i < n; i++)
                    {
                         printf("%d ", t[i]);
                    }

                    printf("\n");
                    
             }else {
                printf("nombre invalide \n");
             }
    return 0 ;
                
}