SRCS := $(wildcard *.cpp)

all: clean compile_whole

helloWorld:
	echo "hello world"
	@echo "hello world!" # use @ will not print "echo ..." line.

compile_whole: vector_class_client.cpp vector_class_implement.cpp vector_class_head.h
	@g++ vector_class_client.cpp vector_class_implement.cpp -o vector_class_print
	@echo "compile and run the vector_class_*.cpp"
	@./vector_class_print

clean:
	rm -rf vector_class_print



compile_single: vector_class_client.o vector_class_implement.o vector_class_head.h
	g++ vector_class_client.o vector_class_implement.o -o vector_class_single_print	

#first, you have compiled once.
#then, if you modify one file of cpp, it will find the file and only compile itself.
vector_class_client.o: vector_class_client.cpp
	g++ -c vector_class_client.cpp

vector_class_implement.o: vector_class_implement.cpp
	g++ -c vector_class_implement.cpp

clean_single:
	rm -rf *.o vector_class_single_print

listCppFiles:
	@echo ${SRCS}