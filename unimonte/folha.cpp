//      folha.cpp
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
 * Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
 * descontos são do Imposto de Renda, que depende do salário bruto (conforme
 * tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do
 * Salário Bruto, mas não é descontado (é a empresa que deposita). O Salário
 * Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá
 * pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas
 * no mês.
 *
 * Desconto do IR:
 * - Salário Bruto até 900 (inclusive) - isento
 * - Salário Bruto até 1500 (inclusive) - desconto de 5%
 * - Salário Bruto até 2500 (inclusive) - desconto de 10%
 * - Salário Bruto acima de 2500 - desconto de 20%
 *
 * Imprima na tela as informações, dispostas conforme o exemplo abaixo.
 * No exemplo o valor da hora é 5 e a quantidade de horas é 220.
 *
 * Salário Bruto: (5 * 220)  : R$ 1100,00
 * (-) IR (5%)               : R$   55,00
 * (-) INSS ( 10%)           : R$  110,00
 * FGTS (11%)                : R$  121,00
 * Total de descontos        : R$  165,00
 * Salário Liquido           : R$  935,00
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Definindo as variáveis
    float vl_hora, qt_horas, sl_bruto, ir, p_ir, sind, inss, fgts, sl_liquido;

    // Perguntando o valor e quantidade de horas para o usuários
    printf("Digite o valor por hora: ");
    scanf("%f", &vl_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &qt_horas);

    // Calculando o salário bruto
    sl_bruto = vl_hora * qt_horas;

    // Verificando o imposto de renda (IR)
    p_ir = 0; // Sem desconto de IR
    ir = 0;
    if (sl_bruto > 900) {
        p_ir = 5; // 5% de desconto de IR
    }
    if (sl_bruto > 1500) {
        p_ir = 10; // 10% de desconto de IR
    }
    if (sl_bruto > 2500) {
        p_ir = 20; // 20% de desconto de IR, ganha bem, mas paga mais imposto :-)
    }

    // Verificando se tem IR a pagar
    if (p_ir > 0) {
        ir = (sl_bruto * p_ir) / 100;
    }

    // Calculando os impostos
    sind = (sl_bruto * 3) / 100;
    inss = (sl_bruto * 10) / 100;
    fgts = (sl_bruto * 11) / 100;

    // Deduzindo os impostos do salário bruto
    sl_liquido = sl_bruto - ir - sind - inss;

    // Começando a impressão dos valores...
    printf("\n\nSalário bruto: R$ %.2f\n", sl_bruto);

    // Verificando se é necessário imprimir a linha sobre o IR
    if (p_ir > 0) {
        printf("(-) IR (%.0f%%): R$ %.2f\n", p_ir, ir);
    }

    printf("(-) Sindicato (3%%): R$ %.2f\n", sind);
    printf("(-) INSS (10%%): R$ %.2f\n", inss);
    printf("FGTS (11%%): R$ %.2f\n", fgts);
    printf("Salário Líquido: R$ %.2f\n", sl_liquido);

    return 0;
}
