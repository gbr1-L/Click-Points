#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void JogoDePergunta() {
    char opcao;
    char opcao2;
    char opcao3;
    char opcao4;
    char opcao5;
    char SimOuNao;
    int acerto;
    int erro;

// primeira pergunta ----------------------------
    printf("\nBem vindo ao Jogo de Perguntas e Respotas\n");
    printf("Qual a capital da Franca?\n");
    printf("A)Londres\n ");
    printf("B)Paris\n ");
    printf("C)Roma\n ");
    printf("D)Berlim\n ");

    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    if (opcao == 'b') {
        printf("Resposta Correta");
         acerto++;
    } else {
        printf("Opcao Errada, Resposta Correta era letra C");
         erro++;
    }

    // segunda pergunta -----------------------------------------------

    printf("\n");
    printf("\nQual  o continente mais populoso?\n");
    printf("A)Asia\n");
    printf("B)Europa\n ");
    printf("C)America\n ");
    printf("D)Africa\n ");

    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao2);

    if (opcao2 == 'a') {
        printf("Resposta Correta");
        acerto++;
    } else {
        printf("Opcao Errada, Resposta Correta era letra A");
        erro++;
    }

    // terceira pergunta -----------------------------------------------

    printf("\n");
    printf("\nQual  o maior oceano do planeta?\n");
    printf("A) Oceano Atlantico\n");
    printf("B) Oceano Indico\n ");
    printf("C) Oceano Pacifico\n ");
    printf("D)Oceano artico \n ");

    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao3);

    if (opcao3 == 'c') {
        printf("Resposta Correta");
        acerto++;
    } else {
        printf("Opcao Errada, Resposta Correta era letra C");
        erro++;
        printf("\n");
    }

    // quarta pergunta -----------------------------------------------
    printf("\n");
    printf("\nQual o ponto mais alto da Terra\n");
    printf("A) Kilimanjaro\n");
    printf("B) Aconcagua\n ");
    printf("C) Monte Fuji\n ");
    printf("D)Everest \n ");

    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao4);

    if (opcao4 == 'd') {
        printf("Resposta Correta");
        acerto++;
    } else {
        printf("Opcao Errada, Resposta Correta era letra D");
        erro++;
    }

    // quinta pergunta -----------------------------------------------
    printf("\n");
    printf("\nQual  a cidade mais populosa do mundo?\n");
    printf("A)  Nova York\n");
    printf("B) Cidade do Mexico\n ");
    printf("C) Sao Paulo\n ");
    printf("D) Toquio \n ");

    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao5);

    if (opcao5 == 'd') {
        acerto++;
        printf("Resposta Correta");
        printf("O valor do número é: %d\n", acerto);
        printf("O valor do número é: %d\n", erro);

    } else {
        erro++;
        printf("Opcao Errada, Resposta Correta era letra D");
        printf("Numero de acerto : %d\n", acerto);
        printf("Numero de erros: %d\n", erro);

    }
}
//----------------------------------------------------------------------------------------------------------------w

