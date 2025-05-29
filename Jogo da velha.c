#include <stdio.h>
#include <string.h>
char tabuleiro[3][3];
char jogadorX[50], jogadorO[50];
// Inicializar o tabuleiro com espaços em branco
void inicializarTabuleiro()
{
   for (int i = 0; i < 3; i++)
       for (int j = 0; j < 3; j++)
           tabuleiro[i][j] = ' ';
}
// Imprimir o tabuleiro no console
void imprimirTabuleiro()
{
   for (int i = 0; i < 3; i++)
   {
       printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
       if (i < 2) printf("-----------\n");
   }
}
// Verificar se o jogador venceu
int verificarVitoria(char simbolo)
{
// Verifica linhas e colunas
   for (int i = 0; i < 3; i++)
   {
       if (tabuleiro[i][0] == simbolo && tabuleiro[i][1] == simbolo && tabuleiro[i][2] == simbolo) return 1;
       if (tabuleiro[0][i] == simbolo && tabuleiro[1][i] == simbolo && tabuleiro[2][i] == simbolo) return 1;
   }
// Verifica diagonais
   if (tabuleiro[0][0] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][2] == simbolo) return 1;
   if (tabuleiro[0][2] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][0] == simbolo) return 1;
   return 0;
}
// Verificar se houve empate
int verificarEmpate()
{
   for (int i = 0; i < 3; i++)
       for (int j = 0; j < 3; j++)
           if (tabuleiro[i][j] == ' ') return 0;
   return 1; // Todas as células estão preenchidas e não houve vencedor
}
// Realizar a jogada do jogador atual
void jogar(char simbolo, char nome[])
{
   int linha, coluna;
   while (1)
   {
// Pede a linha e coluna da jogada
       printf("%s (%c), informe linha (0-2): ", nome, simbolo);
       scanf("%d", &linha);
       printf("%s (%c), informe coluna (0-2): ", nome, simbolo);
       scanf("%d", &coluna);
// Verifica se é válida
       if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
       {
           printf("Posicao invalida! (Linha: %d; Coluna: %d)\n", linha, coluna);
           continue; // Repete a jogada
       }
// Verifica se a posição já está ocupada
       if (tabuleiro[linha][coluna] != ' ')
       {
           printf("Posicao ja esta ocupada! (Linha: %d; Coluna: %d)\n", linha, coluna);
           continue; // Repete a jogada
       }
       tabuleiro[linha][coluna] = simbolo;
       break; // Sai do loop
   }
}
int main()
{
   char jogarNovamente, mesmosJogadores;
   mesmosJogadores = 'n';
   do
   {
// Se for uma nova partida com novos jogadores
       if (mesmosJogadores != 'S' && mesmosJogadores != 's')
       {
           printf("Informe o nome dos jogadores:\nJogador X: ");
           scanf("%s", jogadorX);
           printf("Jogador O: ");
           scanf("%s", jogadorO);
       }
       inicializarTabuleiro();
       int turno = 0; // Contador de turnos
       while (1)
       {
           imprimirTabuleiro(); // Mostra o tabuleiro
// Alterna entre os jogadores
           if (turno % 2 == 0)
               jogar('X', jogadorX);
           else
               jogar('O', jogadorO);
// Verifica se alguém venceu
           if (verificarVitoria('X'))
           {
               imprimirTabuleiro();
               printf("Parabens, %s, voce venceu!\n", jogadorX);
               break;
           }
           else if (verificarVitoria('O'))
           {
               imprimirTabuleiro();
               printf("Parabens, %s, voce venceu!\n", jogadorO);
               break;
           }
           else if (verificarEmpate())
           {
               imprimirTabuleiro();
               printf("%s e %s empataram!\n", jogadorX, jogadorO);
               break;
           }
           turno++; // Passa para o próximo turno
       }
       printf("Deseja jogar novamente (S/N)? ");
       scanf(" %c", &jogarNovamente);
       if (jogarNovamente == 'S' || jogarNovamente == 's')
       {
           printf("Deseja manter os mesmos jogadores (S/N)? ");
           scanf(" %c", &mesmosJogadores);
       }
   }
   while (jogarNovamente == 'S' || jogarNovamente == 's');
   printf("Fim do programa!\n");
   return 0;
}