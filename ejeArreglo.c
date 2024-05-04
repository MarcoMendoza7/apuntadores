//CREA UN ARREGLO ENTERO DE TAMAÑO X, EN 
//DINDE X ES INGRESADO POR TECLADO

//LLENA TODOS LOS ELEMENTOS DEL ARREGLO CON 
//DATOS INGRESADOS POR EL USUARIO

//MUESTRA LOS VALORES

#include <stdio.h>
#include <stdlib.h>

int main (){
    int c;
    puts("Ingrese el tamaño del arrgelo");
    scanf("%d", &c);
    int *arre = (int *)malloc(c* sizeof(int));

    puts("Ingrese los elementos del arreglo");
    for (int i = 0; i< c; i++){
        printf("(%d)", i + 1);
        scanf("%d", arre + i);
    }

    puts("Elementos del arreglo");
    for(int i=0; i<c; i++){
        printf("%d", *(arre + i));
    }
    printf("\n");
    free(arre);
    return 0;
}