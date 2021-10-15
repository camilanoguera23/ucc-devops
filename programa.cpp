#include <stdio.h>

int main()
{
    int opcion;
 float area=3, l1=5, radio=8, h=2, base=7;

    float area, l1, radio, h, base;

    printf(" ----------------------------------------------------------------\n");
    printf("|Universidad cooperativa de Colombia                             |\n");
    printf("|Camila Andrea Noguera Poveda                                    |\n");
    printf("|Programa para realizar el area del circulo, triangulo y cuadrado|\n");
    printf(" ---------------------------------------------------------------- \n");
    printf("        1.  Circulo     \n");
    printf("        2. Triangulo    \n");
    printf("        3. Cuadrado     \n");

    //printf("Por favor introduce una opcion: " );
    //scanf("%d", &opcion);
    //switch(opcion)
    //{
        //case 1:
        //{
            printf("Ingresa el radio: %f " , radio);
            //scanf("%f", &radio);
    printf("Por favor introduce una opcion: " );
    scanf("%d", &opcion);
    switch(opcion)
    {
        case 1:
        {
            printf("Ingresa el radio: ");
            scanf("%f", &radio);

            area=(radio*radio)*3.14;
            printf("El area del circulo es de : %f " , area);

          //  break;
        //}

        //case 2:
        //{
            printf("Ingresa base : %f " , base );
            //scanf("%f", &base);

            printf("Ingresa altura : %f ", h );
            //scanf("%f", &h);
            break;
        }

        case 2:
        {
            printf("Ingresa base : " );
            scanf("%f", &base);

            printf("Ingresa altura : " );
            scanf("%f", &h);


            area=(base*h)/2;
            printf("El area del triangulo es de : %f " , area);


            //break;
        //}

        //case 3:
        //{
	 printf("Ingresa lado: %f ", l1);
           // scanf("%f", &l1);
           break;
        }

        case 3:
        {
	 printf("Ingresa lado: ");
            scanf("%f", &l1);

            area=l1*l1;
            printf("El area del cuadrado es de : %f ", area);

         //  break;

        //}

       // default:
          //  printf("La opcion no es correcta");
    //}

            break;

        }

        default:
            printf("La opcion no es correcta");
    }
	
}
