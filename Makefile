# Curso IE-0117
# Estudiante: Anthonny Artavia Alpizar C10735
# Asignacion: Laboratorio Opcional

# Definición del compilador
CC = gcc

# Definición de las banderas de compilación
CFLAGS = -Wall -Wextra -g

# Nombre del ejecutable
TARGET = main

# Archivo fuente
SRCS = main.c

# Regla para compilar y enlazar el ejecutable
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Regla para limpiar los archivos compilados
clean:
	rm -f $(TARGET) *.o

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)
