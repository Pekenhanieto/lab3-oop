/*
 * Course: COEN 2220 - Programming 2
 * Name: Julian A. Pagan Hernandez
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Converting a struct to a class with encapsulation
 * Due date: 09/03/26
 */

#include <iostream>
using namespace std;

struct RectangleStruct
{
    double width;
    double height;
};

// TODO (Parte F): Declara e implementa RectangleClass aqui abajo,
// convirtiendo RectangleStruct a una class con encapsulacion real:
//   - width y height como miembros privados
//   - setWidth(double) y setHeight(double) que solo acepten valores > 0
//     (si el valor no es valido, no lo asignes, y no hace falta mensaje de error aqui)
//   - getWidth() const y getHeight() const
//   - getArea() const

class RectangleClass {

    private:
        double width;
        double height;

    public:
        // Default constructor
        void setWidth(double w) {
            if (w > 0)
                width = w;
        }
        void setHeight(double h) {
            if (h > 0)
                height = h;
        }

        double getWidth() const { return width; }
        double getHeight() const { return height; }
        double getArea() const { return width * height; }

};

int main() {
    // Esto compila hoy, sin ningun problema - y ese es el problema:
    RectangleStruct r;
    r.width = -5.0;    // no tiene sentido, pero nada lo impide
    r.height = 3.0;
    cout << "Struct area (con ancho invalido): " << (r.width * r.height) << endl;

    // TODO (Parte F): Crea un objeto de tipo RectangleClass, intenta asignarle un
    // width negativo con setWidth(), y confirma que NO se acepta
    // (el area calculada con datos validos previos, si los hubo,
    // deberia quedar intacta).

    RectangleClass r2;
    r2.setWidth(-5.0);  // no se acepta
    r2.setHeight(3.0);
    cout << "Class area (con ancho invalido): " << r2.getArea() << endl;

    return 0;
}