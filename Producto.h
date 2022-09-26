//clase Producto
class CProducto
{
private:
    string nombreDelProducto;
    int codigoDelProducto;
    float precio;

public:
    CProducto(){}
    ~CProducto(){}

//metodos
//seters
    void setNombreDelProducto(string nombreDelProducto)
    {
        this->nombreDelProducto = nombreDelProducto;
    }
    void setCodigoDelProducto(int codigoDelProducto)
    {
        this->codigoDelProducto = codigoDelProducto;
    }
    void setPrecio(float precio)
    {
        this->precio = precio;
    }
    //geters
    string getNombreDelProducto()
    {
        return nombreDelProducto;
    }
    int getCodigoDelProducto()
    {
        return codigoDelProducto;
    }

    float getPrecio()
    {
        return precio;
    }

};
