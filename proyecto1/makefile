all: compilar
compilar:  criterio acta detalleActa posgrado view main
		g++ -o Salida Criterio.o Acta.o DetalleActa.o Posgrado.o View.o Main.o
criterio: Criterio.cpp Criterio.h DetalleActa.cpp DetalleActa.h
		g++ -c Criterio.cpp
acta: Acta.cpp Acta.h Criterio.h
	g++ -c Acta.cpp
detalleActa: Criterio.cpp Criterio.h DetalleActa.h
	g++ -c DetalleActa.cpp
posgrado: Posgrado.cpp Posgrado.h DetalleActa.h Acta.h
		g++ -c Posgrado.cpp
view: View.cpp View.h Posgrado.h
		g++ -c View.cpp
main: Main.cpp View.h 
	  g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o
