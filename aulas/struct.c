#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    int dia, mes, ano;
}DataNas;


typedef struct {
    DataNas datanas;
    int idade;
    char sexo;
    char nome[100];

}Pessoa;

void imprimirpessoa(Pessoa p){
    printf("\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n",p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas: %d/%d/%d\n", p.datanas.dia, p.datanas.mes, p.datanas.ano);

}
Pessoa lerPessoa(){
    Pessoa p;

    printf("\nQual o seu nome?");
    fgets(p.nome, 100, stdin);

    printf("Qual seu sexo?");
    scanf("%c", &p.sexo);


    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &p.datanas.dia, &p.datanas.mes, &p.datanas.ano);
    
    return p;
}
int main()
{
    int i;
    Pessoa pessoas[3];

    for (i = 0; i< 3; i++){
        pessoas[i] = lerPessoa();
    }

    for (i = 0; i< 3; i++){
        imprimirpessoa(pessoas[i]);
    }
    
    return 0;
}
