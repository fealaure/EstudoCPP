//      automovel.cpp
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
 * *** Projeto Locadora ***
 *
 * Este é um programa de exemplo para as aulas de c++
 *
 * Este programa evoluirá no decorrer das aulas e os alunos implementarão as
 * novas funcionalidades em sala.
 *
 * -- Versão 1:
 *     - O programa cadastra Dvds
 */


#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

// Função Getch
void getch() {
    cout.flush();
    char s[1];
    cin.get(s, 1);
}

// Início da Classe Dvd

class Dvd {
    private:
        int quantidade;
        int ano;
        char* titulo;
        char* diretor;
    public:
        void cadastrar(int p_ano, char p_titulo[30], char p_diretor[20], int p_quantidade);
        bool locacao();
        void devolucao();
        void mostra_titulo();
        ~Dvd();
};

void Dvd::cadastrar(int p_ano, char p_titulo[30], char p_diretor[20], int p_quantidade) {
    ano = p_ano;
    quantidade = p_quantidade;
    titulo = new char[30];
    titulo = p_titulo;
    diretor = new char[20];
    diretor = p_diretor;
}

bool Dvd::locacao() {
    quantidade = quantidade - 1;
    return true;
}

void Dvd::devolucao() {
    quantidade = quantidade + 1;
}

void Dvd::mostra_titulo() {
    printf("%s", titulo);
}

Dvd::~Dvd() {
    // Método destrutor
    quantidade = 0;
}

// Fim da classe Dvd

// Variáveis globais
Dvd dvds[10]; // Os dvds da locadora
int cadastrados = 0; // Número de titulos cadastrados
int opcao = 1; // Opção do menu para o usuário escolher

// Função para cadastrar Dvds
void cadastrar_dvd() {
    if (cadastrados < 10) {
        char *titulo;
        titulo = new char[30];
        char *diretor;
        diretor = new char[20];
        int ano;
        int quantidade;

        system("clear");
        printf("\nCadastrando novo DVD\n\n");
        printf("Título: ");
        getchar();
        scanf("%[^\n]", titulo);

        printf("Ano: ");
        getchar();
        scanf("%d", &ano);

        printf("Diretor: ");
        getchar();
        scanf("%[^\n]", diretor);

        printf("Quantidade: ");
        getchar();
        scanf("%d", &quantidade);

        dvds[cadastrados].cadastrar(ano, titulo, diretor, quantidade);
        cadastrados = cadastrados + 1;
    }
    else {
        printf("\nNão é possível cadastrar mais que 10 dvds!\n\n");
    }
}

void listar_dvds() {
    int i;
    getchar();
    system("clear");
    printf("=== Lista de DVDs===\n\n");
    for (i = 0; i < cadastrados; i++) {
        printf("Título: ");
        dvds[i].mostra_titulo();
        printf("\n\n");
    }
    getchar();
}

// Função para exibir o menu
void menu() {
    system("clear");
    printf("==== Sistema Locadora 2000 ====\n");
    printf("Há %d DVDs cadastrados\n\n", cadastrados);
    printf("Escolha uma opção no menu abaixo\n\n");

    printf("1 - Cadastrar Dvd\n");
    printf("2 - Listar Dvds cadastrados\n");
    printf("0 - SAIR\n");

    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            cadastrar_dvd();
            break;
        case 2:
            listar_dvds();
            break;
        case 0:
            break;
        default:
            printf("\nOpção inválida!\n\n");
            break;
    }
}

int main()
{
    while (opcao != 0) {
        menu();
    }
    return 0;
}
