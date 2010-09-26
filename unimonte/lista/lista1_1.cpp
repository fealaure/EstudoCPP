//      lista1_1.cpp
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
 * Fazer um programa que pede que o usuário digite 15 números e depois mostra o
 * valor da soma de todos ele na tela.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i, numero;
    long soma;

    soma = 0L;

    for (i = 1; i <= 15; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("\n\nA soma dos números vale: %ld.", soma);

    return 0;
}
