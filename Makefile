CC = g++
CFLAGS = -Wall -std=c++17 -g

SRC = $(wildcard src/*.cpp)
HEADS = $(wildcard src/*.hpp)

LIB = libs/SDL2/lib/x86
INCLUDE = libs/SDL2/include

libs = -L$(LIB) -I$(INCLUDE) -lSDL2main  -lSDL2

all: default run

default:
	
#	echo \
	echo "Source files: "$(SRC)\
	@echo "Header files : "$(HEADS)
#	@echo "Library files: "$(LIB) "Include files: "$(INCLUDE) "libs: "$(libs)

	@echo "\033[0;33m Compiling the source files...\033[0m"
	@$(CC) $(CFLAGS) $(SRC) $(libs) -o build/Build
	@echo 
	@echo "\e[0;36m [Succesfully Compiled!] \e[0m"

run:
	@echo "Running the program..."
	@./build/Build