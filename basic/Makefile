CC=g++
SOURCES=$(wildcard *.cpp)
FILES := $(subst .cpp,,$(SOURCES))
FLAGS=-g -Wno-unused-variable -Wno-unused-but-set-variable

# By default, make runs the first target in the file
all: $(FILES)

% :: %.cpp
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(FILES)

