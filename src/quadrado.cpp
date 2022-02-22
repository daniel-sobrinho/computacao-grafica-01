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

    if(pontoA_X + tamanho > grid){
        pontoA_X -= ((pontoA_X + tamanho)-grid);
    }
    if(pontoA_Y + tamanho > grid){
        pontoA_Y -= ((pontoA_Y + tamanho)-grid);
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
