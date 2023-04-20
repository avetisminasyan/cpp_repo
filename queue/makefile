export EXE_FILE := a.out
$(EXE_FILE) : main.o queue.o
	gcc $^ -lm -lstdc++ -o $@

main.o : main.cpp queue.hpp
	gcc -c $< -o $@
queue.o : queue.cpp queue.hpp
	gcc -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o $(EXE_FILE)
.PHONY: test
test: $(EXE_FILE)
	./$(EXE_FILE)


