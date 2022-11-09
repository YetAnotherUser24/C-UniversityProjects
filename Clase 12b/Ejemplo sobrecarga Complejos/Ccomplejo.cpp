//
// Created by Ayrton on 12/10/2020.
//

#include "Ccomplejo.h"

#include <math.h>

/**************************************************************************
* METODOS DE LA CLASE
*************************************************************************/

/*************** CONSTRUCTORES ************************/

/* Constructor por defecto. Pone los atributos x e y a 0.0 */
CComplejo::CComplejo() {
    m_x=0.0;
    m_y=0.0;
}

/* Constructor por defecto. Pone los atributos x e y a 0.0 */
CComplejo::CComplejo (TipoDoble valor) {
    m_x=valor;
    m_y=0.0;
}

/* Constructor con un array de doubles. Pone el primer elemento del array en x y el
* segundo en y */
CComplejo::CComplejo (const TipoDoble origen[]) {
    *
            this = origen;}

/** Constructor copia. Copia los atributos de origen en los internos de la clase */
CComplejo::CComplejo (const CComplejo &origen) {
    m_x = origen.m_x;
    m_y = origen.m_y;
}

/************** OPERADORES SUMA EN LA CLASE      ***************************/

/** operador suma para un double. Lo suma a la parte real y devuelve CComplejo para
* poder concatenar sumas */
CComplejo CComplejo::operator + (TipoDoble sum) const {
    CComplejo aux(*this);
    aux.m_x = m_x + sum;
    return aux;
}

/** operador suma para array de doubles. Devuelve CComplejo para poder concatenar sumas */
CComplejo CComplejo::operator + (TipoDoble sum[]) {
    CComplejo aux;
    aux.m_x = m_x + sum[0];
    aux.m_y = m_y + sum[1];
    return aux;
}

/** operador suma para otro CComplejo. Devuelve CComplejo para poder concatenar sumas */
CComplejo CComplejo::operator + (CComplejo &sum) const {
    CComplejo aux;
    aux.m_x = m_x + sum.m_x;
    aux.m_y = m_y + sum.m_y;
    return aux;
}

/******************* OPERADORES DE ASIGNACION EN LA CLASE ******************************/

/** operador = para arrays de doubles. Devuelve CComplejo para poder concatenar
* operaciones de = estilo    a = b = c; */
CComplejo &CComplejo::operator = (const TipoDoble origen[]) {
    m_x = origen[0];
    m_y = origen[1];
    return *this;
}

/** operador = para otro CComplejo. Devuelve CComplejo para poder concatenar
* operaciones de =, estilo a = b = c; */
CComplejo &CComplejo::operator = (const CComplejo &origen) {
    m_x = origen.m_x;
    m_y = origen.m_y;
    return *this;
}

/****************** OPERADORES DE CAST EN LA CLASE ********************/

/** operador cast a double. Devuelve el módulo del complejo */
CComplejo::operator TipoDoble () {
    return sqrt (m_x*m_x + m_y*m_y);
}

/******************* OTROS MÉTODOS DE LA CLASE ********************/

/** Devuelve X */
TipoDoble CComplejo::dameX () const {
    return m_x;
}

/** Devuelve Y */
TipoDoble CComplejo::dameY () const {
    return m_y;
}

/** Asigna X */
void CComplejo::tomaX (TipoDoble valor) {
    m_x = valor;
}

/** Asigna Y */
void CComplejo::tomaY (TipoDoble valor) {
    m_y = valor;
}

/***********************************************************************
* FUNCIONES EXTERNAS A LA CLASE
***********************************************************************/

/************************* OPERADOR << PARA EL COUT ********************************/

/* operador global << para escribir CComplejo en pantalla. */
ostream &operator << (ostream &salida, const CComplejo &origen) {
    // Se pone signo positivo por defecto
    TipoChar signo='+';

    // Si la y es negativa, no se pone signo, ya que al escribir la y ya sale un signo
    // negativo.
    if (origen.dameY() < 0.0)
        signo = 0;

    // Se escriben los campos separados por el signo
    cout << origen.dameX() << signo << origen.dameY() << "j";
    return salida;
}


/* operador global << para escribir array de doubles en pantalla. */
ostream &operator << (ostream &salida, TipoDoble origen[]) {
    // Se pone signo positivo por defecto
    TipoChar signo='+';
    // Si la y es negativa, no se pone signo, ya que al escribir la y ya sale un signo
    // negativo.
    if (origen[1] < 0.0)
        signo = 0;
    // Se escriben los campos separados por el signo
    cout << origen[0] << signo << origen[1] << "j";
    return salida;
}
/********************* OPERADORES SUMA EXTERNOS **********************************/
/* operador global + para sumar array de doubles con CComplejo.
* Devuelve un CComplejo para poder encadenar sumas a+b+c+d */
CComplejo operator + (TipoDoble sum1[], CComplejo &sum2) {
    CComplejo aux;
    aux = sum2 + sum1;
    return aux;
}

/* operador global + para sumar un double con un complejo. Devuelve CComplejo
* para poder encadenar sumas */
CComplejo operator + (TipoDoble sum, CComplejo &origen) {
    CComplejo aux;
    aux = origen + sum;
    return aux;
}


