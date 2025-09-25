#include<stdio.h>
#define MAX 100
 int main(){
    int t[MAX],n,i;
    int tcroissant=1,tdecroissant=1;

    printf("entrer la taille du tableau: \n");
    scanf("%d",&n);
        if(n<=MAX || n>=0){
                printf("entrer les elements du tableau: \n");

                for ( i = 0; i <n; i++){
                    scanf("%d",&t[i]);
                }
                    
                // verification du tableau
                   for ( i = 0; i <n-1; i++)
                   {
                    
                         if (t[i]>t[i+1]){
        
                             tcroissant=0;

                        }
                        if (t[i]<t[i+1]){

                        tdecroissant=0;
                         }
                   }

                    if(tcroissant==1) {
                        printf("tableau trie dans l'ordre croissant\n");
                    }else if (tdecroissant==1)
                    {
                        printf("tableau trie dans l'odre decroissant\n");
                    } else {
                        printf("tableau non trie\n");
                    }
        }else {
            printf("nombre invalide\n");
        }
                    
    return 0 ;
}
    
    
    
 