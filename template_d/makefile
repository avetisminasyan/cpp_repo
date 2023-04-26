export EXECUTABLE := a.out
$(EXECUTABLE):main.o
	gcc $< -lstdc++ -o $@
main.o:main.cpp 
	gcc -c $< -o $@
.PHONY: clean
clean:
	rm -rf *.o $(EXECUTABLE)
.PHONY: run
run: $(EXECUTABLE)
	./$(EXECUTABLE)
