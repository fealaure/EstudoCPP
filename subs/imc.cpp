//      senha.cpp
//
//      Copyright 2010 Evaldo Junior (InFog) <junior@casoft.info>
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

#include <iostream>
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\n\nSeu IMC é: %.2f\n\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do seu peso ideal.");
    }
    else if ((imc >= 18.5) and (imc < 25)) {
        printf("Você está no seu peso ideal.");
    }
    else if (imc >= 25 and imc < 30) {
        printf("Você está acima do seu peso ideal.");
    }
    else if (imc >= 30 and imc < 35) {
        printf("Você está com obesidade grau 1.");
    }
    else if (imc >= 35 and imc < 40) {
        printf("Você está com obesidade grau 2.");
    }
    else {
        printf("Você está com obesidade grau 3.");
    }

    return 0;
}
