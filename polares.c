#include <stdio.h>
#include <math.h>

//LÉXICO:

//ACTIONS
void cartToPol(int x, int y);
void polToCart(int r, int theta);
void optionMenu();

int main(){
    
    optionMenu();

    return 0;
}



//Action that transforms polar coordinates into cartesian 
void cartToPol(int x, int y){

   float r = sqrt(pow(x, 2) + pow(y, 2)); //valor de r

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
}

//Action that transforms polar coordinates into cartesians:
void polToCart(int r, int theta){
    printf("(%d cos(%d), %d sen(%d))\n", r, theta, r, theta);
}

//Option menu
void optionMenu(){

    int opc, x, y, r, theta; //almacena la opción del usuario

    do{
        printf("****************************************\n");
        printf("1-Convert cartesian coordinates to polar\n");
        printf("2-Convert Polar Coordinates to Cartesian\n");
        printf("3-End program\n");
        printf("Enter option: ");
        scanf("%d", &opc);
        printf("****************************************\n");
        printf("\n");

        if(opc == 1){

            printf("Enter the x coordinate: ");
            scanf("%d", &x);
            printf("\n");

            printf("Enter the y coordinate: ");
            scanf("%d", &y);
            printf("\n");

            cartToPol(x, y);

        }else{
            if(opc == 2){
                printf("Enter the value of r: ");
                scanf("%d", &r);
                printf("\n");

                printf("Enter the value of theta: ");
                scanf("%d", &theta);
                printf("\n");

                polToCart(r, theta);
            }
        }

    }while(opc != 3);

    printf("End of program!\n");
}