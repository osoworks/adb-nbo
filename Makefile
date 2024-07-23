TARGET = add-nbo
CXXFLAGS = -g

all: $(TARGET) # Defaut build target

$(TARGET): add-nbo.o main.o
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@ # Link object files to create the executable

clean:
	rm -f $(TARGET) # Remove the executable
	rm -f *.o # Remove object files

add-nbo.o: add-nbo.c
	gcc -c -o add-nbo.o add-nbo.c

main.o: main.cpp
	g++ -c -o main.o main.cpp
