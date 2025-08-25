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

    // --- Entrada da Carta 1 ---
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

    // Calcular densidade e PIB per capita
    cartao1.densidade = (float)cartao1.populacao / cartao1.area;
    cartao1.per_capita = (float)cartao1.pib / cartao1.populacao;

    // --- Entrada da Carta 2 ---
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
    
    cartao2.densidade = (float)cartao2.populacao / cartao2.area;
    cartao2.per_capita = (float)cartao2.pib / cartao2.populacao;

    // --- Calcular Super Poder ---
    super_poder1 = (float)cartao1.populacao + cartao1.area + cartao1.pib + 
                   (float)cartao1.qtd_ponto_turistico + cartao1.per_capita + (1 / cartao1.densidade);

    super_poder2 = (float)cartao2.populacao + cartao2.area + cartao2.pib + 
                   (float)cartao2.qtd_ponto_turistico + cartao2.per_capita + (1 / cartao2.densidade);

    // --- Comparação de Cartas ---
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", 1 * (cartao1.populacao > cartao2.populacao) + 2 * (cartao1.populacao < cartao2.populacao), cartao1.populacao > cartao2.populacao);
    printf("Área: Carta %d venceu (%d)\n", 1 * (cartao1.area > cartao2.area) + 2 * (cartao1.area < cartao2.area), cartao1.area > cartao2.area);
    printf("PIB: Carta %d venceu (%d)\n", 1 * (cartao1.pib > cartao2.pib) + 2 * (cartao1.pib < cartao2.pib), cartao1.pib > cartao2.pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 1 * (cartao1.qtd_ponto_turistico > cartao2.qtd_ponto_turistico) + 2 * (cartao1.qtd_ponto_turistico < cartao2.qtd_ponto_turistico), cartao1.qtd_ponto_turistico > cartao2.qtd_ponto_turistico);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 1 * (cartao1.densidade < cartao2.densidade) + 2 * (cartao1.densidade > cartao2.densidade), cartao1.densidade < cartao2.densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 1 * (cartao1.per_capita > cartao2.per_capita) + 2 * (cartao1.per_capita < cartao2.per_capita), cartao1.per_capita > cartao2.per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", 1 * (super_poder1 > super_poder2) + 2 * (super_poder1 < super_poder2), super_poder1 > super_poder2);

    return 0;
}
