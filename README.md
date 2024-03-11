# Bit Manipulation Functions

This documentation provides an overview of several utility functions written in C for bit manipulation within bytes and strings. These functions are useful for low-level data manipulation where control over individual bits is required.

## Functions

### `char get_bit(char byte, char bit_offset)`

Retrieves the value of a specific bit from a byte.

- `byte`: The byte from which the bit will be extracted.
- `bit_offset`: The position of the bit in the byte (0-7), where 0 is the least significant bit.

**Returns:** The value of the bit at the specified position in the byte (either 0 or 1).

### `void set_bit(char *byte, char bit_offset, char bit)`

Sets the value of a specific bit in a byte.

- `byte`: A pointer to the byte where the bit will be set.
- `bit_offset`: The position of the bit in the byte (0-7), where 0 is the least significant bit.
- `bit`: The new value of the bit (either 0 or 1).

**Note:** This function modifies the byte in place.

### `char get_bit_from_string(char *string, int bit_offset)`

Retrieves the value of a specific bit from a string.

- `string`: The string from which the bit will be extracted.
- `bit_offset`: The position of the bit in the string, calculated across all bytes.

**Returns:** The value of the bit at the specified position in the string (either 0 or 1).

### `void set_bit_in_string(char *string, int bit_offset, char bit)`

Sets the value of a specific bit in a string.

- `string`: The string where the bit will be set.
- `bit_offset`: The position of the bit in the string, calculated across all bytes.
- `bit`: The new value of the bit (either 0 or 1).

**Note:** This function modifies the string in place.

## Usage Example

```c
#include <stdio.h>

int main() {
    // Example usage of the functions
    char byte = 0b10101100;
    char position = 3;
    char bitValue = get_bit(byte, position);

    printf("Bit at position %d is: %d\n", position, bitValue);

    set_bit(&byte, position, 1);
    printf("After setting, bit at position %d is: %d\n", position, get_bit(byte, position));

    char myString[] = "Hello";
    int stringBitPos = 10;
    char stringBitValue = get_bit_from_string(myString, stringBitPos);
    printf("Bit at position %d in string is: %d\n", stringBitPos, stringBitValue);

    set_bit_in_string(myString, stringBitPos, 1);
    printf("After setting, bit at position %d in string is: %d\n", stringBitPos, get_bit_from_string(myString, stringBitPos));

    return 0;
}
