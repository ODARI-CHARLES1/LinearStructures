CC=gcc
CFLAGS=-Iinclude
SRC=src/stack_array.c src/stack_linked.c src/queue.c src/main.c
OBJ=$(SRC:.c=.o)
OUT=build/app

all: $(OUT)

$(OUT): $(OBJ)
	mkdir -p build
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build src/*.o
