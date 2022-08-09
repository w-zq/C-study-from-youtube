SRCS := $(wildcard *.cpp)
CC := g++



all: compile_single

helloWorld:
	echo "hello world"
	@echo "hello world!" # use @ will not print "echo ..." line.


compile_single: vector_class_client.o vector_class_implement.o vector_class_head.h
	${CC} vector_class_client.o vector_class_implement.o -o vector_class_single_print	
	./vector_class_single_print

#first, you have compiled once.
#then, if you modify one file of cpp, it will find the file and only compile itself.
vector_class_client.o: vector_class_client.cpp
	${CC} -c vector_class_client.cpp

vector_class_implement.o: vector_class_implement.cpp
	${CC} -c vector_class_implement.cpp

clean_single:
	rm -rf *.o vector_class_single_print

listCppFiles:
	@echo ${SRCS}