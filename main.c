#include <stdio.h>
#include <stdlib.h>

/*Funcao que o usuario escolhe converter ou sair.
  Retorna o numero da opcao escolhida.*/
int Comeco(){
    int i;
    printf("\n\033[1m1- Converter\n2- Sair\033[m\n");
    scanf("%d", &i);
    return i;
}
/*Funcao que apresenta as opcoes de comprimento.
  Retorna o numero da opcao escolhida.*/
int Opcoes(){
    int i;
    printf("\n\033[1m1- Quilolitro\n2- Hectolitro\n3- Decalitro\n4- litro\n5- Decilitro\n6- Centilitro\n7- Mililitro\n\033[m");
    scanf("%d",&i);
    return i;
}
/*Funcao que printa uma sequencia de asteriscos.*/
void Asterisco(int n){
    int i;
    char a;
    a = '*';
    for(i=0; i<n; i++) printf("\033[1;33m%c\033[m",a);
    printf("\n");
}
/*Funcao que printa o nome da calculadora.*/
void Nome(){
    Asterisco(100);
    printf("\t\t\033[1;35m###### CONVERSOR DE VOLUME #######\033[m\n");
}
/*Funcao principal que conecta tudo.*/
int main(){
    int n1, n2, converte;
    float valor, medida[7]={1000, 100, 10, 1, 0.1, 0.01, 0.001};
    char volume[7][3]={"kl", "hl", "dal", "l", "dl", "cl", "ml"};
    Nome();
    printf("Obs: 1 litro corresponde a 1 decimetro cubico\n");
    converte = Comeco();
    while(converte == 1){
        printf("\n\033[1;32mQual unidade sera convertida: \033[m");
        n1 = Opcoes();
        printf("\n\033[1;32mDigite ao valor do volume: \033[m");
        scanf("%f", &valor);
        printf("\n\033[1;32mPara qual unidade sera convertida: \033[m");
        n2 = Opcoes();
        printf("\n\033[1;34m# %f %s correspondem a %f %s\n\033[m", valor, volume[n1-1], valor*medida[n1-1]/medida[n2-1], volume[n2-1]);
        converte = Comeco();
    }
    Asterisco(100);
    return 0;
}