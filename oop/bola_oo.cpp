//      bola_oo.cpp
//
//      Copyright 2010 Evaldo Junior Bento <junior@casoft.info>
//
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

/**
 * Classe Bola: Crie uma classe que modele uma bola:
 *
 * 1. Atributos: cor, circunferência, material
 * 2. Métodos:
 *      - definir_cor
 *      - pegar_cor
 *      - definir_material
 *      - pegar_material
 *      - definir_circunferencia
 *      - pegar_circunferencia
 *      - Mostrar dados EX: É uma bola azul de plástico e de
 *                          circunferência de 40cm.
 */

#include <iostream>
#include <stdio.h>

class Bola {
    private:
        float circunferencia;
        char* cor;
        char* material;
    public:
        void definir_circunferencia(float nova_circunferencia);
        void definir_cor(char nova_cor[10]);
        void definir_material(char novo_material[20]);

        void mostrar_dados();

        float pegar_circunferencia();
        char* pegar_cor();
        char* pegar_material();
};

void Bola::definir_circunferencia(float nova_circunferencia) {
    circunferencia = nova_circunferencia;
}

void Bola::definir_cor(char nova_cor[10]) {
    cor = new char[10];
    cor = nova_cor;
}

void Bola::definir_material(char novo_material[20]) {
    material = new char[20];
    material = novo_material;
}

float Bola::pegar_circunferencia() {
    return circunferencia;
}

char* Bola::pegar_cor() {
    return cor;
}

char* Bola::pegar_material() {
    return material;
}

void Bola::mostrar_dados() {
    printf("É uma bola %s de %s e de circunferência de %.2fcm\n\n", cor, material, circunferencia);
}

int main()
{
    Bola bola1, bola2, bola3;

    bola1.definir_circunferencia(10.5);
    bola1.definir_cor((char*)"azul");
    bola1.definir_material((char*)"Vidro");

    bola1.mostrar_dados();

    printf("A bola 1 é %s e tem circunferência de %.2fcm\n\n", bola1.pegar_cor(), bola1.pegar_circunferencia());

    bola2.definir_circunferencia(15);
    bola2.definir_material((char*)"Plástico");

    printf("A bola 2 é de %s e tem circunferência de %.2fcm\n\n", bola2.pegar_material(), bola2.pegar_circunferencia());

    bola3.definir_circunferencia(40.2);

    printf("A bola 3 tem circunferência de %.2fcm\n\n", bola3.pegar_circunferencia());

    return 0;
}
