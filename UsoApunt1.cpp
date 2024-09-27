#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // declaracion habitual de una variable
    int num1 = 5; // en esta puedo obtener el valor, un valor a 2 bloques
    double num2 = 13.2;

    // declarar un espacio dinamico para una variable int con un valor de 100
    // new int(100); // algun lugar de memoria defino que me almacene un 100 pero no tengo
    // acceso por lo que necesito un apuntador

    // declarar un apuntador a un espacio dinamico para una variable int con un valor de 150
    int* apuntanum = new int(150); // declarando una variable y lo que tiene la variable tiene una direccion en memoria donde almacene el 150
    // ahora tengo acceso al valor 150 por medio del apuntador

    // declarar un arreglo int de 15 posiciones (no 100 como indica el comentario)
    int arr100[15]; // reserva un espacio de 15 valores

    // declarar un apuntador a un espacio dinamico para una variable con 100 posiciones de tipo int
    int* apuntaArr = new int[100]; // esta si tiene apuntador, pero es equivalente a la de arriba

    cout << "El valor al cual apunta apuntanum es " << *apuntanum << endl; // operador de desreferencia
    cout << "El contenido del apuntador apuntanum es " << apuntanum << endl; // lo que hay adentro de la variable
    cout << "Un elemento de notas arr100: " << arr100[3] << endl;
    cout << "Un elemento de notas arr100: " << arr100[14] << endl; // índice válido para el arreglo de tamaño 15
    cout << "Un elemento de apuntaArr: " << apuntaArr[25] << endl;
    cout << "El contenido del apuntador apuntaArr es " << apuntaArr << endl;

    cout << "Direccion de num1 y num2: " << &num1 << "--" << &num2 << endl;
    cout << "Direccion de apuntanum: " << &apuntanum << endl;

    cout << "Tamano de apuntanum: " << sizeof(apuntanum) << " BYTES y el de apuntaArr: " << sizeof(apuntaArr) << endl;
    cout << "Tamano de *apuntanum: " << sizeof(*apuntanum) << " BYTES y el de *apuntaArr: " << sizeof(*apuntaArr) << endl;

    // no dejar apuntador suelto
    // NULL
    // cout << "El contenido del apuntador puntInt es " << << endl;

    // liberar memoria
    delete apuntanum; // liberar memoria dinámica de apuntanum
    delete[] apuntaArr; // liberar memoria dinámica de apuntaArr

    cout << "Tamano de apuntanum despues de delete: " << sizeof(apuntanum) << " BYTES y el de apuntaArr: " << sizeof(apuntaArr) << endl;
    cout << "Tamano de *apuntanum despues de delete: " << sizeof(*apuntanum) << " BYTES y el de *apuntaArr: " << sizeof(*apuntaArr) << endl;

    cout << "Parte B \n";

    // declarar double y le asigna 20.8
    double varDouble = 20.8;

    // declarar dinamicamente variable double con valor 20.8
    double* puntDouble = new double(20.8);

    // declarar un apuntador al apuntador creado en el paso anterior
    double** doublepuntDouble = &puntDouble;

    // Desplegar contenido y referencias
    cout << "Direccion de varDouble: " << &varDouble << endl; // corregido para mostrar la direccion correcta de varDouble
    cout << "Contenido de varDouble: " << varDouble << endl;
    cout << "Contenido de puntDouble: " << puntDouble << endl;
    cout << "Contenido de lo que apunta puntDouble: " << *puntDouble << endl;
    cout << "Contenido de doublepuntDouble: " << doublepuntDouble << endl;
    cout << "Contenido de lo que apunta doublepuntDouble: " << *doublepuntDouble << endl;
    cout << "Contenido de lo que apunta **doublepuntDouble: " << **doublepuntDouble << endl;
    cout << "Direccion de doublepuntDouble: " << &doublepuntDouble << endl;

    // eliminar asignacion de memoria de apuntadores
    delete puntDouble;

    return 0;
}
