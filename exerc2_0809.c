#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char cidade[20];
    unsigned long int cep;
} endereco;

int main() {
    endereco pessoa[3];

    
  
    for (int i = 0; i < 3; i++) {
      
        printf("Digite o nome: ");
        scanf("%s", pessoa[i].nome); 

        printf("Digite a cidade: ");
        scanf("%s", pessoa[i].cidade); 

        printf("Digite o CEP: ");
        scanf("%lu", &pessoa[i].cep); 
    }

   
    for (int i = 0; i < 3; i++) {
       
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Cidade: %s\n", pessoa[i].cidade);
        printf("CEP: %lu\n", pessoa[i].cep);
    }

    return 0;
}