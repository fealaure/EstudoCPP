//      gravidade_lua.cpp
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
 * Este programa exibe uma tabela de conversão de pesos na Terra e na Lua.
 * A gravidade da lua é aproximadamente 17% a gravidade da terra.
 *
 * A tabela vai de 1kg a 100kg na Terra.
 */

#include <iostream>

using namespace std;

int main()
{
    int kg_terra, contador;
    double kg_lua;

    contador = 0;

    for (kg_terra = 1; kg_terra <= 100; kg_terra++) {
        contador++;

        kg_lua = kg_terra * 0.17;

        cout << kg_terra << "kg na Terra valem " << kg_lua << "kg na Lua\n";

        if (contador == 25) {
            cout << '\n';
            contador = 0;
        }
    }
    return 0;
}
