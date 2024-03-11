all:
	gcc main.c -o c_bit_manager
	./c_bit_manager

make:
	gcc main.c -o c_bit_manager

run: 
	./c_bit_manager