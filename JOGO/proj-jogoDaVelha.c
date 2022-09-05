#include <stdio.h>
#include <stdlib.h> 

void menu(){
    printf("Menu de Jogo\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("4 - Sair\n");
}

int escolhaDoJogador(){
  int op;
  printf("Informe a sua escolha? ");
  scanf("%d", &op);
  return op;
}

int escolhaDaMaquina(){ 
    return (1 + ( rand() % 3));
}

int comparaJogadas(op_jog, op_maq){
    if ((op_jog == 1) && (op_maq == 2)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Papel embrulha a pedra.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 0;
    }else if ((op_jog == 2) && (op_maq == 1)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Papel embrulha a pedra.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 1;
    } else if ((op_jog == 3) && (op_maq == 1)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Pedra quebra a tesoura.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 0;
    } else if ((op_jog == 1) && (op_maq == 3)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Pedra quebra a tesoura.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 1;
    } else if ((op_jog == 2) && (op_maq == 3)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Tesoura corta papel.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 0;
    }else if ((op_jog == 3) && (op_maq == 2)){
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("Tesoura corta papel.\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        return 1;
    }
}


int main() {
    int escolha, op_jog, op_maq, result;
    while (1){
        menu();
        op_jog = menu_imprime(escolha);
        op_maq = escolhaDaMaquina();


        if (op_jog == 4){
            break;
        }else if ((op_jog == 1) && (op_maq == 1)){
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
            printf("Empate. Os dois escolheram pedra.\n");
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
        }else if ((op_jog == 2) && (op_maq == 2)){
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
            printf("Empate. Os dois escolheram papel.\n");
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
        }else if ((op_jog == 3) && (op_maq == 3)){
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
            printf("Empate. Os dois escolheram tesoura.\n");
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
        }else{
            result = comparaJogadas(op_jog, op_maq);
            if (result == 1){
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
                printf("Vitoria do Jogador\n");
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
            }else if (result == 0){
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
                printf("Vitoria da Maquina\n");
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=\n");
            }
        }
    }
}