🕹️ Jogo da Velha em C
Este projeto é uma implementação simples do Jogo da Velha (Tic-Tac-Toe) em linguagem C, jogado no terminal por dois jogadores.

🎯 Objetivo
O objetivo do jogo é alinhar três símbolos iguais (X ou O) em linha, coluna ou diagonal, antes do adversário. Caso todas as casas do tabuleiro sejam preenchidas e nenhum jogador vença, o jogo termina em empate.

🔧 Estrutura do Código
O programa é dividido em várias funções para facilitar a organização e a leitura do código:

inicializarTabuleiro()
Preenche o tabuleiro 3x3 com espaços em branco (' '), reiniciando o jogo.

imprimirTabuleiro()
Exibe o tabuleiro atual formatado no terminal, com as posições dos jogadores.

verificarVitoria(char simbolo)
Verifica se o jogador atual venceu, checando todas as linhas, colunas e diagonais.

verificarEmpate()
Verifica se todas as posições foram preenchidas sem nenhum vencedor (empate).

jogar(char simbolo, char nome[])
Solicita ao jogador que escolha uma linha e coluna para sua jogada.

Verifica se a posição é válida e está livre.

Atualiza o tabuleiro com o símbolo (X ou O) do jogador.

main()
Controla o fluxo principal do jogo:

Solicita os nomes dos jogadores.

Alterna os turnos entre os jogadores.

Exibe o tabuleiro a cada jogada.

Verifica vitória ou empate.

Pergunta se os jogadores desejam jogar novamente e se manterão os mesmos nomes.

🧠 Lógica do Jogo
O jogo é controlado por um loop que alterna os turnos entre os jogadores X e O.

Após cada jogada, o código verifica se houve uma vitória ou empate.

O jogador é solicitado a repetir a jogada caso informe uma posição inválida ou já ocupada.

Após o término da partida, os jogadores podem optar por jogar novamente com os mesmos nomes ou informar novos jogadores.

🛠️ Requisitos
Compilador C (ex: gcc).

Terminal para executar o programa.


