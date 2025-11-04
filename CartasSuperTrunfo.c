

#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área (Km²): %.2f\n", carta.areaKm2);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

int main() {
    // Criando cartas manualmente
    Carta carta1 = {"Ceará", "001", "Fortaleza", 567900, 987.89, 765767890.00, 50};
    Carta carta2 = {"Distrito Federal", "002", "Brasília", 76940, 435.67, 76768.00, 20};

    // Exibindo as cartas
    printf("Cartas Super Trunfo:\n\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}
    
    

