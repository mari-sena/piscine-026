CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = main.c fts.c
OUT_EXE = rush-02

all: $(OUT_EXE)

$(OUT_EXE): $(FILES)
	@$(CC) $(CFLAGS) $(FILES) -o $(OUT_EXE)

fclean:
	rm -f $(OUT_EXE)

pt:
	@./$(OUT_EXE) numeros.dict 42