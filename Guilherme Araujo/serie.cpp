#include <stdio.h>


int main(){
    float soma, y,sinal;
    int n;


    printf("N:");
    scanf("%d", &n);
soma= 0;
sinal = 1;



    if(n < 1)
    puts("Valor Invalido insira um valor maior que 0");
    else {


        for(int i = 1; i <=n; i++)
        {

        if(i % 2 == 0){

            sinal = -1;
        }
        else{
            sinal = 1;
        }
            y = 1;
            for(int k = 1; k <=i; k++)
                y *=(float)(n - i + 1);
            soma = (float) soma + sinal * i /y;





        }

      printf("\H: %f\n", soma);
    }


}
