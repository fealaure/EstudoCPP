//      ponteiro_troca.cpp
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

void troca(int *num1, int *num2);

int main()
{
    int num1, num2;

    num1 = 1;
    num2 = 2;

    printf("\nAntes de trocar os valores\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    troca(&num1, &num2);

    printf("\n\nApós trocar os valores\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

void troca(int *valor1, int *valor2)
{
    int temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}
