#https://www.youtube.com/watch?v=aw9wHbFTnAQ 

# makefile version 1.0.09.18.2018

CFLAGS=-std=c++14 -c -g -Wall

	
mystery: mystery.o
	@printf "\033[36mLinking \"mystery\"...\n\033[0m"
	g++ mystery.o -o mystery.out
	@printf "\n\033[34mRun by typing 'make run'\n\n\033[0m"

mystery.o: mystery.cpp
	@printf "\033[36mCompiling \"mystery\"...\n\033[0m"
	g++ $(CFLAGS) mystery.cpp

# ...................................................................

run:
	@./mystery.out

# ...................................................................

# remove temp files

clean:
	rm -f *.out *.o 



