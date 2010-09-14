//      lista1_4.cpp
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
 * O programa deverá mostrar na tela a soma de todos os números existentes
 * no intervalo.
 *
 * Faça uma função que receba os números
 *
 * Exemplo: Se o usuário digitar 6 e 10 mostrar na tela a soma: 6+8+10 que
 * dá: 40
 */

#include <iostream>

using namespace std;

int soma_intervalo(int num1, int num2) {
    int soma, i;

    soma = 0;

    for (i = num1; i <= num2; i++) {
        soma += i;
    }

    return soma;
}

int main()
{
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "\n\nA soma dos números entre " << num1 << " e " << num2 <<
    " vale: " << soma_intervalo(num1, num2);

    return 0;
}
