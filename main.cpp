#include <iostream>
#include <cstdlib>
#include <ctime>
#include "quadrado.h"

using namespace std;

int main(){

    const int MAX_GRID = 25;
    const int TAMANHO = 5;

    Ponto p, aux_1, aux_2;

    //p.setX(1);
    //p.setY(1);

    aux_1.setX(2);
    aux_1.setY(2);

    Quadrado q(MAX_GRID, TAMANHO);
    //Quadrado q(p, MAX_GRID, TAMANHO);

    cout << "A (" << q.getA().getX() << "," << MAX_GRID - q.getA().getY() << ") | ";
    cout << "B (" << q.getB().getX() << "," << MAX_GRID - q.getB().getY() << ") | ";
    cout << "C (" << q.getC().getX() << "," << MAX_GRID - q.getC().getY() << ") | ";
    cout << "D (" << q.getD().getX() << "," << MAX_GRID - q.getD().getY() << ")\n\n";

    for(int y=0; y<=MAX_GRID; y++){
        for(int x=0; x<=MAX_GRID; x++){
            if(x == 0 && y == MAX_GRID){
                cout << "0 ";
            }else if(x == 0){
                cout << "^ ";
            }else if(y == MAX_GRID){
                cout << "> ";
            }else if(x >= q.getA().getX() && x <= q.getB().getX() && y >= q.getA().getY() && y <= q.getC().getY()){
                    if(x == q.getB().getX()){
                        cout << "# ";
                    }else{
                        cout << "##";
                    }
            }else{
                if(x == MAX_GRID){
                    cout << "*";
                }else{
                    cout << "* ";
                }
            }
        }
        cout << "\n";
    }

    q.soma(aux_1);
    //q.multiplicacao(aux_1);

    cout << "\n\n\n";
    cout << "A (" << q.getA().getX() << "," << MAX_GRID - q.getA().getY() << ") | ";
    cout << "B (" << q.getB().getX() << "," << MAX_GRID - q.getB().getY() << ") | ";
    cout << "C (" << q.getC().getX() << "," << MAX_GRID - q.getC().getY() << ") | ";
    cout << "D (" << q.getD().getX() << "," << MAX_GRID - q.getD().getY() << ")\n\n";

    for(int y=0; y<=MAX_GRID; y++){
        for(int x=0; x<=MAX_GRID; x++){
            if(x == 0 && y == MAX_GRID){
                cout << "0 ";
            }else if(x == 0){
                cout << "^ ";
            }else if(y == MAX_GRID){
                cout << "> ";
            }else if(x >= q.getA().getX() && x <= q.getB().getX() && y >= q.getA().getY() && y <= q.getC().getY()){
                    if(x == q.getB().getX()){
                        cout << "# ";
                    }else{
                        cout << "##";
                    }
            }else{
                if(x == MAX_GRID){
                    cout << "*";
                }else{
                    cout << "* ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
