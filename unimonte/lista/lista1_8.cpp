//      lista1_8.cpp
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
 * Fazer um programa que pede que o usuário digite 20 números reais. A lista
 * deve ser armazenada em um array. O programa deverá mostrar na tela a média
 * dos números digitados e quantos dos números estão acima da média.
 */

#include <iostream>
#include <stdio.h>

int main()
{
    int num[20], i, acima_media;
    float media;

    media = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
        media += num[i];
    }

    media /= 20;

    acima_media = 0;

    for (i = 0; i < 20; i++) {
        if (num[i] > media) {
            acima_media++;
        }
    }

    printf("\n\nA média dos números digitados foi %.2f", media);
    printf("\nHá %d número(s) acima da média", acima_media);

    return 0;
}
