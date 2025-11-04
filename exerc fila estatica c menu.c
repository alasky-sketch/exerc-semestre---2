#include <stdio.h>
#include <stdlib.h> 
#define max 10 

typedef struct fila
{
    int inicio;
    int fim;
    int vetor[max];
} fila;

fila inicializarfila()
{
    fila q;
    q.inicio = 0;
    q.fim = 0;
    return q;
}

int vazia(fila q)
{
    return q.inicio == q.fim;
}

int cheia(fila q)
{
    return ((q.fim + 1) % max) == q.inicio;
}

void enfileirar(fila *q, int valor, int *erro)
{
    if (cheia(*q))
    {
        *erro = 1; 
    }
    else
    {
        q->vetor[q->fim] = valor;
        q->fim = (q->fim + 1) % max;
        *erro = 0; 
    }
}

int desenfileirar(fila *q, int *erro)
{
    if (vazia(*q))
    {
        *erro = 1; 
        return -1;
    }
    else
    {
        int valor = q->vetor[q->inicio];
        q->inicio = (q->inicio + 1) % max;
        *erro = 0; 
        return valor;
    }
}

void mostrafila(fila q)
{
    if (vazia(q))
    {
        printf("fila: vazia\n");
        return;
    }

    int i = q.inicio;
    printf("fila: ");
    while (i != q.fim)
    {
        printf("%d", q.vetor[i]);
        i = (i + 1) % max;
        if (i != q.fim) {
            printf(" ");
        }
    }
    printf("\n");
}

int encontraelemento(fila q, int valor)
{
    int i = q.inicio;
    int contador = 0;

    while (i != q.fim)
    {
        if (q.vetor[i] == valor)
        {
            contador++;
        }
        i = (i + 1) % max;
    }
    return contador;
}

int main()
{
    fila q = inicializarfila();
    int opcao, valor, erro, contagem;

    do
    {
        printf("\nmenu da fila\n");
        printf("1. enfileirar elemento\n");
        printf("2. desenfileirar elemento\n");
        printf("3. mostrar conteudo da fila\n");
        printf("4. encontrar elemento na fila\n");
        printf("0. sair\n");
        
        printf("escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = -1; 
        }

        switch (opcao)
        {
        case 1:
            printf("digite o valor para enfileirar: ");
            if (scanf("%d", &valor) == 1) {
                enfileirar(&q, valor, &erro);
                if (erro == 0)
                {
                    printf("elemento %d adicionado com sucesso!\n", valor);
                }
                else
                {
                    printf("erro! a fila esta cheia. nao foi possivel adicionar o elemento.\n");
                }
            } 
            break;

        case 2:
            valor = desenfileirar(&q, &erro);
            if (erro == 0)
            {
                printf("desenfileirado: %d\n", valor);
            }
            else
            {
                printf("erro! a fila esta vazia. nao ha elementos para desenfileirar.\n");
            }
            break;

        case 3:
            mostrafila(q);
            break;

        case 4:
            printf("digite o valor a procurar: ");
            if (scanf("%d", &valor) == 1) {
                contagem = encontraelemento(q, valor);
                if (contagem > 0)
                {
                    printf("o elemento %d aparece %d vez%s na fila.\n", valor, contagem, contagem > 1 ? "es" : "");
                }
                else
                {
                    printf("o elemento %d nao foi encontrado na fila.\n", valor);
                }
            }
            
            break;

        case 0:
            printf("encerrando o programa...\n");
            break;

        
        }
    } while (opcao != 0);

    return 0;
}