🧩 Labirinto em C

Um pequeno jogo de labirinto feito em C, onde o jogador precisa mover o personagem até a saída, pegando a chave e abrindo a porta no caminho.
O jogo é totalmente baseado em texto e roda direto no terminal!

🎮 Como jogar

O objetivo é mover o personagem (S) até a saída (F).

Durante o jogo, você encontrará:

* → Obstáculo (não pode atravessar)

K → Chave (necessária para abrir a porta)

P → Porta (só pode passar se tiver a chave)

S → Seu personagem

F → Saída do labirinto

⌨️ Controles

Use as teclas:

W → mover para cima
S → mover para baixo
A → mover para a esquerda
D → mover para a direita

🗺️ Regras do jogo

Pegue a chave (K) antes de tentar abrir a porta (P).

Evite os obstáculos (*), eles bloqueiam o caminho.

Vá até a saída (F) para vencer.

Se tentar atravessar paredes ou limites do mapa, o jogo avisará.

🧠 Funcionamento

O jogo usa uma matriz 5x5 para representar o cenário.
A cada movimento, o código:

Atualiza a posição do personagem

Verifica colisões com obstáculos

Confere se a chave foi coletada

Permite abrir a porta quando a chave for obtida

🧰 Como compilar e executar

No terminal, use:

gcc labirinto.c -o labirinto
./labirinto

📸 Exemplo de execução
S _ _ K *
* _ * * _
* _ _ P _
_ _ * _ *
* _ * _ F

Mova seu personagem 'S' (W = para cima, S = para baixo, A = esquerda, D = direita):

🏁 Objetivo final

Chegar até o F com sucesso:

Parabéns, você chegou no final do labirinto!
