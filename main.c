/*------------------------------------------------------
 * Primeiro trabalho AEDs I - Programação
 * Assunto: Comandos de controle de repetição e seleção
 * Prof. Luiz Eduardo da Silva
 * Aluno: <Assucena Lopes>
 *-----------------------------------------------------*/
#include <stdio.h>

int main() {

  int number = 123, caso = 0;
  while (number < 988) {
    int c, d, u, c1, d1, u1,caso;
    int invertedNum, sub, soma, invertedSub, maior, menor;
    c = number / 100;
    d = number / 10 - c * 10;
    u = number - c * 100 - d * 10;

    if (c != d && d != u && c != u && d != 0 && c != 0 && u != 0) {
      invertedNum = u * 100 + d * 10 + c;
      
      if (invertedNum > number) {
        maior = invertedNum;
        menor = number;
      } else {
        maior = number;
        menor = invertedNum;
        }
      sub = maior - menor;
      c1 = sub / 100;
      d1 = sub / 10 - c1 * 10;
      u1 = sub - c1 * 100 - d1 * 10;
      invertedSub = u1 * 100 + d1 * 10 + c1;

      soma = sub + invertedSub;
      caso++;
      printf("caso %3.d: %3.d-%3.d=%3.d, %3.d+%3.d=%3.d\n",caso, maior, menor, sub, sub, 
invertedSub,soma);

    }
    number++;
  }
}