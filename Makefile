all:

	g++ -o main --std=c++11 -lpthread ./main.cpp ./communication.cpp ./node.cpp ./mux_facade.cpp 
