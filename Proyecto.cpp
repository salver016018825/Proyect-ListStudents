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

int main(int argc, char const* argv[])
{
    //Mys variables 



    //areglo de 5 posiciones para las calificaciones 
    const int totalCalicaciones = 5;
    double calificaciones[totalCalicaciones] = {0.0, 0.0, 0.0, 0.0, 0.0};
    double hightNote = 0.0; 
    double lowNote;

    //variables para sacar promedio gruipal

    int j = 0;
    double sumaCalificacionPromedioAlumno = 0.0;
    double promedioGrupo = 0.0;
    double listNotes[3] = {0,0};

    // datos para un solo alumno
    char name[3][10] = {};
    char lastname[3][10] = {};
    double promedioAlumno = 0.0;
    double sumaNotas = 0.0;

    /*enter name and lastname in variable type char */
    cout << "enter data student" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter name: ";
        cin >> name[i];
        cout << "enter lastname: ";
        cin >> lastname[i];
        
        //enter calification from student by input
        cout << "enter calification from student " << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "Enter calificacion " << (i + 1) << " : ";
            cin >> calificaciones[i];
            sumaNotas += calificaciones[i];
            promedioAlumno = sumaNotas / 5;
            //el ultimo posicion es para el promedio del alumno
            if (i == 4) 
            {
                listNotes[j] = promedioAlumno;
                sumaCalificacionPromedioAlumno += listNotes[j];
                promedioGrupo = sumaCalificacionPromedioAlumno / 3;
                promedioAlumno = 0.0;
                sumaNotas = 0.0;
                j++;
            }
        }
    }

    //promedio bajo 
    int aux = 0;
    int aux1 = 0;
    lowNote = listNotes[0];
    for (int  i = 0; i < 3; i++)
    {
        if (listNotes[i] > hightNote)
        {
            hightNote = listNotes[i];
            aux++;
        }

        if (listNotes[i] < lowNote)
        {
            lowNote = listNotes[i];
            aux1++;
        }
    }


    //tomar el promecdio de alumno guardarlo en la lista de promedio alumnos
    
    cout << "list Notes " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << listNotes[i] << endl;
    }

    
    cout << "Promedio Grupal " << promedioGrupo << endl
        << "Studnet: " << name[aux] << " " << lastname[aux] << "     HightNote: " << hightNote
        << "\nstudent: " << name[aux1] << " " << lastname[aux1] << "      lowNote: " << lowNote << endl;

    return 0;
}
