SRCS := $(wildcard vector_class_*.cpp) 
# to find all the ...cpp file
CC := g++-9
BINS := $(SRCS:%.cpp=%)



all: compile_single

helloWorld:
	echo "hello world"
	@echo "hello world!" 
	# use @ will not print "echo ..." line.


compile_single: ${BINS} vector_class_head.h 
#if we use "${BINS}.o", it will only effect the first BINS file
	${CC} vector_class_client.o vector_class_implement.o -o vector_class_single_print	
	./vector_class_single_print

#first, you have compiled once.
#then, if you modify one file of cpp, it will find the file and only compile itself.

%: %.cpp
	${CC} -c $<
#this is the simple way to run the following lines.

# vector_class_client: vector_class_client.cpp
# 	${CC} -c vector_class_client.cpp

# vector_class_implement: vector_class_implement.cpp
# 	${CC} -c vector_class_implement.cpp

clean_single:
	rm -rf *.o vector_class_single_print

listCppFiles:
	@echo ${SRCS}
	@echo ${BINS}