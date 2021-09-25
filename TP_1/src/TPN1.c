/*
 ============================================================================
 Name        : TPN1
 Author      : Agustín Giles
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main(void) {
	        char salir = 'n';
		    float primerO;
		    float segundoO;
		    int flagPrimerO = 0;
		    int flagSegundoO = 0;
		    int flagOp = 0;
		    float resultadoS;
		    float resultadoR;
		    float resultadoM;
		    float resultadoD;
		    float resultadoFactorial1;
		    float resultadoFactorial2;
		    int dividir=0;

		    setbuf(stdout, NULL);
		    fflush(stdin);

		    do {

		   	        switch(menu())
		   	        {
		   	            case 1:
		   	            printf("ingresar numero: ");
		   	            scanf("%f", &primerO);
		   	            printf("(a = %.2f)\n", primerO);
		   	            FlagTrue (&flagPrimerO);
		   	            break;

		   	            case 2:
		   	            if(flagPrimerO == 0)
		   	            {
		   	                printf("Ingrese el primer operando\n");

		   	            } else
		   	            {
		   	                printf("ingrese numero: ");
		   	                scanf("%f", &segundoO);
		   	                printf("(a = %.2f)", primerO);
		   	                printf("(b = %.2f)\n", segundoO);
		   	                FlagTrue(&flagSegundoO);

		   	            }
		   	            break;

		   	            case 3:
		   	            if(flagPrimerO == 1 && flagSegundoO == 1)
		   	            {
		   	            printf("Realizando operaciones...........\n");
		   	            suma(primerO, segundoO, &resultadoS);
		   	            resta(primerO, segundoO, &resultadoR);
		   	            multiplicacion(primerO, segundoO, &resultadoM);
		   	            division(primerO, segundoO, &resultadoD);
		   	            factorial(primerO, &resultadoFactorial1);
		   	            factorial(segundoO, &resultadoFactorial2);
		   	            FlagTrue(&flagOp);

		   	            } else
		   	            {
		   	                printf("Ingrese los operandos primero...........\n");

		   	            }
		   	            break;

		   	            case 4:
		   	            if(flagOp ==1)
		   	            {
		   	                informe(resultadoS, resultadoR, resultadoM, resultadoD, resultadoFactorial1, resultadoFactorial2, dividir, primerO, segundoO);
		   	                FlagFalse(&flagOp);
		   	                FlagFalse(&flagPrimerO);
		   	                FlagFalse(&flagSegundoO);
		   	            }
		   	            else
		   	            {
		   	                printf("Realizar las operaciones primero...........\n");
		   	            }

		   	            break;

		   	            case 5:
		   	            printf("¿Desea salir? s / n\n");
		   	            fflush(stdin);
		   	            scanf("%c", &salir);
		   	            break;
		   	            default:
		   	                printf("Opcion invalida\n");
		   	            break;

		   	        }

		   	    }while(salir == 'n');
		   	    return 0;
}
