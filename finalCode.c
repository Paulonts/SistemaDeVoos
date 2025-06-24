#include <stdio.h>
#include <string.h>

#define MAX_LINHA 200
#define MAX_PASSAGEIROS 200

typedef struct{
    char origem[50];
    char destino[50];
    char data[20];
    char horarioPartida[10];
    int AssentosDisponiveis;
}Voos;

typedef struct{
    char nome;
    char numerDocumento;
}Passageiros;

void consultarVoos(Voos voos[]){
    FILE *arquivo = fopen("lugares.txt", "r");
    if (arquivo == NULL){
        printf("erro ao ler arquivo");
    }

    getchar();
    printf("Digite a origem do voo: ");
    fgets(voos->origem, sizeof(voos->origem), stdin);
    voos->origem[strcspn(voos->origem, "\n")] = '\0';

    getchar();
    printf("Digite o destino do voo: ");
    fgets(voos->destino, sizeof(voos->destino), stdin);
    voos->destino[strcspn(voos->destino, "\n")] = '\0';

    printf("Digite a data desejada, exemplo: 0000/00/00\n:");
    fgets(voos->data, sizeof(voos->data), stdin);
    fgets(voos->destino, sizeof(voos->destino), stdin);

    


}
void menu(){
int opcao;

Voos voos[MAX_LINHA];


    do
    {

        printf("\n[menu de escolhas]\n");
        printf("1- Consultar voos disponiveis\n");
        printf("2- reservar passagens\n");
        printf("3- Cancelar passagens\n");
        printf("4- Consultar passsagens\n");
        printf("5- Reservar passagens\n");
        printf("6- Sair\n");

        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("[Voos disponiveis]\n");
            consultarVoos(voos);

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            printf("saindo do programa\n");
            break;
        default:
            break;
        }

    } while (opcao != 4);
}

int main()
{
    menu();
    return 0;
}