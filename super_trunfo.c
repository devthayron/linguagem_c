#include <stdio.h>


struct cartao{
    char estado;
    char codigo[4];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int qtd_ponto_turistico;
    float densidade, per_capita;
};

int main(){

    struct cartao cartao1, cartao2;
    float super_poder1, super_poder2;

    printf("Digite o estado: ");
    scanf(" %c",&cartao1.estado);

    printf("Digite o codigo: ");
    scanf("%s",cartao1.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s",cartao1.nome_cidade);

    printf("Digite a quantidade de população: ");
    scanf("%lu",&cartao1.populacao);

    printf("Digite a quantidade da área: ");
    scanf("%f",&cartao1.area);
    
    printf("Digite o PIB: ");
    scanf("%f",&cartao1.pib);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&cartao1.qtd_ponto_turistico);
    printf("-----------------------------------------------------------------------------\n");

    // printf("Cartão 1\n");
    // printf("Estado: %c\n",cartao1.estado);
    // printf("codigo: %s\n",cartao1.codigo);
    // printf("Nome da Cidade: %s\n",cartao1.nome_cidade);
    // printf("População: %lu\n",cartao1.populacao);
    // printf("área: %.2f\n",cartao1.area);
    // printf("PIB: %.2f\n",cartao1.pib);
    // printf("Quantidade de pontos turísticos: %d\n",cartao1.qtd_ponto_turistico);

    cartao1.densidade = (float) cartao1.populacao / cartao1.area;
    cartao1.per_capita = (float) cartao1.pib / cartao1.populacao;
    
    // printf("Quantidade de PIB per Capita: %.2f\n",cartao1.per_capita);
    // printf("Quantidade de densidade Populacional: %.2f\n",cartao1.densidade);

    // printf("-----------------------------------------------------------------------------\n");
    
    printf("Digite o estado: ");
    scanf(" %c",&cartao2.estado);
    
    printf("Digite o codigo: ");
    scanf("%s",cartao2.codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s",cartao2.nome_cidade);
    
    printf("Digite a quantidade de população: ");
    scanf("%lu",&cartao2.populacao);
    
    printf("Digite a quantidade da área: ");
    scanf("%f",&cartao2.area);
    
    printf("Digite o PIB: ");
    scanf("%f",&cartao2.pib);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&cartao2.qtd_ponto_turistico);
    
    // printf("-----------------------------------------------------------------------------\n");
    
    // printf("Cartão 2\n");
    // printf("Estado: %c\n",cartao2.estado);
    // printf("codigo: %s\n",cartao2.codigo);
    // printf("Nome da Cidade: %s\n",cartao2.nome_cidade);
    // printf("População: %lu\n",cartao2.populacao);
    // printf("área: %.2f\n",cartao2.area);
    // printf("PIB: %.2f\n",cartao2.pib);
    // printf("Quantidade de pontos turísticos: %d\n",cartao2.qtd_ponto_turistico);
    
    cartao2.densidade = (float) cartao2.populacao / cartao2.area;
    cartao2.per_capita = (float) cartao2.pib / cartao2.populacao;

    // printf("Quantidade de PIB per Capita: %.2f\n",cartao2.per_capita);
    // printf("Quantidade de densidade Populacional: %.2f\n",cartao2.densidade);

    super_poder1 = (float)cartao1.populacao + cartao1.area + cartao1.pib + 
                   (float)cartao1.qtd_ponto_turistico + cartao1.per_capita + (1.0f / cartao1.densidade);

    super_poder2 = (float)cartao2.populacao + cartao2.area + cartao2.pib + 
                   (float)cartao2.qtd_ponto_turistico + cartao2.per_capita + (1.0f / cartao2.densidade);

    printf("-----------------------------------------------------------------------------\n");
    printf("Comparação de Cartas: \n");
    printf("OBS: se carta 1 vencer o resultado é (1), se carta 2 o resultado é (0) \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("População: Carta que venceu: (%d)\n", cartao1.populacao > cartao2.populacao);
    printf("Área: Carta que venceu: (%d)\n", cartao1.area > cartao2.area);
    printf("PIB: Carta que venceu: (%d)\n", cartao1.pib > cartao2.pib);
    printf("Pontos Turísticos: Carta que venceu: (%d)\n", cartao1.qtd_ponto_turistico > cartao2.qtd_ponto_turistico);
    printf("Densidade Populacional: Carta que venceu: (%d)\n", cartao1.densidade < cartao2.densidade); // menor densidade vence
    printf("PIB per Capita: Carta que venceu: (%d)\n", cartao1.per_capita > cartao2.per_capita);
    printf("Super Poder: Carta que venceu: (%d)\n", super_poder1 > super_poder2);

    return 0;
}