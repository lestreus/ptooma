
all: main

lib:
	@gcc --shared libptooma.c -o libptooma.so

main: lib
	@gcc -L. ptooma.c -lptooma -o ptooma

clean:
	@rm libptooma.so ptooma

install: lib
	@cp libptooma.so /usr/local/lib
	@cp ptooma /usr/local/bin
	@ldconfig

uninstall:
	@rm /usr/local/lib/libptooma.so
	@rm /usr/local/bin/ptooma
