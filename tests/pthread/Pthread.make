CPP=g++


Pthread.test:Pthread.o
	$(CPP) -o Pthread.test Pthread.o -lpthread

Pthread.o:Pthread.cpp
	$(CPP) -c Pthread.cpp -O3

clean:
	rm Pthread.o Pthread.test