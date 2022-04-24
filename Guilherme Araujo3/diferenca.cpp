#include <stdio.h>

void le_vetor(int n, int v1[],int v2[],int v3[]){
 for (int i = 0; i < n; i++)
    {
        do{
        printf("\ninsira o %d valor de v1: ", i+1);
       scanf("%d", &v1[i]);
        }while(n < 0);




    }
    for (int i = 0; i < n; i++)
    {
        do{
       printf("\ninsira o %d valor de v2: ", i+1);
       scanf("%d", &v2[i]);
       }while(n < 0);




    }

}

void diferenca(int n, int v1[],int v2[],int v3[], int *maior1, int *menor1, float *media1){
float media = 0;
int maior = 0;
int soma = 0;
        int menor = 0;
        int qtd2 = 0;

for (int i = 0; i < n; i++)
    {
        int qtd=0;



        for(int j = 0; j < n; j++)
        if(v1[i] == v2[j] ){

qtd++;

        }
                if(qtd < 1){

                qtd2++;
            v3[i]= v1[i];

soma +=v3[i];
if(i==0){
            maior=v3[i];
            menor=v3[i];
      }
      if(v3[i]>maior){
        maior=v3[i];

      }
      else{
        if(v3[i]<menor){
            menor=v3[i];

        }
      }





        }
if(qtd2==1){
    menor=maior;
}
if(qtd2==0){
    media =0;
    maior = -1;
    menor=-1;
}


}
if(qtd2 >= 1){
media = (float)soma/qtd2;
}


*maior1=maior;
*menor1=menor;
*media1=media;


}

void imprime(int n, int v1[],int v2[],int v3[], int *maior1, int *menor1, float *media1){

for (int i = 0; i < n; i++)
    {
        int qtd=0;
        for(int j = 0; j < n; j++)
        if(v1[i] == v2[j] ){
qtd++;
        }
                 if(qtd < 1){
            v3[i]= v1[i];
printf("\n\nv3: %d\n", v3[i]);
        }
    }
printf("\n\nMaior: %d\n", *maior1);
printf("\n\nMenor: %d\n", *menor1);
printf("\n\nMedia: %.2f\n", *media1);

}
int main(){
int n;
int maior1,menor1;
float media1;
do{

    printf("N:");
    scanf("%d", &n);
}while(n < 0);

    int v1[n],v2[n],v3[n];

    le_vetor(n,v1,v2,v3);
    diferenca(n,v1,v2,v3,&maior1,&menor1,&media1);
    imprime(n,v1,v2,v3,&maior1,&menor1,&media1);



}
