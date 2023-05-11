#include <stdio.h>
#include <math.h>

//LÉXICO:

//ACCIONES
void cartToPol(int x, int y);
void polToCart(int r, int theta);
void menuOpciones();

int main(){
    
    menuOpciones();

    return 0;
}



//ACCIÓN QUE TRANSFORMA COORDENADAS CARTESIANAS EN POLARES:
void cartToPol(int x, int y){
   //LÉXICO LOCAL:
   float r = sqrt(pow(x, 2) + pow(y, 2)); //valor de r

   //InicioA:
    if(x > 0){
        if(y >= 0){
            printf("(%f, arctan(%d/%d))\n", r, y, x);         //Si x > 0 e y >= 0
        }else{
            printf("(%f, 2π + arctan(%d/%d))\n", r, y, x);    //Si x > 0 e y < 0 
        }
    }else{
        if(x == 0){
            if(y > 0){
                printf("(%f, π/2)\n", r);                     //Si x = 0 e y > 0
            }else{
                printf("(%f, 3π/2)\n", r);                    //Si x = 0 e y < 0
            }
        }else{
            printf("(%f, π + arctan(%d/%d))\n", r, y, x);     //Si x < 0
        }
    }
    //FinA
}

//ACCIÓN QUE TRANSFORMA COORDENADAS POLARES EN CARTESIANAS:
void polToCart(int r, int theta){
    //InicioA:
    printf("(%d cos(%d), %d sen(%d))\n", r, theta, r, theta);
    //FinA
}

void menuOpciones(){
    //LÉXICO LOCAL:
    int opc, x, y, r, theta; //almacena la opción del usuario
    //InicioA:
    do{
        printf("****************************************\n");
        printf("1-Convertir Coord. Cartesianas a Polares\n");
        printf("2-Convertir Coord. Polares a Cartesianas\n");
        printf("3-Salir\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opc);
        printf("****************************************\n");
        printf("\n");

        if(opc == 1){

            printf("Ingrese la coodenada x: ");
            scanf("%d", &x);
            printf("\n");

            printf("Ingrese la coordenada y: ");
            scanf("%d", &y);
            printf("\n");

            cartToPol(x, y);

        }else{
            if(opc == 2){
                printf("Ingrese el valor de r: ");
                scanf("%d", &r);
                printf("\n");

                printf("Ingrese el valor de theta: ");
                scanf("%d", &theta);
                printf("\n");

                polToCart(r, theta);
            }
        }

    }while(opc != 3);

    printf("Fin del programa!\n");
    //FinA
}