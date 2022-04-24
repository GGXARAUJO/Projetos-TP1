#include <stdio.h>

const int n = 2;


int main(){


int m[n][n];




int contador = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i != 0 || j != 0)
        {

        printf("Matriz[%d][%d]: ", i, j);
        scanf("%d", &m[i][j]);
        int oxe = contador;
        bool repetido = false;

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
    {
            if (m[i][j] == m[k][l])
    {
            repetido = true;
            k = n;
            l = n;

}

   oxe--;

    if (oxe == 0){

    k = n;
    l = n;
       }
      }
   }

  if (!repetido)
  {
   contador++;

  }


        }
        else
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            contador++;
        }
    }
}



int qtd = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%2d ", m[i][j]);
        if(m[i][j] % 2 == 1){
       qtd++;
   }


    }
    printf("\n");
}
if(contador == n && qtd == 0){

        printf("\nE um quadrado latino par");

}
else{
    printf("\nNao e um quadrado latino par");
}






}
