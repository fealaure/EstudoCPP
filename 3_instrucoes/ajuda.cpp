//      ajuda.cpp
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

int main()
{
    char opcao;

    printf("\n\nEscolha um ítem para obter ajuda:\n");
    printf("\t1. Instrução 'if';\n");
    printf("\t2. Instrução 'for';\n");
    printf("Sua opção: ");

    scanf("%c", &opcao);

    switch (opcao) {
        case '1':
            printf("\n\nA instrução 'if' funciona assim:\n");
            printf("\tif (condicao) {bloco executado}\n");
            printf("\telse {bloco executado}\n");
            break;
        case '2':
            printf("\n\nA instrução 'for' funciona assim:\n");
            printf("\tfor (condicao inicial; condicao final; incremento) {bloco executado}\n");
            break;
        default:
            printf("\n\nTópico de ajuda não encontrado");
            break;
    }

    return 0;
}
