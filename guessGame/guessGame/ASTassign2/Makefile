guessGame.exe: guessGame.obj input.obj output.obj
	cl guessGame.obj input.obj output.obj /FeguessGame.exe

guessGame.obj: guessGame.c guessGame.h
	cl guessGame.c /c

input.obj: input.c guessGame.h 
	cl input.c /c

output.obj: output.c guessGame.h
	cl output.c /c
