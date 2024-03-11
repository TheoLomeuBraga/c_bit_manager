char get_bit(char byte, char bit_offset) {
    return (byte >> bit_offset) & 1;
}

void set_bit(char *byte, char bit_offset, char bit) {
    if (bit) {
        // Definir o bit como 1
        *byte |= (1 << bit_offset);
    } else {
        // Definir o bit como 0
        *byte &= ~(1 << bit_offset);
    }
}

char get_bit_from_string(char *string, int bit_offset) {
    return get_bit(string[bit_offset / 8], bit_offset % 8);
}

void set_bit_in_string(char *string, int bit_offset, char bit) {
    set_bit(&string[bit_offset / 8], bit_offset % 8, bit);
}