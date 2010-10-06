//      avalicao1.1.cpp
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

int main()
{
    int numeros[5], i, produto, soma;
    float media;
    
    produto = 1;
    soma = 0;
    
    for (i = 0; i < 5; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numeros[i]);
        produto *= numeros[i];
        soma += numeros[i];
    }
    
    media = soma / 5;
    
    printf("\n\nVocê digitou os seguintes números:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n\nA soma dos números vale: %d", soma);
    printf("\n\nA média dos números vale: %.2f", media);
    printf("\n\nO produto dos números vale: %d\n\n", produto);
    
    return 0;
}
