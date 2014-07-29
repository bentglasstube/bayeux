BIN = bayeux
SRC = bayeux.c

.PHONY: all clean

all: $(BIN)

$(BIN): $(SRC)
	$(CC) -static $< -o $@

clean:
	rm $(BIN)
