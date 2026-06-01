#include <iostream> 

using namespace std; 

class Person{
    public: 
        string name; 
        int age; 

        Person(string name, int age){
            this->name = name; 
            this->age = age; 
        }
}; 

// Single level inheritance
class Student : virtual public Person {
    public: 
        int rollnum; 
    
    Student(string name, int age, int rollnum) : Person(name, age), rollnum(rollnum){
    }
    void getInfo(){ 
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl; 
        cout << "Roll No.: " << rollnum << endl; 
    }
}; 

class Teacher : virtual public Person{
    public: 
        string subject; 
        double salary; 

    Teacher(string name, int age, string subject, double salary) : Person(name, age), subject(subject), salary(salary){
    }
}; 

class TeachingAssitant : public Student, public Teacher { 
    public: 
        string course;
    
    TeachingAssitant(
        string name, int age, int rollnum, string subject, double salary, string course
    ) :
    Person(name, age), 
    Student(name, age, rollnum), 
    Teacher(name, age, subject, salary), 
    course(course){
    }
}; 

// Multi level inheritance
class GradStudent : public Student{ 
    public: 
        string researchArea; 

    GradStudent(string name, int age, int rollnum, string researchArea) :  Person(name, age), Student(name, age, rollnum), researchArea(researchArea){
    }

    // override getInfo() method
    void getInfo(){
        Student::getInfo(); 
        cout << "Research Area: " << researchArea << endl << endl; 
    }
};

 
int main(){ 
    // SINGLE LEVEL INHERITANCE
    Student student("Deepak", 20, 166); 
    student.getInfo(); 
    
    // MULTI-LEVEL INHERITANCE
    GradStudent studentTwo("Prateek", 25, 169, "Nano Technology"); 
    studentTwo.getInfo(); 

    // Diamond Problem (Virtual Inheritance)
    TeachingAssitant TA("Deepak", 20, 166, "C++", 50000, "Machine Learning");
    TA.getInfo(); 

}