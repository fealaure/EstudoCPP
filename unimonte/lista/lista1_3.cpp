//      lista1_3.cpp
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

/**
 * Fazer um programa que pede que o usuário digite dois números inteiros.
 * O programa deverá mostrar na tela a soma de todos os números pares
 * existentes no intervalo.
 *
 * Exemplo: Se o usuário digitar 6 e 10 mostrar na tela a soma: 6+8+10 que
 * dá: 24
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num1, num2, soma, i;

    soma = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verificando se o primeiro número é maior que o segundo
    if (num1 > num2) {
        // O primeiro é maior. Invertendo os valores...
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("\n\nA soma dos números entre %d e %d vale: %d", num1, num2, soma);

    return 0;
}
