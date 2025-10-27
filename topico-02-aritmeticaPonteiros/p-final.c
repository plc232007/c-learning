/*Projeto Final: O Resgate no Labirinto
Vossa missão é guiar um jogador ('P') através de um labirinto
 bidimensional até a saída ('S'), 
utilizando apenas um ponteiro para navegar na memória. 
O labirinto e os movimentos serão pré-definidos.*/

#include <stdio.h>

#define LINHAS 5
#define COLUNAS 6

int main() {
    // '#' = Parede, ' ' = Caminho, 'P' = Jogador, 'S' = Saída
    char labirinto[LINHAS][COLUNAS] = {
        {'#', '#', '#', '#', '#', '#'},
        {'#', 'P', ' ', '#', ' ', '#'},
        {'#', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', '#', '#', 'S', '#'},
        {'#', '#', '#', '#', '#', '#'}
    };

    // A string de comandos do jogador
    // n = norte (cima), s = sul (baixo), l = leste (direita), o = oeste (esquerda)
    char comandos[] = "ssllo"; // 2 sul, 2 leste, 1 oeste
    
    // ... Vosso código começa aqui ...
}