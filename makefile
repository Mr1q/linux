main:main.o linkstack.o
	gcc $^ -o $@


main.o:main.c linkstack.h

linkstack.o:linkstack.c linkstack.h

#.PHONY:clean
clean:
	@echo "cleanning the project"
	rm *.o
	#gcc -c linkstack.c

