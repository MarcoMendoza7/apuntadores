//& AMPERSAN PARA LA DIRECCION 
//* ASTERSICO PARA EL CONTENIDO 

#include <stdio.h>

int *p,y;

void func(){
    int x = 40;
    p = &x;
    y = *p;
    *p = 23;
}

int main (void){
    func();
    y = *p;
    *p = 25;
    printf("EL valor de y es %d \n El valor de *p es %d \n El valor de p es %p", y, *p, p);
}