```markdown
# 🕹️ Jogo da Velha em C

Este projeto é uma implementação simples do **Jogo da Velha (Tic-Tac-Toe)** em linguagem C, jogado por dois jogadores no terminal.

---

## 🎯 Objetivo

O objetivo do jogo é alinhar três símbolos iguais (`X` ou `O`) em uma linha, coluna ou diagonal, antes do adversário.  
Se todas as casas do tabuleiro forem preenchidas sem que haja um vencedor, o jogo termina em **empate**.

---

## 🔧 Estrutura do Código

O código é modularizado em funções para melhorar a legibilidade e a manutenção:

### `inicializarTabuleiro()`
Inicializa o tabuleiro 3x3 preenchendo todas as posições com espaço em branco (`' '`), reiniciando o jogo.

### `imprimirTabuleiro()`
Exibe o estado atual do tabuleiro no terminal, com separações visuais entre as células.

### `verificarVitoria(char simbolo)`
Verifica se o jogador com o símbolo informado venceu, checando:
- As três linhas
- As três colunas
- As duas diagonais

### `verificarEmpate()`
Retorna verdadeiro se todas as posições do tabuleiro estiverem preenchidas e **ninguém tiver vencido**.

### `jogar(char simbolo, char nome[])`
Gerencia a jogada do jogador atual:
- Solicita linha e coluna para jogar
- Verifica se a posição é válida e está livre
- Atualiza o tabuleiro com o símbolo (`X` ou `O`)

### `main()`
Função principal que executa o fluxo do jogo:
- Solicita os nomes dos jogadores
- Alterna entre os turnos dos jogadores
- Verifica a cada jogada se houve vitória ou empate
- Permite jogar novamente e escolher manter ou trocar os jogadores

---

## 🧠 Lógica do Jogo

- O jogo é controlado por turnos alternados entre os jogadores `X` e `O`.
- O tabuleiro é exibido a cada jogada.
- Jogadas inválidas (fora dos limites ou em posição ocupada) são rejeitadas.
- O jogo termina quando houver um vencedor ou empate.
- Ao final da partida, o usuário pode optar por jogar novamente, com ou sem trocar os jogadores.

---




