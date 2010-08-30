//      media_absoluta.cpp
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
 * Este programa faz a média do valor absoluto de 5 números informados pelo
 * usuário.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;
    double media;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    n1 = abs(n1);

    cout << "Digite o segundo número: ";
    cin >> n2;
    n2 = abs(n2);

    cout << "Digite o terceiro número: ";
    cin >> n3;
    n3 = abs(n3);

    cout << "Digite o quarto número: ";
    cin >> n4;
    n4 = abs(n4);

    cout << "Digite o quinto número: ";
    cin >> n5;
    n5 = abs(n5);

    media = (n1 + n2 + n3 + n4 + n5) / 5;

    cout << "A média dos números é: " << media;

    return 0;
}
