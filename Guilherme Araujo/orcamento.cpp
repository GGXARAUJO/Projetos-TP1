#include <stdio.h>
#include <math.h>
int main (){
    int residencia, acabamento, profissionais, oxe;
    float  valor_mao_obra, parcelas, mensalidade, pagamento ,desconto , orcamento_final, orcamento, obra_bruta, metros, valor_metros, valor_acabamento;







    printf("informe se sua residencia e um apartamento(1) ou uma casa(0): ");
    scanf("%d", &residencia);

    printf("Insira quantos metros tem a reforma: ");
    scanf("%f", &metros );

    printf("Insira o acabamento: ");
    scanf("%d", &acabamento );

    printf("insira se o pagamento e a vista(1) ou parcelado(0): ");
    scanf("%f", &pagamento);
    if(pagamento == 0){
        printf("Digite o numero de parcelas:");
        scanf ("%f", &parcelas);
    }

    +
    printf("\n\nInsira quantos profissionais serao contratados:");
    scanf("%d", &profissionais);

    float  mao_obra, soma;
    int dias[profissionais], cargo[profissionais];

    for(int i = 0; i < profissionais;i++){


    printf("\n\nDigite quais profissionais serao contratados, Pedreiro(1), Eletricista(2), Encanador(3), Pintor(4), Ajudante(5)");
    scanf("%d", &oxe);
    printf("\nQuantos dias serao trabalhados:");
    scanf("%d", &dias[i]);



    if(oxe == 1){
        cargo[i] = 110;

    }

    else if(oxe == 2){
        cargo[i] = 130;

    }
    else if(oxe == 3){
        cargo[i]= 140;

    }
    else if(oxe == 4){
        cargo[i]= 120;

    }
    else if(oxe == 5){
        cargo[i]= 50;

    }

}
    if ( residencia == 1){

        puts("\nOrcamento para apartamento\n");
        valor_metros= 1600;
    }
    else{
        puts("\nOrcamento para casa\n");
        valor_metros = 1300;
    }

    if ( acabamento == 1){

        puts("Tipo de acabamento A");
        valor_acabamento= 950;
    }
    else if (acabamento == 2)
    {
        puts("Tipo de acabamento B");
        valor_acabamento= 720;
    }
    else if (acabamento == 3)
    {
        puts("Tipo de acabamento C");
        valor_acabamento= 450;
    }







soma = 0;
    for(int i = 0;i < profissionais;i++){


     printf("\nProfissional %d  : ",i);
     mao_obra= cargo[i] * dias[i];


    printf("\nValor da mao de obra : R$%10.2f\n", mao_obra);


     soma = soma + mao_obra;

     }
     printf("\nValor total da mao de obra: R$%10.2f\n", soma);

     obra_bruta = metros * valor_metros;
    orcamento = (metros * valor_metros) + (metros * valor_acabamento) + soma;



    printf("\nValor da acabamento: R$%10.2f\n", valor_acabamento);
    printf("\nValor da obra bruta: R$%10.2f\n", obra_bruta);
    printf("\nValor do orcamento: R$%10.2f\n", orcamento);
    if( pagamento == 1){
        desconto = orcamento * 0.15;
        orcamento_final = orcamento - desconto;
        printf("\nValor do desconto: R$%10.2f\n", desconto);
    }
    if(pagamento == 0){
    mensalidade = (orcamento * pow(1.12 ,parcelas/12 )) / parcelas;
    orcamento_final = mensalidade * parcelas;
        printf("\nMensalidade: R$%10.2f\n", mensalidade);
        printf("\nParcelas: %2.f\n", parcelas);


    }
    printf("\nValor total a ser pago: R$%10.2f\n", orcamento_final);



}








