//      bubble.cpp
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

/**
 * Este script demonstra o fuicionamento do algoritmo de ordenação
 * Bubble Sort
 */

#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    int nums[10]; // Array a ser ordenado
    int i, j, tmp;
    int tamanho;
    
    srand(time(NULL));
    
    tamanho = 10; // Tamanho do array
    
    for (i = 0; i < tamanho; i++) {
        nums[i] = rand() % 50 + 1; // Colocando valores aleatórios no array
    }
    
    printf("\n\nO array original:\n");
    
    for (i = 0; i < tamanho; i++) {
        printf("%d  ", nums[i]);
    }
    
    // Ok, hora de ordenar o array:
    for (i = 1; i < tamanho; i++) {
        for (j = tamanho - 1; j >= i; j--) {
            if (nums[j-1] > nums[j]) {
                // Mudando os valores!
                tmp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    
    printf("\n\nO array ordenado:\n");
    
    for (i = 0; i < tamanho; i++) {
        printf("%d  ", nums[i]);
    }
    
    return 0;
}
