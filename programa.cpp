#include <stdio.h>

int main()
{
    int opcion;
<<<<<<< HEAD
    float area=3, l1=5, radio=8, h=2, base=7;
=======
    float area, l1, radio, h, base;
>>>>>>> 6569f35497b262f1a15226d5664a0470a1c31c07
    printf(" ----------------------------------------------------------------\n");
    printf("|Universidad cooperativa de Colombia                             |\n");
    printf("|Camila Andrea Noguera Poveda                                    |\n");
    printf("|Programa para realizar el area del circulo, triangulo y cuadrado|\n");
    printf(" ---------------------------------------------------------------- \n");
    printf("        1.  Circulo     \n");
    printf("        2. Triangulo    \n");
    printf("        3. Cuadrado     \n");
<<<<<<< HEAD
    //printf("Por favor introduce una opcion: " );
    //scanf("%d", &opcion);
    //switch(opcion)
    //{
        //case 1:
        //{
            printf("Ingresa el radio: %f " , radio);
            //scanf("%f", &radio);
=======
    printf("Por favor introduce una opcion: " );
    scanf("%d", &opcion);
    switch(opcion)
    {
        case 1:
        {
            printf("Ingresa el radio: ");
            scanf("%f", &radio);
>>>>>>> 6569f35497b262f1a15226d5664a0470a1c31c07

            area=(radio*radio)*3.14;
            printf("El area del circulo es de : %f " , area);

<<<<<<< HEAD
          //  break;
        //}

        //case 2:
        //{
            printf("Ingresa base : %f " , base );
            //scanf("%f", &base);

            printf("Ingresa altura : %f ", h );
            //scanf("%f", &h);
=======
            break;
        }

        case 2:
        {
            printf("Ingresa base : " );
            scanf("%f", &base);

            printf("Ingresa altura : " );
            scanf("%f", &h);
>>>>>>> 6569f35497b262f1a15226d5664a0470a1c31c07

            area=(base*h)/2;
            printf("El area del triangulo es de : %f " , area);

<<<<<<< HEAD
            //break;
        //}

        //case 3:
        //{
	 printf("Ingresa lado: %f ", l1);
           // scanf("%f", &l1);
=======
            break;
        }

        case 3:
        {
	 printf("Ingresa lado: ");
            scanf("%f", &l1);
>>>>>>> 6569f35497b262f1a15226d5664a0470a1c31c07

            area=l1*l1;
            printf("El area del cuadrado es de : %f ", area);

<<<<<<< HEAD
          //  break;

        //}

       // default:
          //  printf("La opcion no es correcta");
    //}
=======
            break;

        }

        default:
            printf("La opcion no es correcta");
    }
>>>>>>> 6569f35497b262f1a15226d5664a0470a1c31c07
	
}
