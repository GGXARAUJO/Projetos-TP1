#include <stdio.h>
#include <string.h>
#include <ctype.h>

char gera_titulo(char frase[], char titulo){

for (int i = 0; i < strlen(frase) + 1; i++) {


    frase[i] = tolower(frase[i]);



    }

for (int i = 0; i < strlen(frase) + 1; i++) {







    }

    for (int i = 0; i < strlen(frase) + 1; i++) {
            if (frase[i + 1] == ' ' || frase[i + 2] == ' ' || frase[i + 3] == ' ' )
        switch(frase[i]){

            case 'O':
            case 'A':
            case 'E':
            case 'D':
            case 'N':



            frase[i] = tolower(frase[i]);

        }


    }




    for (int i = 0; i < strlen(frase) + 1; i++) {

          if (i == 0)

    frase[i] = toupper(frase[i]);


    }


printf("\nFrase transformada em titulo : %s\n",frase);


}


int main(){

     char frase[100];
     char titulo;
     printf("Frase:");
     gets(frase);

gera_titulo(frase,titulo);




}
