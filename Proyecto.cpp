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
    //Mys variables 
    double promedioAlumno = 0.0;
    double sumaMateria = 0.0;
    double sumaCalificacionPromedioAlumno = 0.0;
    double CalificacionesMateria = 0.0;
    double promedioGrupo = 0.0;
    
    char name[3][10] = {};
    char lastname[3][10] = {}; 

    /*enter name and lastname in variable type char */
    cout<<"enter data student"<<endl;
    for(int i; i < 3; i++)
    {
        cout<<"enter name: ";
        cin>>name[i];
        cout<<"\nenter lastname;";
        cin>>lastname[i];
    }

    /*my list studnets*/
    for(int i = 0; i < 3; i++)
    {
        cout<<name[i]<<endl;
    }

    
    //areglo de 5 posiciones para las calificaciones el ultimo posicion es para el promedio del alumno
    const int totalCalicaciones = 6;
    double calificaciones[totalCalicaciones];

    //enter calification from student by input
    cout<<"enter calification from student "<<endl;
    for(int i = 0; i <= 4; i++)
    {
        cout<<"Enter calificacion "<<(i+1)<<" : ";
        cin>>calificaciones[i];
        sumaMateria += calificaciones[i];
        promedioAlumno = sumaMateria / 5; 
        calificaciones[6] = promedioAlumno;
    }

    //imprimo calificaciones del alumno
    cout<<"Calificaciones del Alumno"<<endl;
    for(int i = 0; i <= 4; i++)
    {
        cout<<"Materia "<<i+1<<": "<<calificaciones[i]<<endl;
    }
    cout<<"Promedio Student>  "<<calificaciones[6];
  
    
    return 0;
}
