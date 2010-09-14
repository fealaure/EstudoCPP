//      lista1_5.cpp
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
 * Fazer um programa que pede que o usuário digite um número entre 2 e 9 e
 * depois mostra na tela a tabuada no número digitado.
 */

#include <iostream>

using namespace std;

int main()
{
    int num, i;

    num = 0;

    do {
        cout << "Digite um número entre 2 e 9: ";
        cin >> num;
    } while (! (num >= 2 && num <= 9));

    for (i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}
