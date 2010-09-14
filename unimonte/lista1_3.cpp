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

using namespace std;

int main()
{
    int num1, num2, soma, i;

    soma = 0;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    cout << "\n\nA soma dos números entre " << num1 << " e " << num2 <<
    " vale: " << soma;

    return 0;
}
