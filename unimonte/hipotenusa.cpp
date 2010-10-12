//      hipotenusa.cpp
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
#include <cmath>

int main()
{
    float cateto1, cateto2, hipotenusa;

    printf("Digite o valor do 1º cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do 2º cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("\n\nA hipotenusa vale: %.2f", hipotenusa);

    return 0;
}
