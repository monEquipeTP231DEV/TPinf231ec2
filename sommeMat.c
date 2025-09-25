#include<stdio.h>
#define MAX 50

int main (){
    float A[MAX][MAX], B[MAX][MAX] , C [MAX][MAX];
    int n1,m1,n2,m2,i,j;

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
        if(n1==n2 && m1==m2){
            for(i=0;i<n1;i++){
                    for(j=0;j<m2;j++){
                        C[i][j]= A[i][j]+B[i][j] ; 
                    }
            }
                printf("somme A+B:\n");
                     for(i=0;i<n1;i++){
                         for(j=0;j<m1;j++){
                             printf("%.2f ", C[i][j]);
                            }
                        printf("\n");
                     }      
         } else {
                printf("addition impossible\n");
            }
            
            
     }else{
        printf("nombres incorrects\n");
    }
return 0;

}