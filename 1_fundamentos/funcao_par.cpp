//      funcao_par.cpp
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

using namespace std;

/**
 * Esta função verifica se um número é par
 */
bool verifica_par(int i) {
    if (i % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int numero;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    if (verifica_par(numero)) {
        cout << "Você digitou um número par!\n";
    }
    else {
        cout << "Você digitou um número ímpar!\n";
    }
    
    return 0;
}

