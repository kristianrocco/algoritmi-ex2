# Variabili
CC = gcc
CFLAGS = -Wall -Wextra -O2
BIN_DIR = bin
SRC_DIR = src
INCLUDE_DIR = include

# File sorgenti
RECURSIVE_SRC = $(SRC_DIR)/edit_distance_recursive.c
DYNAMIC_SRC = $(SRC_DIR)/edit_distance_dynamic.c
MAIN_SRC = $(SRC_DIR)/main.c
TEST_SRC = $(SRC_DIR)/test_edit_distance.c

# File oggetto
OBJ_RECURSIVE = $(RECURSIVE_SRC:.c=.o) $(MAIN_SRC:.c=.o)
OBJ_DYNAMIC = $(DYNAMIC_SRC:.c=.o) $(MAIN_SRC:.c=.o)
OBJ_TEST = $(TEST_SRC:.c=.o) $(RECURSIVE_SRC:.c=.o) $(DYNAMIC_SRC:.c=.o)

# Obiettivi
all: $(BIN_DIR)/edit_distance_recursive $(BIN_DIR)/edit_distance_dynamic $(BIN_DIR)/test_edit_distance

$(BIN_DIR)/edit_distance_recursive: $(OBJ_RECURSIVE)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BIN_DIR)/edit_distance_dynamic: $(OBJ_DYNAMIC)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BIN_DIR)/test_edit_distance: $(OBJ_TEST)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

# Regole di compilazione
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Pulizia
clean:
	rm -rf $(SRC_DIR)/*.o $(BIN_DIR)/*

.PHONY: all clean
