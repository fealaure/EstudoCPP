//      oop.cpp
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


#include <iostream>
#include <stdio.h>

class Pessoa {
    public:
        void definir_idade(int nova_idade);
        int pegar_idade();

    private:
        int idade;
};

void Pessoa::definir_idade(int nova_idade) {
    idade = nova_idade;
}

int Pessoa::pegar_idade() {
    return idade;
}

int main()
{
    Pessoa cliente;

    cliente.definir_idade(18);

    printf("Idade: %d\n\n", cliente.pegar_idade());

    return 0;
}
