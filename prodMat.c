#include<stdio.h>
#define MAX 50

int main (){
    float A[MAX][MAX];
    float B[MAX][MAX];
    float C [MAX][MAX];
    int n1,m1,n2,m2,i,j,k;

    C[i][j]=0;

    printf("A(lignes): ");
    scanf("%d",&n1);
        printf("B(lignes): ");
        scanf("%d",&n2);
        printf("A(colonnes): ");
         scanf("%d",&m1);
        printf("B(colonnes): ");
        scanf("%d",&m2);
        if(n1<=MAX && n2<=MAX && m1<=MAX && m2<=MAX){
            printf("Entrez les elements de A:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%f",&A[i][j]);
        }
    }

    printf("Entrez les elements de B:\n");
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%f",&B[i][j]);
        }
    }
        if(m1==n2){ 
                for(i=0;i<n1;i++){
                    for(j=0;j<m2;j++){
                        for(k=0;k<m1;k++){
                            C[i][j]=C[i][j] + A[i][k]*B[k][j] ;
                    
                        }
                    }
                }
                     printf("Produit A*B:\n");
                     for(i=0;i<n1;i++){
                         for(j=0;j<m2;j++){
                             printf("%f ", C[i][j]);
                            }
                        printf("\n");
                        }
            }else{
                printf("produit impossible\n");
            }
        }else{
            printf("nombres incorrects\n");
        }
    return 0;
}