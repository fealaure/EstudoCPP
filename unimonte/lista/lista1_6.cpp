//      lista1_6.cpp
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
 * Transformar o programa da quinta questão em uma função que recebe como
 * argumento um número e mostra na tela a tabuada deste número.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

void tabuada(int num) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
{
    int num;

    num = 0;

    do {
        printf("Digite um número entre 2 e 9: ");
        scanf("%d", &num);
    } while (! (num >= 2 && num <= 9));

    tabuada(num);

    return 0;
}
