export EXECUTABLE := a.out
$(EXECUTABLE):main.o b_tree.o  
	gcc $^ -lstdc++ -o $@
b_tree.o:b_tree.cpp b_tree.hpp
	gcc -c $< -o $@
main.o:main.cpp b_tree.hpp
	gcc -c $< -o $@
.PHONY: clean
clean:
	rm -rf *.o $(EXECUTABLE)
.PHONY: run
run: $(EXECUTABLE)
	./$(EXECUTABLE)
