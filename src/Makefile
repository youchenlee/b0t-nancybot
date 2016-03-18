all:
	g++ -c -fPIC *.c *.cpp
	g++ -shared -Wl -o libnancy.so.1.0.0 *.o

exec:
	g++ *.c -o nancy
