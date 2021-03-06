CFLAGS = -Wall
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS)  -o ./bin/$@ $<

clean:
	rm -rf ./bin/*
