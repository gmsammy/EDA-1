#include <stdio.h>
#include <string.h>

struct Direccion{
    char Calle[30];
    short numero;
    char Colonia[30];
    int CP;
};

struct Alumno{
    int numCuenta;
    char nombre[25];
    char apellido[25];
    float promedio;
    struct Direccion direccion;
};



int main(){

    struct Alumno Alumno1; //Se crea un nuevo alumno
    //Asignamos valores al nombre, apellido, promedio y domicilio
    strcpy(Alumno1.nombre,"Jorge");
    strcpy(Alumno1.apellido,"Salgado");
    Alumno1.promedio = 7.8;
    strcpy(Alumno1.direccion.Calle,"Rosas");
    Alumno1.direccion.CP = 1234;
    strcpy(Alumno1.direccion.Colonia,"Pedregal");
    Alumno1.direccion.numero = 1080;



    //Se imprimen los datos del alumno
    printf("Su nombre es: %s\n",Alumno1.nombre);
    printf("Su Apellido es: %s\n",Alumno1.apellido);
    printf("Su Promedio es: %f\n",Alumno1.promedio);
    printf("Su Calle es: %s\n",Alumno1.direccion.Calle);
    printf("Su Codigo Postal es: %d\n",Alumno1.direccion.CP);
    printf("Su Colonia es: %s\n",Alumno1.direccion.Colonia);
    printf("Su numero es: %i\n",Alumno1.direccion.numero);
    printf("\n\n");

    //Creamos apuntador para modificar Datos del alumno
    struct Alumno *apAlumno;
    apAlumno = &Alumno1;
    strcpy(apAlumno->direccion.Calle,"Tepito");
    apAlumno->direccion.CP  = 5431;
    strcpy(apAlumno->direccion.Colonia,"Juarez");
    apAlumno->direccion.numero = 115;

    //Se imprimen los datos del alumno
    printf("Su nombre es: %s\n",Alumno1.nombre);
    printf("Su Apellido es: %s\n",Alumno1.apellido);
    printf("Su Promedio es: %f\n",Alumno1.promedio);
    printf("Su Calle es: %s\n",Alumno1.direccion.Calle);
    printf("Su Codigo Postal es: %d\n",Alumno1.direccion.CP);
    printf("Su Colonia es: %s\n",Alumno1.direccion.Colonia);
    printf("Su numero es: %i\n",Alumno1.direccion.numero);

return 0;
}
