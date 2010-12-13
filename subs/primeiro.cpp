//      primeiro.cpp
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
    float altura = 0;

    printf("==== Bom dia ====\n\n");
    printf("Digite a sua altura: ");

    scanf("%f", &altura);

    // Verificando a altura
    if (altura > 1.75) {
        printf("Você é alto!");
    }
    else if (altura < 1.65) {
        printf("Você é baixo!");
    }
    else {
        printf("Sua altura é mediana!");
    }

    // printf("%.2f", altura);
    // oi como vai?

    return 0;
}
