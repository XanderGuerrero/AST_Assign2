
#Macros

CC = cl
LD = cl
CFLAGS = /c
LDFLAGS = /Fe
SRC = guessGame.c input.c output.c
OBJ = $(SRC:.C = .OBJ)
HEADERS = guessGame.h
EXE = guessGame.exe

#commands
all: $(SRC) $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS)$(EXE)

guessGame.obj: guessGame.c $(HEADERS)
	$(CC) guessGame.c $(CFLAGS)

input.obj: input.c $(HEADERS)
	$(CC) input.c $(CFLAGS)

output.obj: output.c $(HEADERS)
	$(CC) output.c $(CFLAGS)

#delete object and exe files for a new rebuild

clean:
	del /q *.obj
	del /q *.exe