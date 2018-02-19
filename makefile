CC= g++

CFLAGS = -Wall -Werror -ansi -pedantic

all:
	mkdir -p ./bin
	$(CC) $(CFLAGS) ./main.cpp -o ./bin/rshell

main:
	$(CC) $(CFLAGS) ./main.cpp

Connector:
	$(CC) $(CFLAGS) ./Connector.cpp

Cmd:
	$(CC) $(CFLAGS) ./Cmd.cpp

AND:
	$(CC) $(CFLAGS) ./AND.cpp

OR:
	$(CC) $(CFLAGS) ./OR.cpp

Semicolon:
	$(CC) $(CFLAGS) ./Semicolon.cpp

Exit:
	$(CC) $(CFLAGS) ./Exit.cpp

Test:
	$(CC) $(CFLAGS) ./Test.cpp

clean:
	rm -rf ./bin
