#include <stdio.h>


int main(){

    int placar1, placar2, numero_apostadores, aposta1, aposta2;


do{
    printf("Numero de apostadores:");
    scanf("%d", &numero_apostadores);
} while( numero_apostadores <= 0);
do{
    printf("\nPlacar real do primeiro time:");
    scanf("%d", &placar1);
}  while( placar1 < 0);

do{
    printf("\nPlacar real do segundo time:");
    scanf("%d", &placar2);
} while( placar2 < 0);


    int  pontos[numero_apostadores];



    for(int i = 0;i < numero_apostadores;i++){

    printf("\nApostador %d ", i);
  do{
    printf("\nInsira a aposta do primeiro time:");
    scanf("%d", &aposta1);
  }while( aposta1 < 0);
  do{
    printf("\nInsira a aposta do segundo time:");
    scanf("%d", &aposta2);
  }while( aposta2 < 0);

        pontos[i] = 0;

    if(placar1 == aposta1){

        pontos[i] += 5;

    }
     if(placar2 == aposta2){

        pontos[i] += 5;

    }
    if(placar1  >  placar2  &&  aposta1  >  aposta2){

        pontos[i] += 10;

    }
    else  if(placar1  ==  placar2  &&  aposta1  ==  aposta2){

        pontos[i] += 10;

    }
 else if(placar1 < placar2 && aposta1 < aposta2){

        pontos[i] += 10;

    }

    }

    for(int i = 0;i < numero_apostadores;i++){



        printf("\nPontuacao do Apostador %d:  %d \n",i,  pontos[i]);


        }


    }

