practice3 : main.o
	gcc -o practice3 main.o -L. -lhcf_lcm

lib: hcf_lcm.o
	gcc -shared -Wl,-soname,libhcf_lcm.so.1 -o libhcf_lcm.so.1.0.0 ./hcf_lcm.o

install:
	cp ./libhcf_lcm.so.1.0.0 /usr/lib/libhcf_lcm.so.1.0.0
