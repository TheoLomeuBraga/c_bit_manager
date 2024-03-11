#include <stdio.h>
#include "c_bit_manager.h"

int main() {
    char myString[] = "Hello World"; // Exemplo de uma string
    int bitPosition = 10; // Exemplo de posição do bit

    // Teste get_bit_from_string
    char bit = get_bit_from_string(myString, bitPosition);
    printf("O bit na posição %d é: %d\n", bitPosition, bit);

    // Teste set_bit_in_string
    set_bit_in_string(myString, bitPosition, 1);
    bit = get_bit_from_string(myString, bitPosition);
    printf("Após setar, o bit na posição %d é: %d\n", bitPosition, bit);

    return 0;
}