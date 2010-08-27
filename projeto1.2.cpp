//      projeto1.2.cpp
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
 * Exibindo uma tabela de conversão de pés para metros.
 * A tabela deixa uma linha em branco a cada 10 pés.
 *
 * A tabela inicia em 1 pé e termina em 100 pés.
 *
 * Um metro mede aproximadamente 3,28 pés.
 */

#include <iostream>

using namespace std;

int main()
{
    double pes;

    int contador;

    contador = 0;

    for (pes = 1; pes <= 100; pes++) {
        cout << pes << " pes equivalem a " << pes / 3.28 << " metros\n";

        contador++;

        if (contador == 10) {
            cout << "\n";
            contador = 0;
        }
    }

    return 0;
}
