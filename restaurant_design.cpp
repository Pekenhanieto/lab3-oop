/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Class skeletons - restaurant case design
 * Due date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;

// Reminder of the scenario (see "Contexto" above for the full version):
// "A restaurant takes orders from tables. Each order has a list of
//  dishes, each with a name and a price. At the end, the restaurant
//  calculates the order total, including a 10% service charge."

// TODO (Parte G): Declara la clase Dish.
//   - Miembros privados que necesita saber un plato (piensa en tu
//     respuesta a la pregunta 1 de arriba).
//   - Constructor(es) que consideres necesarios.
//   - Getters para sus atributos.
//   No hace falta implementar el cuerpo de cada funcion - un prototipo
//   dentro de la clase es suficiente para este ejercicio.

    class Dish {

    private:
        string name;
        double price;
    public:
        Dish(string n, double p);
        string getName() const;
        double getPrice() const;
    };

// TODO (Parte G): Declara la clase Order.
//   - Como guarda la lista de platos (ver tu respuesta a la pregunta 2).
//   - Necesita un metodo para calcular el total, incluyendo el 10%
//     de cargo de servicio - decide tu si ese calculo vive aqui o
//     en Restaurant (ver tu respuesta a la pregunta 3).

    class Order {
        //List of dishes
    private:
        Dish* dishes;
        int numDishes;
    public:
        Order(Dish* d, int n);
        double calculateTotal() const;
        // Add a dish to the order
        void addDish(const Dish& dish);
        void removeDish(const string& dishName);

        void getDishes(Dish*& d, int& n) const {
            d = dishes;
            n = numDishes;
        }
        // Print the order details
        void printDetails() const {
            cout << "Order Details:\n";
            for (int i = 0; i < numDishes; ++i) {
                cout << "Dish: " << dishes[i].getName() << ", Price: " << dishes[i].getPrice() << endl;
            }
        }
        

        void total() const {
            
            double total = calculateTotal();
            total += total * 0.1; // Adding 10% service charge
            cout << "Total (including 10% service charge): " << total << endl;
        }

    };




// TODO (Parte G, opcional): Declara Restaurant si decidiste que el
// calculo del cargo de servicio le pertenece a esta clase en vez de
// a Order.

int main() {
    cout << "Esqueletos de diseno - sin logica de ejecucion en este bloque.\n";
    return 0;
}