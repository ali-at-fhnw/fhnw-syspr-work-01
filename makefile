CC=gcc
CFLAGS=-std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

all: args array_pointer arrays do_while my_sizeof pointer strings string-copy structs switch tree tree_v2 type_def

args: args.c
array_pointer: array_pointer.c
arrays: arrays.c
do_while: do_while.c
my_sizeof: my_sizeof.c
pointer: pointer.c
strings: strings.c
string-copy: string-copy.c
structs: structs.c
switch: switch.c
tree: tree.c
tree_v2: tree_v2.c
type_def: type_def.c

clean:
	rm -f args
	rm -f array_pointer
	rm -f arrays
	rm -f my_sizeof
	rm -f do_while
	rm -f pointer
	rm -f strings
	rm -f string-copy
	rm -f structs
	rm -f switch
	rm -f tree
	rm -f tree_v2
	rm -f type_def
