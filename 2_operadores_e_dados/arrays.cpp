//      arrays.cpp
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
 * Treinando o trabalho com Arrays...
 */

#include <iostream>

using namespace std;

int main()
{
    int ar[10][10], i, j;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            ar[i][j] = i * j;
        }
    }
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << i << " x " << j << " = " << ar[i][j] << "\n";
        }
    }
    
    return 0;
}
