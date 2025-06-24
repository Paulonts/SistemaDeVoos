#include <stdio.h>
#include <string.h>

#define MAX_LINHA 200
#define MAX_PASSAGEIROS 200

typedef struct{
    char origin[50]; //origem
    char destination[50]; //destino
    char date[20]; //data
    char departureTime[10]; //horario partida
    int seatsAvaliable; //assentos disponiveis
}Voos;

typedef struct{
    char name;
    char numberDocument;
}Passageiros;

void consultVoos(Voos voos[]){
    FILE *file = fopen("lugares.txt", "r");
    if (file == NULL){
        printf("erro ao ler arquivo");
    }

    getchar();
    printf("Digite a origem do voo: ");
    fgets(voos->origin, sizeof(voos->origin), stdin);
    voos->origin[strcspn(voos->origin, "\n")] = '\0';

    getchar();
    printf("Digite o destino do voo: ");
    fgets(voos->destination, sizeof(voos->destination), stdin);
    voos->destination[strcspn(voos->destination, "\n")] = '\0';

    printf("Digite a data desejada, exemplo: 0000/00/00\n:");
    fgets(voos->date, sizeof(voos->date), stdin);
    fgets(voos->destination, sizeof(voos->destination), stdin);



}
void menu(){
int option;

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

        scanf("%d", &option);

        switch (option){
        case 1:
            printf("[Voos disponiveis]\n");
            consultVoos(voos);

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

    } while (option != 4);
}

int main()
{
    menu();
    return 0;
}