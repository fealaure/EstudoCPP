//      jogoadivinha.cpp
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
#include <cstdlib>

int main(int argc, char** argv)
{
    int secreto, tentativa, tentativas;

    secreto = rand() % 30 + 1;
    tentativas = 0;

    printf("\n\nEstou pensando em um número de 1 a 30, tente adivinha-lo!\n");

    do {
        printf("\n%dº tentativa: ", tentativas + 1);
        scanf("%d", &tentativa);

        if (tentativa > secreto) {
            printf("\nSeu número é maior que o meu.");
        }
        else if (tentativa < secreto) {
            printf("\nSeu número é menor que o meu.");
        }

        tentativas++;
    } while (tentativa != secreto);

    printf("\n\nParabéns! Você acertou o número em %d tentativas", tentativas);

    return 0;
}
