class CAlmacen
{
private:
    CProducto** listaProductos;
    int cantidadDeProductos;
public:
    CAlmacen(CProducto* _productos)
    {
        cantidadDeProductos = 1;
        listaProductos = new CProducto* [cantidadDeProductos];
        listaProductos[0] = _productos;
    }
    ~CAlmacen()
    {
    }
    void setcantidadDeProductos(int cantidadDeProductos){
      this->cantidadDeProductos = cantidadDeProductos;
    }
    int getcantidadDeProductos(){
      return cantidadDeProductos
    }
    void agregarProducto(CProducto*_productos)
    {
        CProducto** aux = new CProducto* [cantidadDeProductos + 1];
        for (int i = 0; i < cantidadDeProductos; i++)
        {
            aux[i] = listaProductos[i];
        }
        delete[] listaProductos;
        listaProductos = nullptr;
        aux[cantidadDeProductos] = _productos;
        listaProductos = aux;
        cantidadDeProductos++;
    }

    void eliminarProducto(int codigo)
    {
        for (int i = 0; i < cantidadDeProductos; i++)
        {
            if (listaProductos[i]->getCodigoDelProducto() == codigo)
            {
                listaProductos[i] = listaProductos[cantidadDeProductos - 1];
                cantidadDeProductos--;
                break;
            }
        }
    }

    void mostrarProductos()
    {
        cout << "Lista de productos" << endl;
        for (int i = 0; i < cantidadDeProductos; i++)
        {
            cout << "La cantidad de Productos" << productos->getcantidadDeProductos() << endl;
            cout << "Nombre del producto: " << listaProductos[i]->getNombreDelProducto() << endl;
            cout << "Codigo del producto: " << listaProductos[i]->getCodigoDelProducto() << endl;
            cout << "Precio del producto: " << listaProductos[i]->getPrecio() << endl;
            cout << "---------------------------------" << endl;
        }
    }
};