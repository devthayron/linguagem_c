#include <stdio.h>


struct cartao{
    char estado;
    char codigo[4];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int qtd_ponto_turistico;
};

int main(){

    struct cartao cartao1;

    printf("Digite o estado: ");
    scanf(" %c",&cartao1.estado);

    printf("Digite o codigo: ");
    scanf("%s",cartao1.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s",cartao1.nome_cidade);

    printf("Digite a quantidade de população: ");
    scanf("%d",&cartao1.populacao);

    printf("Digite a quantidade da área: ");
    scanf("%f",&cartao1.area);

    printf("Digite o PIB: ");
    scanf("%f",&cartao1.pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&cartao1.qtd_ponto_turistico);


    printf("Cartão 1\n");
    printf("Estado: %c\n",cartao1.estado);
    printf("codigo: %s\n",cartao1.codigo);
    printf("Nome da Cidade: %s\n",cartao1.nome_cidade);
    printf("População: %d\n",cartao1.populacao);
    printf("área: %.2f\n",cartao1.area);
    printf("PIB: %.2f\n",cartao1.pib);
    printf("Quantidade de pontos turísticos: %d\n",cartao1.qtd_ponto_turistico);

    return 0;
}