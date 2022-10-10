//
// Created by hgallegos on 5/10/2022.
//

#ifndef SEM8_VECTORES_CCILINDRO_H
#define SEM8_VECTORES_CCILINDRO_H

class CCilindro
{
private:
    double altura, radio;

public:
    // Constructores
    CCilindro() {}
    CCilindro(double _altura, double _radio)
    {
        radio = _radio;
        altura = _altura;
    }
    // Destructor
    ~CCilindro() {}
    // Funciones
    double area_lateral();
    double area_base();
    double area_total();
    double volumen();
    // Setter
    void set(double _altura, double _radio);
    // Getter
    double getAltura();
    double getRadio();
};

#endif // SEM8_VECTORES_CCILINDRO_H
