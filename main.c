#include <stdio.h>
#include "maze.h"
#include "player.h"

void jugar() {
    printf("¡Bienvenido al juego!\n");

}

void mostrarCreditos() {
    printf("Desarrollado por: Michael\n");
}

int main() {
    int opcion;
    int x, y;

    do {
        printf("     MENU     \n");
        printf("1. Jugar\n");
        printf("2. Creditos\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                jugar();
                printf("Ingrese las coordenadas x e y para mover al jugador: ");
                scanf("%d %d", &x, &y);
                valimovi(x, y);
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }

        printf("\n");

    } while (opcion != 3);

    return 0;
}
