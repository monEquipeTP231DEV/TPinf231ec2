#include<stdio.h>
#include<stdlib.h>
#define MAX 50
#define vmax 10

typedef struct{
    int nb; // nombre de coordonnees ou nombres de lignes ou nombres de colonnes 
    float val[vmax]; // tableau de coordonnees
} Vect;

int main () {
    float A[MAX][MAX];
    Vect v,w;
    int n,m,i,j,nb;

    printf("v(nombres de coordonnees): ");
    scanf("%d",&nb);
    if (nb<=vmax &&  nb>0)
    {
        // saisie des coordonnees du vecteur
         printf(" les coordonnees de v: ");
        for ( i = 0; i < nb; i++)
        {
          scanf("%f",&v.val[i]);  
        }
        
        
    } else{
        printf("nombre de coordonnees incorrects\n");
    }

    printf("A(lignes): ");
    scanf("%d",&n);
    printf("A(colonnes): ");
     scanf("%d",&m);

     
     if(n<=MAX && m<=MAX){
        //saisie des elements de la matrice

            printf("Entrez les elements de A(%d *%d):\n",n,m);
                for(i=0;i<n;i++){
                    for(j=0;j<m;j++){
                        scanf("%f",&A[i][j]);
                    }
                }
            
        if (m==nb)
        {
                for(i=0;i<nb;i++){
                    w.val[i]=0;
                    for(j=0;j<m;j++){ 
                        w.val[i]=  w.val[i]+ A[i][j] * v.val[j];
                    }
                }
                // affichage du resultat
                printf("le resultat est le vecteur w=A*v: ");
                for ( i = 0; i < nb; i++)
                {
                    printf("%.2f ", w.val[i]);
                }
                
        } else
        {
            printf("produit impossible\n");
        }
     }else{
        printf("nombre invalide\n");
     }
    return 0 ;
        
        

}