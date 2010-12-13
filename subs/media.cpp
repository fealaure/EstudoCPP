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
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a 1º nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2º nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3º nota: ");
    scanf("%f", &nota3);

    printf("Digite a 4º nota: ");
    scanf("%f", &nota4);

    media = (
    nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média é %.1f\n", media);

    if (media < 6) {
        printf("Reprovado");
    }
    else {
        printf("Aprovado");
    }

    return 0;
}
