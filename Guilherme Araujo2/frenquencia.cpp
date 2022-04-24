#include <stdio.h>

int main(){
    int n;



    printf("N:");
    scanf("%d", &n);

    double v[n];


    for (int i = 0; i < n; i++)
    {

        printf("Elemento %d:", i+1);
        scanf("%lf", &v[i]);

    }

    for (int i = 0; i < n; i++)
    {
        int qtd= 0;


        for(int j = 0; j < n; j++)
        if(v[i] == v[j]){

                if(j < i){

                    break;
                }
qtd++;
        }
                if (qtd >= 1){
        printf("\nO numero %lf se repete: %d vezes\n",v[i],qtd);
        }


        }


    }






















