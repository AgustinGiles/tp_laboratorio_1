/*
 * libreria.h
 *
 *  Created on: 10 abr. 2021
 *      Author: Agustín Giles
 */

#ifndef LIBRERIA_H_
#define LIBRERIA_H_
/** \brief  Muestra el menu del programa
 *
 * \return Devuelve un entero, la opcion que haya escogido el usuario
 *
 */
int menu();


/** \brief Cambia una bandera a true (valor 1)
 *
 * \param El puntero a la variable de la bandera
 *
 */
void FlagTrue (int* f);


/** \brief Muestra el resultado de las cuentas
 *
 * \param El resultado de la suma (float)
 * \param El resultado de la resta (float)
 * \param El resultado de la multiplicacion (float)
 * \param El resultado de la division (float)
 * \param El resultado del factorial del primer numero (float)
 * \param El resultado del factorial del segundo numero (float)
 * \param El resultado de la division (entero)
 * \param Primer operando (float)
 * \param Segundo operando (float)
 *
 */
void informe(float a, float b, float c, float d, float e, float f, int g, float h, float i);


/** \brief  Suma de los numeros pasados como parametros y escribe el resultado
 *
 * \param Primer numero a sumar, float
 * \param Segundo numero a sumar, float
 * \param Puntero a donde escribe el resultado
 *
 */
void suma(float a, float b, float* c);


/** \brief Resta de los numeros pasados como parametros y escribe el resultado
 *
 * \param Primer numero a restar, float
 * \param Segundo numero a restar, float
 * \param Puntero a donde escribe el resultado
 *
 */
void resta(float a, float b, float* c);


/** \brief Multiplica los numeros pasados como parametros y escribe el resultado
 *
 * \param Primer numero a multiplicar, float
 * \param Segundo numero a multiplicar, float
 * \param Puntero a donde escribe el resultado
 *
 */
void multiplicacion(float a, float b, float* c);

/** \brief Divide los numeros pasados como parametros, escribe el resultado e informa si pudo hacer o no la division
 *
 * \param El numero a dividir, float
 * \param El divisor, float
 * \param Puntero donde escribe resultado
 * \return Devuelve un 0 si la pudo hacer y un 1 si no pudo
 *
 */
int division(float a, float b, float* c);


/** \brief Realiza el factorial del numero pasado como parametro
 *
 * \param El numero a factorizar, float
 * \param El puntero a la variable donde escribe el resultado
 *
 */
void factorial(float a, float*b);


/** \brief Cambia una bandera a false (valor 0)
 *
 * \param Puntero a la variable de la bandera
 *
 */
void FlagFalse (int* f);


#endif /* LIBRERIA_H_ */
