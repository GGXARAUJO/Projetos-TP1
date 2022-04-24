#include <stdio.h>

struct Carro {
int ano;
int valor;
int soma;
int axu;
char modelo[50];
};

struct esta {
float somi;
float somi2;
int carri;
int tam;
int valore;

};

Carro le_cadastro( int n,int soma1[],Carro carros[]){





    for (int i = 0; i < n; i++)
    {
        printf("\ninsira o ano do seu carro: ");
        scanf("%d", &carros[i].ano);

        printf("\ninsira o preco do seu carro: ");
        scanf("%d", &carros[i].valor);



        getchar();


    }
     for (int i = 0; i < n; i++)
    {
       printf("\ninsira o MODELO: ");
        gets (carros[i].modelo);



    }

   Carro axu;
for (int i = 0; i < n; i++){

        for (int j = i+1; j < n; j++){
            if(carros[i].ano>carros[j].ano){
            axu = carros[i];
            carros[i]=carros[j];
            carros[j]=axu;

            }
        }

    }






}

void monta_estatistica(int n,int soma1[],Carro carros[],float soma, esta est[]){
int qtd2 = 0;
for (int i = 0; i < n; i++)
    {
       int qtd3=0;
       int qtd5 = 0;
       int media=0;
for (int j = 0; j < n; j++)
if(carros[i].ano == carros[j].ano){

    qtd5++;


}



if(qtd5 >= 2 ){
est[i].somi+=carros[i].valor;

est[i].somi2=qtd2;



media = (float)soma/qtd5;


}
else{
        est[i].somi=carros[i].valor;


}


}
for (int i = 0; i < n; i++)
    {
        int qtd= 0;


        for(int j = 0; j < n; j++)
        if(carros[i].ano == carros[j].ano){

                if(j < i){

                    break;
                }
                qtd++;


        }
                if (qtd >= 1){
                        est[i].tam=qtd;
                        est[i].carri=carros[i].ano;

        }
        }

for (int i = 0; i < est[i].tam; i++)
    {
qtd2+=est[i].valore;

    }





}
//
void imprime_estatistica(int n,int soma1[],Carro carros[],float soma,esta est[]){
    puts("\nAno     QTD      Media");
    puts("-------------------------");

    puts("-------------------------");

for (int i = 0; i < n; i++)
    {if (est[i].tam >= 1){

            est[i].somi = est[i].somi /est[i].tam;
            printf("\n%-7d %-7d %7f \n\n",est[i].carri,est[i].tam,est[i].somi);

        }


    }
}
//

int main(){
int n;


  do{

    printf("N:");
    scanf("%d", &n);
}while(n < 0);


int soma1[n];
int ano[n];
int valor[n];
float soma;

struct Carro carros[n];
struct esta est[n];

   le_cadastro(n,soma1,carros);

    monta_estatistica(n,soma1,carros,soma,est);
    imprime_estatistica(n,soma1,carros,soma,est);



}
