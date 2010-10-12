//      switch.cpp
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
    int num;

    printf("Digite um número de um a três: ");

    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("\nVocê digitou um.\n\n");
            break;
        case 2:
            printf("\nVocê digitou dois.\n\n");
            break;
        case 3:
            printf("\nVocê digitou três.\n\n");
            break;
        default:
            printf("\nVocê deve digitar um número entre um e três!\n\n");
            break;
    }

    return 0;
}
