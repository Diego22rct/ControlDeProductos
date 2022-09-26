#include <iostream>
#include <string>

using namespace std;
using namespace System;

#include "Producto.h"
#include "Almacen.h"

void cargaDeInventario(){
}

void main(){
    Console::Clear();
    Console::Title = "Control de productos";
    Console::SetWindowSize(80, 30);

    CProducto* productos = new CProducto();
    productos->setNombreDelProducto("default");
    productos->setCodigoDelProducto(000001);
    productos->setPrecio(0.0);

    CAlmacen* almacen = new CAlmacen(productos);

    int opcion = 0;
    do
    {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::White;

        cout << "MENU PRINCIPAL" << endl;
        Console::ForegroundColor = ConsoleColor::Green;

        cout << "1. Agregar producto" << endl;

        cout << "2. Eliminar producto" << endl;

        cout << "3. Mostrar productos" << endl;

        cout << "4. Salir" << endl;
        Console::ForegroundColor = ConsoleColor::White;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::White;

            cout << "AGREGAR PRODUCTO" << endl;
            Console::ForegroundColor = ConsoleColor::Green;

            cout << "Ingrese el nombre del producto: ";
            string nombre;
            cin >> nombre;

            cout << "Ingrese el codigo del producto: ";
            int codigo;
            cin >> codigo;

            cout << "Ingrese el precio del producto: ";
            float precio;
            cin >> precio;
            CProducto* producto = new CProducto();
            producto->setNombreDelProducto(nombre);
            producto->setCodigoDelProducto(codigo);
            producto->setPrecio(precio);
            almacen->agregarProducto(producto);

            cout << "Producto agregado correctamente" << endl;

            system("pause");
            break;
        }
        case 2:
        {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::White;

            cout << "ELIMINAR PRODUCTO" << endl;
            Console::ForegroundColor = ConsoleColor::Green;

            cout << "Ingrese el codigo del producto: ";
            int codigo;
            cin >> codigo;
            almacen->eliminarProducto(codigo);

            cout << "Producto eliminado correctamente" << endl;

            system("pause");
            break;
        }
        case 3:
        {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::White;

            cout << "MOSTRAR PRODUCTOS" << endl;
            Console::ForegroundColor = ConsoleColor::Green;

            almacen->mostrarProductos();

            system("pause");
            break;
        }
        case 4:
        {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::White;

            cout << "SALIR" << endl;
            Console::ForegroundColor = ConsoleColor::Green;

            system("pause");
            break;
        }
        default:
        {
            Console::Clear();
            Console::ForegroundColor = ConsoleColor::White;

            cout << "OPCION INCORRECTA" << endl;
            Console::ForegroundColor = ConsoleColor::Green;

            cout << "Ingrese una opcion correcta" << endl;

            system("pause");
            break;
        }
      }
    } while (opcion != 4);

    delete almacen;
    delete productos;
}
