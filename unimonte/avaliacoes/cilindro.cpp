//      cilindro.cpp
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

/**
 * Este programa calcula o volume de um cilindro
 */

int main()
{
    float raio, altura, volume;
    float pi = 3.14;

    printf("Digite a altura do cilindro em cm: ");
    scanf("%f", &altura);

    printf("Digite a medida do raio do cilindro cm: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("\nO volume do cilindro é de %.2fcm³\n", volume);

    return 0;
}
