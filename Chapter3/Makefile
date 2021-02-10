all:
	g++ -o limits.out limits.cpp
	g++ -o exceed.out exceed.cpp
	g++ -o hexoct1.out hexoct1.cpp
	g++ -o hexoct2.out hexoct2.cpp
	g++ -o chartype.out chartype.cpp
	g++ -o morechar.out morechar.cpp
	g++ -o bondini.out bondini.cpp
	g++ -o floatnum.out floatnum.cpp
	g++ -o fltadd.out fltadd.cpp
	g++ -o arith.out arith.cpp
	g++ -o divide.out divide.cpp
	g++ -o modulus.out modulus.cpp
	g++ -o init.out init.cpp
	g++ -o typecast.out typecast.cpp
	for n in 1 2 3 4 5 6 7 ; do \
		g++ -o 3_$$n.out 3_$$n.cpp ; \
	done
clean:
	@rm -f *.out