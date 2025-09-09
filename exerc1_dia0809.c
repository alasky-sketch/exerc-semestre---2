

#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[20];
    float salario;
    int codigo;
} funcionario;

int main()
{
    funcionario empregado;
    strcpy(empregado.nome, "Alexander");
    empregado.salario = 2000;
    empregado.codigo = 456433;
    
    printf("Nome: %s\n", empregado.nome);
    printf("Salario: %2.f\n", empregado.salario);
    printf("Codigo: %d", empregado.codigo);
    return 0;
}

