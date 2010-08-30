//      anos_jupiter.cpp
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
 * Este programa converte os anos em Jupiter para os na Terra.
 *
 * Jupiter leva 12 anos terrestres para dar uma volta completa em torno do Sol.
 */

#include <iostream>

using namespace std;

int main()
{
    double anos_jupiter, anos_terra;

    cout << "Digite o número de anos em Júpiter: ";
    cin >> anos_jupiter;

    anos_terra = anos_jupiter * 12;

    cout << "\n" << anos_jupiter << " anos em Júpiter equivalem a " <<
        anos_terra << " anos na Terra.";

    return 0;
}
