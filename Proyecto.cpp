/*
    Crea un programa que ingrese los datos de 20 alumnos, nombre, apellido, nombre de materia 1, calificación materia 1, nombre de materia 2, 
    calificación materia 2, nombre de materia 3, calificación materia 3, nombre de materia 4, calificación materia 4, nombre de materia 5, 
    calificación materia 5. Y después calcular el promedio general de cada alumno, y promedio final del grupo de 20 alumnos.

    Mostrar en pantalla.

        Nombre con apellido del alumno.
        Promedio general de alumno.
        Materia con mayor calificación.
        Materia con menor calificación.

    Y al final el promedio general del grupo.
    Una vez que se muestre en pantalla, darle la opción al usuario si todos los datos están correctos, y de no ser así se pueda 
    modificar el dato erróneo y posteriormente mostrar de nuevo los datos en pantalla ya con los datos correctos.

*/

#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char const* argv[])
{
    //Mys variables 
      

    //array materias
    const char listMaterias[5][20] = { "Matematicas","Geografia","Historia","Programacion","Filosofia"};    

    //areglo de 5 posiciones para las calificaciones 
    const int totalCalicaciones = 5;
    double calificaciones[totalCalicaciones] = {0.0, 0.0, 0.0, 0.0, 0.0};
    double hightNote = 0.0; 
    double lowNote;

    //variables para sacar promedio gruipal

    int j = 0;
    //int temp = 0;
    double sumaCalificacionPromedioAlumno = 0.0;
    double promedioGrupo = 0.0;
    double listNotes[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    /*double listNotes[3] = { 0,0,0 };*/

    // datos para un solo alumno
    char name[20][20] = {};
    char lastname[20][30] = {};
    /*char name[3][20] = {};
    char lastname[3][30] = {};*/
    double promedioAlumno = 0.0;
    double sumaNotas = 0.0;

    //validacion
    char respuesta = 'n';

    /*enter name and lastname in variable type char */
    cout << "enter data student" << endl;
    
        for (int i = 0; i < 20; i++)
        {
            do
            {
                cout << "Student " << i + 1 << "\nenter name: ";
                cin >> name[i];
                cout << "enter lastname: ";
                cin >> lastname[i];            

                //enter calification from student by input
                cout << "\tenter calification from student " << endl;
                for (int i = 0; i <= 4; i++)
                {
                    cout << "\t\tEnter " << listMaterias[i] << " : ";
                    cin >> calificaciones[i];
                    sumaNotas += calificaciones[i];
                    promedioAlumno = sumaNotas / 5;
                    //el ultimo posicion es para el promedio del alumno
                    if (i == 4)
                    {
                        listNotes[j] = promedioAlumno;
                        /*sumaCalificacionPromedioAlumno += listNotes[j];
                        promedioGrupo = sumaCalificacionPromedioAlumno / 20;*/
                        promedioAlumno = 0.0;
                        sumaNotas = 0.0;
                        j++;
                        
                    }
                }
                //validar datos correctos
                cout << "Los datos son correctos? S/N: ";
                cin >> respuesta;
                if (respuesta == 'n')
                {
                    j = j-1;
                    //double listNotes[20] = {};
                    /*sumaCalificacionPromedioAlumno = 0.0;
                    promedioGrupo = 0.0;*/

                }
            } while (respuesta != 'y' && respuesta != 'Y' && respuesta != 's' && respuesta != 'S');
        }

    ////Se valida las notas altas y bajas
    int aux = 0;
    int aux1 = 0;
    lowNote = listNotes[0];
    for (int  i = 0; i < 20; i++)
    {
        if (listNotes[i] > hightNote)
        {
            hightNote = listNotes[i];
            aux = i + 1;
        }

        if (listNotes[i] < lowNote)
        {
            lowNote = listNotes[i];
            aux1 = i + 1;
        }
    }


    //tomar el promecdio de alumno guardarlo en la lista de promedio alumnos
    
    cout << "\nlist Students " << endl;

    for (int i = 0; i < 20; i++)
    {
        cout <<i+1<<"\t"<< name[i] << " " << lastname[i] <<"\t"<< listNotes[i] << endl;
        sumaCalificacionPromedioAlumno += listNotes[i];
        promedioGrupo = sumaCalificacionPromedioAlumno / 20;
    }

    //muestra los datos     
    cout << "\nPromedio Grupal " << promedioGrupo << endl
        << "Studnet: " << aux << "\t:" << name[aux-1] << " " << lastname[aux-1] << "\tHightNote: " << hightNote
        << "\nstudent: " << aux1 << "\t:" << name[aux1-1] << " " << lastname[aux1-1] << "\tlowNote: " << lowNote << endl;

    return 0;
}
