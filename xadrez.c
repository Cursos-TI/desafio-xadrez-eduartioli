 #include <stdio.h>

 int main() {
     // Definição de constantes para o número de movimentos
     const int TORRE_MOVIMENTOS = 5;   // Torre move 5 casas para a direita
     const int BISPO_MOVIMENTOS = 5;   // Bispo move 5 casas na diagonal (cima e direita)
     const int RAINHA_MOVIMENTOS = 8;  // Rainha move 8 casas para a esquerda
     
    printf("\n=== Simulação de Movimento das Peças de Xadrez ===\n");
     
     // =========== Movimento da Torre ===========
     // A Torre move-se em linha reta horizontalmente ou verticalmente
     // Neste exemplo, a Torre move 5 casas para a direita usando 'for'
     printf("\n--- Movimento da Torre (5 casas para a direita) ---\n");
     for (int i = 1; i <= TORRE_MOVIMENTOS; i++) {
         printf("Direita\n");
     }
     
     // =========== Movimento do Bispo ===========
     // O Bispo move-se na diagonal
     // Neste exemplo, o Bispo move 5 casas na diagonal (cima e direita) usando 'while'
     printf("\n--- Movimento do Bispo (5 casas na diagonal para cima e direita) ---\n");
     int contadorBispo = 1;
     while (contadorBispo <= BISPO_MOVIMENTOS) {
         printf("Cima, Direita\n");
         contadorBispo++;
     }
     
     // =========== Movimento da Rainha ===========
     // A Rainha pode mover-se em todas as direções
     // Neste exemplo, a Rainha move 8 casas para a esquerda usando 'do-while'
     printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
     int contadorRainha = 1;
     do {
         printf("Esquerda\n");
         contadorRainha++;
     } while (contadorRainha <= RAINHA_MOVIMENTOS);
     
     printf("\n=== Fim da Simulação de Movimento ===\n\n");
     
     return 0;
 }