#include <stdio.h>
#include <string.h>

int main(){

    char s1[100];
    char s2[100];
    char s12[100];
    char s22[100];

    printf("Insira s1: ");
    gets(s1);
    strlwr(s1);

    printf("Insira s2: ");
    gets(s2);
    strlwr(s2);

    int espaco1 = 0;
    for(int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] == ' ')
        {
            espaco1++;
        }

        else if(s1[i] != '\0')
        {
            s12[i-espaco1] = s1[i];

            s12[i-espaco1 + 1] = '\0';

        }
    }
    strcpy(s1, s12);

    int espaco2 = 0;
    for(int j = 0; j < strlen(s2); j++)
    {
        if(s2[j] == ' ')
        {
            espaco2++;
        }

        else if(s2[j] != '\0')
        {
            s22[j-espaco2] = s2[j];

            s22[j-espaco2 + 1] = '\0';
        }
    }
    strcpy(s2, s22);

    int tam1,tam2;


 tam1=strlen(s1);

 tam2=strlen(s2);


 if(tam1==tam2){
    int qtd = 0;
  for(int i = 0; i < tam1; i++){

   for(int j = 0; j < tam2; j++){
    if(s1[i]==s2[j]){

     qtd++;

     break;
    }
   }
  }
  if(qtd==tam1){
   printf("\nSao anagramas\n");
  }
  else{
   printf("\nNao sao anagramas\n");
  }
 }
 else{
  printf("\nNao sao anagramas\n");
 }



}







