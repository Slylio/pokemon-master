prog=main
lib = pokemon.h
obj=main.o pokemon.o PokeBase.o
all: $(obj)
	g++ -o $(prog) $(obj)
	
%.o: %.cpp $(lib)
	g++ -Wall -std=c++11 -c $<

clean : 
	rm -f *.o