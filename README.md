# 🧩 Labirinto em C

Um pequeno jogo de **labirinto em C**, onde o jogador precisa mover o personagem até a saída, pegando a chave e abrindo a porta no caminho.  
O jogo é totalmente baseado em texto e roda direto no terminal! 🖥️

---

## 🎮 Como jogar

O objetivo é mover o personagem (`S`) até a saída (`F`).

Durante o jogo, você encontrará:

| Símbolo | Significado |
|:--------:|:-------------|
| `*` | Obstáculo — bloqueia o caminho |
| `K` | Chave — necessária para abrir a porta |
| `P` | Porta — só pode passar se tiver a chave |
| `S` | Seu personagem |
| `F` | Saída do labirinto |

---

## ⌨️ Controles

Use as teclas abaixo para se mover:

W → mover para cima
S → mover para baixo
A → mover para a esquerda
D → mover para a direita


---

## 🗺️ Regras do jogo

1. Pegue a chave (`K`) antes de tentar abrir a porta (`P`);
2. Evite os obstáculos (`*`);
3. Vá até a saída (`F`) para vencer;
4. Se tentar sair dos limites do mapa, o jogo avisará.

---

## 🧠 Como funciona

O jogo usa uma **matriz 5x5** para representar o cenário.  
A cada jogada, o programa:

- Atualiza a posição do personagem;
- Verifica colisões com obstáculos;
- Confere se a chave foi coletada;
- Permite abrir a porta quando a chave é obtida.

---

## 🧰 Como compilar e executar

No terminal, use os comandos:

```bash
gcc labirinto.c -o labirinto
./labirinto

S _ _ K *
* _ * * _
* _ _ P _
_ _ * _ *
* _ * _ F

Mova seu personagem 'S' (W = para cima, S = para baixo, A = esquerda, D = direita):
🏁 Objetivo final

Chegar até o F com sucesso:
Parabéns, você chegou no final do labirinto!

