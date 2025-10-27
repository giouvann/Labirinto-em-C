#include <stdio.h>

int main(void) {

  // Cenario
  const int tam = 5;
  char cenario[tam][tam];

  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      cenario[i][j] = '_';
    }
  }

  // Obstáculos
  cenario[0][4] = '*';
  cenario[1][0] = '*';
  cenario[1][2] = '*';
  cenario[1][3] = '*';
  cenario[2][0] = '*';
  cenario[3][2] = '*';
  cenario[3][4] = '*';
  cenario[4][0] = '*';
  cenario[4][2] = '*';

  // Saída
  int exit_l = 4, exit_c = 4;
  cenario[exit_l][exit_c] = 'F';
  // Personagem
  int pers_l = 0, pers_c = 0;
  cenario[pers_l][pers_c] = 'S';
  // chave
  int key = 0;
  cenario[0][3] = 'K';
  // porta
  cenario[2][3] = 'P';

  // loop do jogo
  // Enquanto S != F:
  while (pers_l != exit_l || pers_c != exit_c) {
    // impressão do cenário
    for (int i = 0; i < tam; i++) {
      for (int j = 0; j < tam; j++) {
        printf("%c ", cenario[i][j]);
      }
      printf("\n");
    }

    // Movimentação do personagem
    char movimento;
    printf("\nMova seu personagem 'S' ( W = para cima, S = para baixo, A = "
           "esquerda, D = direita): ");
    scanf(" %c", &movimento);
    getchar();

    int nova_l = pers_l;
    int nova_c = pers_c;

    if (movimento == 'w' || movimento == 'W') {
      nova_l--;
    } else if (movimento == 's' || movimento == 'S') {
      nova_l++;
    } else if (movimento == 'a' || movimento == 'A') {
      nova_c--;
    } else if (movimento == 'd' || movimento == 'D') {
      nova_c++;
    } else {
      printf("\nTecla inválida. Tente novamente!\n\n");
      continue;
    }

    // Checa se a movimentação está no limite do mapa
    if (nova_l >= 0 && nova_l < tam && nova_c >= 0 && nova_c < tam) {

      char novo_local = cenario[nova_l][nova_c];

      if (novo_local == '_' || novo_local == 'F') {
        cenario[pers_l][pers_c] = '_';
        cenario[nova_l][nova_c] = 'S';

        pers_l = nova_l;
        pers_c = nova_c;

        // Personagem encontra a chave
      } else if (novo_local == 'K') {
        cenario[pers_l][pers_c] = '_';
        cenario[nova_l][nova_c] = 'S';

        key++;

        pers_l = nova_l;
        pers_c = nova_c;

        printf("\nVocê pegou a chave!\n\n");

        // Checa se o personagem consegue abrir a porta
      } else if (novo_local == 'P') {
        if (key > 0) {
          cenario[pers_l][pers_c] = '_';
          cenario[nova_l][nova_c] = 'S';

          pers_l = nova_l;
          pers_c = nova_c;

          printf("\nPorta aberta!\n\n");

        } else {
          printf("\nPorta trancada!\n\n");
        }
      } else {
        printf("\nLado bloqueado!\n\n");
      }

    } else {
      printf("\nVocê está fora dos limites do mapa. Tente novamente!\n\n");
    }
  }
  printf("\nParabéns, você chegou no final do labirinto!");

  return 0;
}