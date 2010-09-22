//      ponteiro_dinamico.cpp
//
//      Copyright 2010 Evaldo Junior <junior@casoft.info>
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

using namespace std;

int main()
{
    int i, total;
    int* vetor;

    printf("Quantos itens o vetor deve conter? ");
    scanf("%d", &total);

    vetor = new int[total];

    for (i = 0; i < total; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < total; i++) {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
