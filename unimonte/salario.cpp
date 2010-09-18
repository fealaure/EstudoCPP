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

/**
 * PROBLEMA
 *
 * Faça um Programa que pergunte quanto você ganha por hora e o número de horas
 * trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
 * sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS
 * e 5% para o sindicato, faça um programa que nos dê:
 *
 * - salário bruto.
 * - quanto pagou ao INSS.
 * - quanto pagou ao sindicato.
 * - o salário líquido.
 *
 * calcule os descontos e o salário líquido, conforme a tabela abaixo:
 *
 * + Salário Bruto : R$
 * - IR (11%) : R$
 * - INSS (8%) : R$
 * - Sindicato ( 5%) : R$
 * = Salário Liquido : R$
 *
 * Obs.: Salário Bruto - Descontos = Salário Líquido.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Definindo as variáveis que serão usadas
    float vl_hora, qt_horas, sl_bruto, ir, sind, inss, sl_liquido;

    // Pedindo os dados para o usuário
    printf("Digite o valor por hora: ");
    scanf("%f", &vl_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &qt_horas);

    // Calculando o salário bruto
    sl_bruto = vl_hora * qt_horas;

    // Agora os impostos... Bye bye dinheirinho :-(
    ir = (sl_bruto * 11) / 100;
    sind = (sl_bruto * 5) / 100;
    inss = (sl_bruto * 8) / 100;

    // Deduzindo os impostos...
    sl_liquido = sl_bruto - ir - sind - inss;

    // Imprimindo as informações
    printf("\n\nSalário bruto: R$ %.2f\n", sl_bruto);
    printf("IR (11%%): R$ %.2f\n", ir);
    printf("Sindicato (5%%): R$ %.2f\n", sind);
    printf("INSS (8%%): R$ %.2f\n", inss);
    printf("Salário Líquido: R$ %.2f\n", sl_liquido);

    return 0;
}