#include <string.h>
#include <time.h>
void CobraNaCaixa() {
    char NomeDoPersonagem[30];
    char NomeDoPersonagem2[30];
    int vazio = 0;
    int cobra = 1;
    int botao = 2;

    printf("Bem-vindo ao Jogo Cobra Na Caixa.\n");
    printf("Dois exploradores se encontram diante da entrada de uma antiga tumba egípcia, cheia de mistérios e perigos.\n"
           "No centro da sala, há cinco caixas, e uma delas contém o botão para a saída, enquanto outra esconde uma cobra mortal.\n"
           "A cada rodada, o local do botão e da cobra muda, tornando o desafio ainda mais imprevisível.\n");

    // Jogador 1 escolhe seu nome
    printf("Jogador 1, escolha seu nome de explorador:\n");
    printf("a) Alexandre\nb) Beatriz\nc) Carlos\nd) Diana\ne) Eduardo\nf) Fernanda\ng) Gustavo\n");

    char escolha;
    scanf(" %c", &escolha);  // Lê a escolha do jogador 1
    switch (escolha) {
        case 'a':
            strcpy(NomeDoPersonagem, "Alexandre");
            break;
        case 'b':
            strcpy(NomeDoPersonagem, "Beatriz");
            break;
        case 'c':
            strcpy(NomeDoPersonagem, "Carlos");
            break;
        case 'd':
            strcpy(NomeDoPersonagem, "Diana");
            break;
        case 'e':
            strcpy(NomeDoPersonagem, "Eduardo");
            break;
        case 'f':
            strcpy(NomeDoPersonagem, "Fernanda");
            break;
        case 'g':
            strcpy(NomeDoPersonagem, "Gustavo");
            break;
        default:
            printf("Escolha inválida. Tente novamente.\n");
            return;
    }


    printf("Jogador 1: %s\n", NomeDoPersonagem);


    printf("Jogador 2, escolha seu nome de explorador:\n");
    printf("a) Lara\nb) Marco\nc) Isabel\nd) Felipe\ne) Carolina\nf) João\ng) Juliana\n");

    scanf(" %c", &escolha);  // Lê a escolha do jogador 2
    switch (escolha) {
        case 'a':
            strcpy(NomeDoPersonagem2, "Lara");
            break;
        case 'b':
            strcpy(NomeDoPersonagem2, "Marco");
            break;
        case 'c':
            strcpy(NomeDoPersonagem2, "Isabel");
            break;
        case 'd':
            strcpy(NomeDoPersonagem2, "Felipe");
            break;
        case 'e':
            strcpy(NomeDoPersonagem2, "Carolina");
            break;
        case 'f':
            strcpy(NomeDoPersonagem2, "João");
            break;
        case 'g':
            strcpy(NomeDoPersonagem2, "Juliana");
            break;
        default:
            printf("Escolha inválida. Tente novamente.\n");
            return;
    }
    printf("Jogador 2: %s\n", NomeDoPersonagem2);


    int caixaBotao = (rand() % 5) +1;
    int caixaCobra = (rand() % 5) +1;

    while (caixaCobra == caixaBotao) {
        caixaCobra = (rand() % 5) + 1;
    }

    int turno =1;
    int caixaEscolhida;

    while (1) {
        if (turno == 1) {
            printf("%s, é sua vez! Escolha uma caixa (1 a 5): ", NomeDoPersonagem);
        } else {
            printf("%s, é sua vez! Escolha uma caixa (1 a 5): ", NomeDoPersonagem2);
        }
        scanf("%d", &caixaEscolhida);

        if (caixaEscolhida == caixaCobra) {
            if (turno == 1) {
                printf("%s escolheu a caixa %d e encontrou a cobra! Você perdeu!\n", NomeDoPersonagem, caixaEscolhida);
            } else {
                printf("%s escolheu a caixa %d e encontrou a cobra! Você perdeu!\n", NomeDoPersonagem2, caixaEscolhida);
            }
            break;  // Finaliza o jogo quando alguém perde


        }else if (caixaEscolhida == caixaBotao) {
            if (turno == 1) {
                printf("%s escolheu a caixa %d e encontrou a cobra! Você perdeu!\n", NomeDoPersonagem, caixaEscolhida);
            }else {
                printf("%s escolheu a caixa %d e encontrou a cobra! Você perdeu!\n", NomeDoPersonagem2, caixaEscolhida);
            }
            break;
        }else if (caixaEscolhida == caixaBotao) {
            if (turno == 1) {
                printf("%s escolheu a caixa %d e encontrou o botão! Você venceu!\n", NomeDoPersonagem, caixaEscolhida);
            } else {
                printf("%s escolheu a caixa %d e encontrou o botão! Você venceu!\n", NomeDoPersonagem2, caixaEscolhida);

            }
            break;
        }else {
            printf("A caixa %d está vazia. Continue jogando.\n", caixaEscolhida);
        }
        turno = (turno== 1)? 2 : 5;
    } char jogar_novamente;
    printf("Deseja jogar novamente? (s/n): ");
    scanf(" %c", &jogar_novamente);

    if (jogar_novamente == 's' || jogar_novamente == 'S') {
        CobraNaCaixa();
    } else {
        printf("Obrigado por jogar! Até a próxima!\n");
    }
}


//----------------------------------------------------------------------
void GoumasWar() {
    
}

int main() {
    char opcao;

    do {
        printf("\nPoint clicks\n");
        printf("a - Jogo De Perguntas\n");
        printf("b - Cobra Na Caixa\n");
        printf("c - Goumas War\n");
        printf("x - Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                JogoDePergunta();
                break;
            case 'b':
                CobraNaCaixa();
                break;
            case 'c':
                GoumasWar();
                break;
            case 'x':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 'x');
    return 0;
}
