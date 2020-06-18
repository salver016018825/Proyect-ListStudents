/*
    Crea un programa que ingrese los datos de 20 alumnos, nombre, apellido, nombre de materia 1, calificación materia 1, nombre de materia 2, calificación materia 2, nombre de materia 3, calificación materia 3, nombre de materia 4, calificación materia 4, nombre de materia 5, calificación materia 5. Y después calcular el promedio general de cada alumno, y promedio final del grupo de 20 alumnos.

    Mostrar en pantalla.

        Nombre con apellido del alumno.
        Promedio general de alumno.
        Materia con mayor calificación.
        Materia con menor calificación.

    Y al final el promedio general del grupo.

    Una vez que se muestre en pantalla, darle la opción al usuario si todos los datos están correctos, y de no ser así se pueda modificar el dato erróneo y posteriormente mostrar de nuevo los datos en pantalla ya con los datos correctos.

*/

#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char name[10] = "";
    char lastname[20] = "";
    char materias[15] = "";
    
    double calificaciones[5];
    double promedio;
    
    cout<<"enter stundent name: ";
    cin.getline(name,9,'\n');

    cout<<"enter student lastName: ";
    cin.getline(lastname,19,'\n');
    
    //uso de 8 variables para este caso
    
    
    return 0;
}
