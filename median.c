#include<stdio.h>
#define MAX 100
int main () {
    int t[MAX],i,n,s,rm; // s est mis pour la variable appele swap qui va l'echange et rm est mis pour ramg de la mediane
    float M;
    // saisie des elements du tableau
    printf("entrer la taille du tableau: \n");
    scanf("%d",&n);
        if(n<=MAX || n>=0){
                printf("entrer les elements du tableau initial: \n");

                for ( i = 0; i <n; i++){
                    scanf("%d",&t[i]);
                }
                
                // classification du tableau
                 for(i = 0; i < n-1; i++){  //i sert a reduire le nombre de comparaison
                    for(int j = 0; j < n-1-i; j++){ // je sert a comparer et echanger
                        if(t[j] > t[j+1]){
                            s = t[j];
                             t[j] = t[j+1];
                             t[j+1] = s;
                         }
                    }
                }
                
                // affichage des elements tries
                printf("les elements du tableau trie : ");
                    printf("\n");
                    
                    for ( i = 0; i < n; i++)
                    {
                        printf("%d ", t[i]);
                    }
                    if(n%2!=0){
                        M=t[n/2];

                    }else{
                        rm = (n+1)/2;
                        M=(t[rm-1]+t[rm+1])/2;
                    }
            printf(" la mediane est M : %.1f\n" , M);
        }else{
            printf("nombre invalide\n");
        }
    return 0 ;
                    
}