// Curso IE-0117
// Estudiante: Anthonny Artavia Alpizar C10735
// Asignacion: Laboratorio Opcional

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Se define la estructura Person
typedef struct {
    char name[50];
    int age;
    double height;
} Person;
 
// Se crea la función de comparación para ordenar por nombre alfabéticamente
int compare_by_name(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return strcmp(personA->name, personB->name);
}

// Se crea la función de comparación para ordenar por edad, de menor a mayor
int compare_by_age(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return personA->age - personB->age;
}

// Se crea la función de comparación para ordenar por altura, de menor a mayor
int compare_by_height(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    if (personA->height < personB->height) return -1;
    if (personA->height > personB->height) return 1;
    return 0;
}

// Es la función para imprimir la lista de personas
void print_persons(Person persons[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nombre: %s, Edad: %d, Altura: %.2f cm\n", persons[i].name, persons[i].age, persons[i].height);
    }
    printf("\n");
}

int main() {
    // Se crea un arreglo de personas con al menos 5 elementos
    Person persons[] = {
        {"Diana", 38, 164.5},
        {"Anthonny", 44, 184.0},
        {"Ian", 14, 170.2},
        {"Damian", 21, 185.4},
        {"Lexy", 22, 150.4}
    };
    int size = sizeof(persons) / sizeof(persons[0]);

    // Se ordena por nombre y mostrar
    qsort(persons, size, sizeof(Person), compare_by_name);
    printf("Ordenado por nombre:\n");
    print_persons(persons, size);

    // Se ordena por edad y mostrar
    qsort(persons, size, sizeof(Person), compare_by_age);
    printf("Ordenado por edad:\n");
    print_persons(persons, size);

    // Se ordena por altura y mostrar
    qsort(persons, size, sizeof(Person), compare_by_height);
    printf("Ordenado por altura:\n");
    print_persons(persons, size);

    return 0;
}
