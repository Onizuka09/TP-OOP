
SRC := $(shell find . -type f -name "*.cpp") 

OBJ := $(patsubst %.cpp,%.o,$(SRC))
BIN := main 
all: $(BIN)
test:
	@echo $(SRC) 
	@echo $(OBJ)

$(BIN): $(OBJ)
	g++ $^ -lm -o  $@

%.o: %.cpp
	g++ -c $^ -o $@

clean:
	rm *.o
	rm $(BIN)