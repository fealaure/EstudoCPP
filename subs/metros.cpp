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
    float metros = 0;
    float centimetros = 0;
    int opcao;

    printf("O que você deseja fazer?\n\n");
    printf("1 - Converter metros em centímetros.\n");
    printf("2 - Converter centímetros em metros.\n\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros: ");
        scanf("%f", &metros);

        centimetros = metros * 100;

        printf("%.2f metros valem %.2f centimetros", metros, centimetros);
    }
    else if (opcao == 2) {
        printf("Digite o valor em centímetros: ");
        scanf("%f", &centimetros);

        metros = centimetros / 100;

        printf("%.2f centímetos valem %.2f metros", centimetros, metros);
    }
    else {
        printf("Opção inválida!");
    }

    return 0;
}
