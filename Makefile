

INCLUDE=-Iinclude/
LIBS=-Llib/

cifrador: main.o codificacion.o libdinamic.so
	gcc $(LIBS) obj/main.o obj/codificacion.o -lm -led -o bin/$@

main.o: src/main.c
	gcc -Wall -c $(INCLUDE) src/main.c -o obj/main.o

codificacion.o: src/codificacion.c
	gcc -Wall -c $(INCLUDE) src/codificacion.c -o obj/codificacion.o

#genero la  libreria dinamica
libdinamic.so: src/cifrado.c
	gcc -Wall $(INCLUDE) -shared -fPIC src/cifrado.c -o lib/libdinamic.so

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
