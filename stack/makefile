export EXE_FILE := a.out
$(EXE_FILE) : main.o stack.o
	gcc $^ -lm -lstdc++ -o $@

main.o : main.cpp stack.hpp
	gcc -c $< -o $@
stack.o : stack.cpp stack.hpp
	gcc -c $< -o $@
.PHONY: clean
clean:
	rm -rf *.o $(EXE_FILE)
.PHONY: test
test: $(EXE_FILE)
	./$(EXE_FILE)


