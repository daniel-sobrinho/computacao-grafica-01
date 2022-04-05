#include <iostream>
#include <cstdlib>
#include <ctime>

#include "quadrado.h"
#include "ponto.h"

Quadrado::Quadrado(int grid, int tamanho){
    tamanho -= 1;

    unsigned seed = time(0);

    srand(seed);

    int pontoA_X = rand()%grid;
    int pontoA_Y = rand()%grid;

    pontoA_Y = (grid - pontoA_Y);

    if(pontoA_X + tamanho >= grid){
        pontoA_X -= ((pontoA_X + tamanho)-grid)+1;
    }
    if(pontoA_Y + tamanho >= grid){
        pontoA_Y -= ((pontoA_Y + tamanho)-grid)+1;
    }


    Ponto A, B, C, D;

    A.setX(pontoA_X);
    A.setY(pontoA_Y);

    B.setX(pontoA_X + tamanho);
    B.setY(pontoA_Y);

    C.setX(pontoA_X + tamanho);
    C.setY(pontoA_Y + tamanho);

    D.setX(pontoA_X);
    D.setY(pontoA_Y + tamanho);

    this->setA(A);
    this->setB(B);
    this->setC(C);
    this->setD(D);
}

Quadrado::Quadrado(Ponto ponto, int grid, int tamanho){
    tamanho -= 1;

    int pontoA_X = ponto.getX();
    int pontoA_Y = ponto.getY();

    pontoA_Y = (grid - pontoA_Y);

    if(pontoA_X + tamanho > grid){
        pontoA_X -= ((pontoA_X + tamanho)-grid)+1;
    }
    if(pontoA_Y + tamanho > grid){
        pontoA_Y -= ((pontoA_Y + tamanho)-grid)+1;
    }


    Ponto A, B, C, D;

    A.setX(pontoA_X);
    A.setY(pontoA_Y);

    B.setX(pontoA_X + tamanho);
    B.setY(pontoA_Y);

    C.setX(pontoA_X + tamanho);
    C.setY(pontoA_Y + tamanho);

    D.setX(pontoA_X);
    D.setY(pontoA_Y + tamanho);

    this->setA(A);
    this->setB(B);
    this->setC(C);
    this->setD(D);
}

void Quadrado::soma(Ponto ponto){
    this->a.setX(a.getX() + ponto.getX());
    this->a.setY(a.getY() - ponto.getY());

    this->b.setX(b.getX() + ponto.getX());
    this->b.setY(b.getY() - ponto.getY());

    this->c.setX(c.getX() + ponto.getX());
    this->c.setY(c.getY() - ponto.getY());

    this->d.setX(d.getX() + ponto.getX());
    this->d.setY(d.getY() - ponto.getY());
}

void Quadrado::multiplicacao(Ponto ponto){
    this->a.setX(a.getX() * ponto.getX());
    this->a.setY(a.getY() * ponto.getY());

    this->b.setX(b.getX() * ponto.getX());
    this->b.setY(b.getY() * ponto.getY());

    this->c.setX(c.getX() * ponto.getX());
    this->c.setY(c.getY() * ponto.getY());

    this->d.setX(d.getX() * ponto.getX());
    this->d.setY(d.getY() * ponto.getY());
}

void Quadrado::setA(Ponto a){
    this->a = a;
}

void Quadrado::setB(Ponto b){
    this->b = b;
}

void Quadrado::setC(Ponto c){
    this->c = c;
}

void Quadrado::setD(Ponto d){
    this->d = d;
}

Ponto Quadrado::getA(){
    return this->a;
}

Ponto Quadrado::getB(){
    return this->b;
}

Ponto Quadrado::getC(){
    return this->c;
}

Ponto Quadrado::getD(){
    return this->d;
}
