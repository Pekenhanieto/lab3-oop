/*
 * Course: COEN 2220 - Programming 2
 * Name: Julian A. Pagan Hernandez
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Student class - exercise with TODOs
 * Due date: 09/03/26
 */

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int    id;
        double gpa;

    public:
        // ===== Resuelve estos TODO ahora (Parte C) =====

        // TODO (Parte C): Default constructor.
        // Inicializa name a "", id a 0, gpa a 0.0
        Student() {
            name = "";
            id = 0;
            gpa = 0.0;
        }
        // TODO (Parte C): setName(string n)
        // Solo asigna si n no esta vacio.
        void setName(string n) {
            if (!n.empty())
                name = n;
        }
        // TODO (Parte C): setGpa(double g)
        // Solo asigna si g esta entre 0.0 y 4.0 (inclusive).
        // Si no es valido, imprime un mensaje de error y no cambia el valor.
        void setGpa(double g) {
            if (g >= 0.0 && g <= 4.0) {
                gpa = g;
            } else {
                cout << "Error: Invalid GPA. Please enter a value between 0.0 and 4.0.\n";
            }
        }

        void setId(int newId) {
            id = newId;
        }

        // TODO (Parte C): Getters con const: getName(), getId(), getGpa()
        string getName() const { return name; }
        int getId() const { return id; }
        double getGpa() const { return gpa; }
        // TODO (Parte C): printInfo() const
        // Imprime name, id, y gpa con formato similar a Book::printInfo()
        void printInfo() const {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "GPA: " << gpa << endl;
        }
        // ===== No los toques todavia - les toca mas adelante =====

        // TODO (Parte D): Constructor with parameters (name, id, gpa).
        Student(string n, int newId, double newGpa) {
            name = n;
            id = newId;
            gpa = newGpa;
        }

        // TODO (Parte E): Destructor.
        // Imprime un mensaje indicando que el objeto Student con ese 'name' fue destruido.
        ~Student() {
            cout << "Student object destroyed: " << name << endl;
        }
};

int main() {
    // ===== Resuelve estos TODO ahora (Parte C) =====

    // TODO (Parte C): Crea un Student usando el constructor default,
    // asigna valores con los setters, e imprime con printInfo().
    Student s1;

    cout << " --- First Student ---\n";
    s1.setName("Anakin Skywalker");
    s1.setId(501);
    s1.setGpa(3.8);

    s1.printInfo();

    // TODO (Parte C): Prueba setGpa() con un valor invalido (ej. 5.0)
    // y confirma que el mensaje de error aparece y el gpa no cambia.
    s1.setGpa(7.0);
    
    // ===== No lo toques todavia - le toca mas adelante =====

    // TODO (Parte D): Crea un segundo Student usando el constructor con
    // parametros, con datos dummy (ej. "Alice Smith", 1001, 3.7).
    cout << "\n --- Second Student ---\n";
    Student s2("Obiwan Kenobi", 212, 4.0);

    s2.printInfo();
    cout << "\n";


    return 0;
}