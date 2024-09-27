// Edwin Noe Argueta Flores
// 32111584


#include <iostream>
using namespace std;
#include <typeinfo> 

// Ejercicio D y F

void procedimientoUno(int parametro1)
{
    int x;
    x = parametro1;
    /* imprima la direccion y valor de x */
    cout << "Direccion de X "<< &x << endl;
}
void procedimientoDos(int parametro2)
{
    int y;
    y = parametro2;
    /* imprima la direccion y valor de y  */
    cout << "Direccion de Y "<< &y << endl;
}
int main()
{
    cout<< endl;
    cout<< "Ejecicio D" << endl;
    procedimientoUno(93);
    procedimientoDos(20);
// Ejecute el programa.
// Comente dentro del código del programa que observa, a que cree que se deba lo
// anterior.
//respuesta: ambas direcciones son iguales y la razon es por que las variables se almacenan en la 
// memoria de pila por lo que al momento de ejecutarse, la pila se llena y se vacia rapidamente . 
    cout<< endl;
    cout<< "Ejecicio F" << endl;
    // Ejercicio F
     // a. Almacene un número entero en una variable llamada cantidad.
    int cantidad = 2;
    
    // b. Defina una variable dinámica tipo string que tenga una longitud del tamaño ingresado en 2.a
    string *const apuntArr = new string[cantidad];

    // c. Lea en un ciclo los elementos del arreglo string.
    cout << "Ingrese los valores del arreglo:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese Valor " << i+1 << ": ";
        cin >> apuntArr[i];
    }

    cout << endl;

    // d. Despliegue los elementos utilizando el arreglo string.
    cout << "Despliegue los elementos utilizando el arreglo string:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Valor " << i << ": " << apuntArr[i] << endl;
    }

    // e. Despliegue los elementos y su dirección en memoria utilizando el apuntador.
    cout << "Despliegue los elementos y su dirección en memoria utilizando el apuntador:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Valor " << i << ": " << *(apuntArr + i) << ", Dirección: " << (apuntArr + i) << endl;
    }
    
    // f. Cambie los valores de al menos dos elementos del arreglo utilizando apuntadores.
    cout << "Cambie los valores de al menos dos elementos del arreglo utilizando apuntadores." << endl;
    // for (int i = 0; i < cantidad; i++) {
    //     cout << "Ingrese Nuevo Valor " << i << ": ";
    //     cin >> *(apuntArr + i);
    // }

    *(apuntArr)="Edwin";
    *(apuntArr +1)="Argueta";


    // g. Despliegue los elementos para asegurarse de los cambios.
    cout << "Despliegue los elementos para asegurarse que los cambió:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Nuevo Valor " << i << ": " << *(apuntArr + i) << endl;
    }
    
   // h. Cambie el apuntador a const y trate de hacer las operaciones descritas en los pasos e y f.

    // string *const apuntArr = new string[2];

    // e. Despliegue los elementos y su dirección en memoria utilizando el apuntador.
    // cout << "Despliegue los elementos y su dirección en memoria utilizando el apuntador:" << endl;
    // for (int i = 0; i < cantidad; i++) {
    //     cout << "Valor " << i << ": " << *(apuntArr + i) << ", Dirección: " << (apuntArr + i) << endl;
    // }
    
    // // f. Cambie los valores de al menos dos elementos del arreglo utilizando apuntadores.
    //
    // cout << "Cambie los valores de al menos dos elementos del arreglo utilizando apuntadores." << endl;
    // for (int i = 0; i < cantidad; i++) {
    //     cout << "Ingrese Nuevo Valor " << i << ": ";
    //     cin >> *(apuntArr + i);
    // }

    //¿A que cree que se debe la diferencia?
    // Lo hice sin embargo no noto la diferencia , segun lo investigado , const hace que la direccion
    // en memoria sea constante , es decir , no cambia , siguiendo las instrucciones , es posible hacer el insiso 
    // e y f ya que en realidad estoy cambiando el contenido no la direccion .
    

    // i. Realice los pasos a – g para arreglo y apuntador tipo char.
    
    cout<< endl;
    cout<<"Realice los pasos a – g para arreglo y apuntador tipo char."<< endl;
    cout << endl;

    int charCantidad = 3;  // Cantidad de caracteres en el arreglo
    
    char *apuntArrChar = new char[3];  // Arreglo dinámico de tipo char

    cout << "Ingrese los caracteres del arreglo:" << endl;
    for (int i = 0; i < charCantidad; i++) {
        cout << "Ingrese el caracter " << i + 1 << ": ";
        cin >> apuntArrChar[i];
    }

    cout << "Elementos del arreglo:" << endl;
    for (int i = 0; i < charCantidad; i++) {
        cout << apuntArrChar[i] << " ";
    }
    cout << endl;

    cout << "Elementos y sus direcciones de memoria:" << endl;
    for (int i = 0; i < charCantidad; i++) {
        cout << "Valor " << apuntArrChar[i] << "Dirección: "<< (apuntArrChar + i) << endl;
    }

    // Cambiar dos elementos
    *(apuntArrChar + 0) = 'X';  // Cambiar el primer carácter
    *(apuntArrChar + 2) = 'Y';  // Cambiar el tercer carácter

    cout << "Elementos después de los cambios:" << endl;
    for (int i = 0; i < charCantidad; i++) {
        cout << apuntArrChar[i] << " ";
    }
    cout << endl;


    //j. Intente acceder a un elemento que no se encuentre dentro del límite definido en cantidad. ¿Qué resultados obtiene?
    cout<<"acceder a un elemento que no se encuentre dentro del límite definido en cantidad es : ";
    cout << apuntArrChar[3] << endl;

    // respuesta: los resultados de variables char no son tratados iguales en mi caso lo que observo es que al accede a una direccion 
    // me da caracteres diferentes en lugar de una direccion  . 

    // correccion: 

    cout<< "Despues de correccion : " << endl;

    cout << "Elementos y sus direcciones de memoria:" << endl;
    for (int i = 0; i < charCantidad; i++) {
        cout << "Valor " << apuntArrChar[i] << " Dirección: " << static_cast<void*>(apuntArrChar + i) << endl;
    }

    // k. Compare los tipos de los apuntadores string y char para determinar si son iguales.
    cout << endl << "Comparación de tipos de apuntadores:" << endl;
    
    if (typeid(apuntArr) == typeid(apuntArrChar)) {
        cout << "Los tipos de apuntadores son iguales." << endl;
    } else {
        cout << "Los tipos de apuntadores son diferentes." << endl;
    }

    cout << "Tipo de apuntArr (string*): " << typeid(apuntArr).name() << endl;
    cout << "Tipo de apuntArrChar (char*): " << typeid(apuntArrChar).name() << endl;

    return 0;
}
