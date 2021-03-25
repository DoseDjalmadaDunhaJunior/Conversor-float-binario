//
// Created by jose on 19/03/2021.
//

#ifndef CONVERSOR_FLOAT_BINARIO_CONVERTE_H
#define CONVERSOR_FLOAT_BINARIO_CONVERTE_H
#include <iostream>
#include <math.h>
using namespace std;

class Converte {
public:
    void start(float num){
        sprintf(vetor, "%.30f", num);

        printf("A float convertido = %s", vetor);
    }

    void start(const char* bin){
        int i;
        for (i = 0; bin[i] != 0 ; i++) {
            vetor[i] = bin[i];
        }
        vetor[i] = 0;
        binPfloat();
    }

private:

    void binPfloat(){
        posicaoP();
        cout<<inteiro()<<endl;
    }

    //aqui ele descobre a posição do ponto ou virgula se for o caso
    void posicaoP(){
        int i;
        for (i = 0; (vetor[i] != '.') && (vetor[i] != ','); i++) {

        }
        poponto = i;
    }

    int inteiro() {
        int tot = 0, c = 0;
        for (int i = (poponto); i > 0; i--) {
            if(vetor[c] == '1') {
                tot = tot + pow(2, i);
            }
            c++;
            printf("tot = %i  i = %i vetor[c] = %c\n",tot,i,vetor[c]);

        }
        //return tot;
    }

    char vetor[64];
    int poponto = 0;
};


#endif //CONVERSOR_FLOAT_BINARIO_CONVERTE_H
