#ifndef QUADRADO_H
#define QUADRADO_H

#include "ponto.h"

class Quadrado{
    private:
        Ponto a, b, c, d;

        void setA(Ponto a);
        void setB(Ponto b);
        void setC(Ponto c);
        void setD(Ponto d);


    public:
        Quadrado(int grid, int tamanho);
        Quadrado(Ponto ponto, int grid, int tamanho);

        void soma(Ponto ponto_aux);
        void multiplicacao(Ponto ponto_aux);

        Ponto getA();
        Ponto getB();
        Ponto getC();
        Ponto getD();
};

#endif
