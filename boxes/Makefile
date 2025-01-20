CC=g++
SOURCES=boxes.cpp Box.cpp
EXE=boxes
FLAGS=-g -Wno-unused-variable -Wno-unused-but-set-variable

# By default, make runs the first target in the file
all: $(EXE)

$(EXE):: $(SOURCES)
	$(CC) $(FLAGS) $(SOURCES) -o $@

clean:
	rm -rf $(EXE)

