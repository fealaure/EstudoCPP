//      avalicao1.2.cpp
//      
//      Copyright 2010 Evaldo Junior Bento <junior@casoft.info>
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

bool impar(int numero) {
    if (! (numero % 2 == 0)) {
        return true;
    }
    return false;
}

int main()
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (impar(num)) {
        printf("Você digitou um número ímpar!\n\n");
    }
    else {
        printf("Você digitou um número par!\n\n");
    }
    
    return 0;
}
