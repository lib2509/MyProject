path = SFML-2.5.1
INCLUDE = "$(path)\include"
LIBRARY = "$(path)\lib"
SOURCE = main
CXXFLAGS =
SFMLFLAGS =
SFML_INCLUDE = -lsfml-graphics -lsfml-window -lsfml-system

all: compile link run
compile:
	g++ -c *.cpp -I $(INCLUDE)
link:
	g++ $(CXXFLAGS) *.o -o $(SOURCE).exe -L $(LIBRARY) $(SFMLFLAGS) $(SFML_INCLUDE)
run:
	./$(SOURCE).exe
