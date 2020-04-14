/**<harry inputs-outputs: biblioteca personal de ingreso y egreso de datos por teclado*/

/** Recibe el mensaje de muestra o pedido y pide un entero, si se habilita la validacion, compara el numero con los parametros
 *  maximo y minimo y mientras no se encuentre dentro del rango repite el pedido pero utilizando el mensaje de error por parametro.
 *
 * \param mensaje de pedido
 * \param mensaje de error
 * \param numero entero maximo (excluido)
 * \param numero entero minimo (excluido)
 * \param flag de validacion min/max (1 para habilitar)
 * \return entero ingresado por teclado
 *
 */
int getInt(char[],char[],int,int,int);

/** Recibe el mensaje de muestra o pedido y pide un flotante, si se habilita la validacion, compara el numero con los parametros
 *  maximo y minimo y mientras no se encuentre dentro del rango repite el pedido pero utilizando el mensaje de error por parametro.
 *
 * \param mensaje de pedido
 * \param mensaje de error
 * \param numero flotante maximo (excluido)
 * \param numero flotante minimo (excluido)
 * \param flag de validacion min/max (1 para habilitar)
 * \return flotante ingresado por teclado
 *
 */
float getFloat(char[],char[],float,float,int);
