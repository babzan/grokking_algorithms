CC = gcc
FLAGS = -Wall -Wextra -Werror -pedantic --std=c11
CLANG = clang-format
CLANG_FLAGS = -i --style=Google
SRC = binary_search.c
OBJ = binary_search.o


#all: $(SRC)

search: $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o search

style:
	$(CLANG) $(CLANG_FLAGS) $(SRC)

clean:
	rm -rf *.o search




