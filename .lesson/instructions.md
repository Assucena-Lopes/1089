# Trabalho 1 - Repetição e seleção
---
## Objetivo
> Revisar os conceitos fundamentais relacionados a linguagem de programação C, tais como: declaração de variáveis, entrada e saída, expressões, atribuição, comandos de seleção e repetição.
---
## Problema
> O número **1089** é conhecido como **número mágico**. Esse título deve-se a seguinte curiosidade matemática:
> 1. Escolha um número qualquer com três algarismos distintos.
> 2. Escreva esse número, só que com os algarismos ao contrário (invertidos).
> 3. Subtraia o maior do menor dos dois números (número escolhido e o invertido).
> 4. Inverta também os algarismos do resultado da subtração.
> 5. Some o resultado da subtração e sua inversão. Curiosamente, o resultado será **1089!**

Tomemos como exemplo o número 146 (com os três algarismos diferentes, 1, 4 e o 6). Esse número invertido é 641. A subtração do maior para o menor dos dois números é: 641 - 146 = 495

O resultado da subtração, 495, invertido é 594. A soma desse dois últimos números é:495 + 594 = 1089

---

## Descrição

* A sua tarefa é desenvolver um programa que calcule essa curiosidade matemática para todas as combinações de números com três algarismos distintos, conforme descrito.
* O programa não deve ler nenhuma entrada. Os números devem ser gerados no próprio programa.
* A saída esperada deve apresentar o resultado dos cálculos que comprovam essa curiosidade matemática para todas as combinações de números com 3 algarismos distintos, da seguinte forma:

```
caso   1: 321-123=198, 198+891=1089
caso   2: 421-124=297, 297+792=1089
caso   3: 521-125=396, 396+693=1089
caso   4: 621-126=495, 495+594=1089
caso   5: 721-127=594, 594+495=1089
caso   6: 821-128=693, 693+396=1089
caso   7: 921-129=792, 792+297=1089
caso   8: 231-132= 99,  99+990=1089
caso   9: 431-134=297, 297+792=1089
caso  10: 531-135=396, 396+693=1089
...
caso 503: 986-689=297, 297+792=1089
caso 504: 987-789=198, 198+891=1089
```

  
  