export EXECUTABLE := a.out
export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))
$(EXECUTABLE) : $(OBJ_FILES)
	gcc $^ -lm -lstdc++ -o $@

%.o : %.cpp stack.hpp
	gcc -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o $(EXECUTABLE)
.PHONY: run
run: $(EXECUTABLE)
	./$(EXECUTABLE)
