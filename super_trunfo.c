#include <stdio.h>
// Carlos Alberto de Araujo Junior
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                    // VARIAVEIS
            // Carta 01
        char estado1;
        char codigo1 [3];       // O código terá 2 caracteres
        char cidade1 [26];      // A cidade terá 25 caracteres
        int populacao1;
        float area1;
        float pib1;
        int pontotur1;

            // Carta 02
        char estado2;
        char codigo2 [3];
        char cidade2 [26];
        int populacao2;
        float area2;
        float pib2;
        int pontotur2;

        // ---------------------------------------------------------- INICIO CARTA 01 ----------------------------------------------------------
        // ENTRADA CARTA_1
        printf("• CARTA 01 •\n");                // Mostra na tela "• CARTA 01 •" e pula uma linha usando o \n

        printf("Digite o estado (de A a H): \n");// Mostra na tela "Digite o estado: "
        scanf("%c", &estado1);                   // Armazena o dado na variável estado1
        
        printf("Digite o código: \n");           // Mostra na tela "Digite o código: "
        scanf("%s", &codigo1);                   // Armazena o dado na variável codigo1

        printf("Digite a cidade (apenas uma palavra): \n");// Mostra na tela "Digite a cidade (apenas uma palavra): "
        scanf("%s", &cidade1);                   // Armazena o dado na variável cidade1

        printf("Digite a população: \n");        // Mostra na tela "Digite a população: "
        scanf("%d", &populacao1);                // Armazena o dado na variável populacao1

        printf("Digite a área (em Km²): \n");    // Mostra na tela "Digite a área (em Km²): "
        scanf("%f", &area1);                     // Armazena o dado na variável area1

        printf("Digite o PIB: \n");              // Mostra na tela "Digite o PIB: "
        scanf("%f", &pib1);                      // Armazena o dado na variável pib1

        printf("Digite o número de pontos turísticos: \n");// Mostra na tela "Digite o número de pontos turísticos: "
        scanf("%d", &pontotur1);                 // Armazena o dado na variável pontotur1

                    // SAIDA CARTA_1
            // Mostra na tela os resultados
        printf("\n• DADOS DA CARTA 01 •\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontotur1);
// ---------------------------------------------------------- FIM CARTA 01 ----------------------------------------------------------

// ---------------------------------------------------------- INICIO CARTA 02 ----------------------------------------------------------
        // ENTRADA CARTA_2
        printf("\n• CARTA 02 •\n");                // Mostra na tela "• CARTA 02 •" e pula uma linha usando o \n

        printf("Digite o estado (de A a H): \n");// Mostra na tela "Digite o estado: "
        scanf("%c", &estado2);                   // Armazena o dado na variável estado2
    
        printf("Digite o código: \n");           // Mostra na tela "Digite o código: "
        scanf("%s", &codigo2);                   // Armazena o dado na variável codigo2

        printf("Digite a cidade (apenas uma palavra): \n");// Mostra na tela "Digite a cidade (apenas uma palavra): "
        scanf("%s", &cidade2);                   // Armazena o dado na variável cidade2

        printf("Digite a população: \n");        // Mostra na tela "Digite a população: "
        scanf("%d", &populacao2);                // Armazena o dado na variável populacao2

         printf("Digite a área (em Km²): \n");   // Mostra na tela "Digite a área (em Km²): "
        scanf("%f", &area2);                     // Armazena o dado na variável area2

        printf("Digite o PIB: \n");              // Mostra na tela "Digite o PIB: "
        scanf("%f", &pib2);                      // Armazena o dado na variável pib2

        printf("Digite o número de pontos turísticos: \n");// Mostra na tela "Digite o número de pontos turísticos: "
        scanf("%d", &pontotur2);                 // Armazena o dado na variável pontotur2

                    // SAIDA CARTA_2
            // Mostra na tela os resultados
    printf("\n• DADOS DA CARTA 02 •\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontotur2);
// ---------------------------------------------------------- FIM CARTA 02 ----------------------------------------------------------

return 0;
}