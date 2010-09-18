//      salario.cpp
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

using namespace std;

int main()
{
    float vl_hora, qt_horas, sl_bruto, ir, sind, inss, sl_liquido;

    printf("Digite o valor por hora: ");
    scanf("%f", &vl_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &qt_horas);

    sl_bruto = vl_hora * qt_horas;

    ir = (sl_bruto * 11) / 100;
    sind = (sl_bruto * 5) / 100;
    inss = (sl_bruto * 8) / 100;

    sl_liquido = sl_bruto - ir - sind - inss;

    printf("\n\nSalário bruto: R$ %.2f\n", sl_bruto);
    printf("IR (11%%): R$ %.2f\n", ir);
    printf("Sindicato (5%%): R$ %.2f\n", sind);
    printf("INSS (8%%): R$ %.2f\n", inss);
    printf("Salário Líquido: R$ %.2f\n", sl_liquido);

    return 0;
}
