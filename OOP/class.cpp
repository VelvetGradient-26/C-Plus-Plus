#include <iostream>

using namespace std; 

class Teacher{
    // PROPERTIES
    private: 
        double salary;

    public: 
        string name; 
        string dept; 
        string subject; 

        // non - parametrized constructor
        Teacher(){
            cout << "Object Instanciated!" << endl << endl;
        }

        // parametrized constructor
        Teacher(string name, string dept, string subject){
            this->name = name; 
            this->dept = dept; 
            this->subject = subject;  
        }

        // copy constructor
        Teacher(Teacher &object) {
            this->name = object.name; 
            this->dept = object.dept; 
            this->subject = object.subject;

            cout << "This is from copy constructor" << endl; 
        }
    
        // METHODS (member functions)
        void changeDept(string newDept){
            dept = newDept; 
        }

        // setter
        void setSalary(int s){
            salary = s; 
        }

        // getter
        double getSalary(){
            return salary; 
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl; 
            cout << "Department: " << dept << endl; 

            setSalary(25000); 

            cout << "Salary: " << getSalary() << endl << endl;
        }
};

class Student{
    public: 
        string name;
        float* cgpaPointer; 

        Student(string name, float cgpa){
            this->name = name; 
            cgpaPointer = new float; 
            *cgpaPointer = cgpa; 
        }

        // Copy Constructor
        Student(Student &object){
            this->name = object.name; 
            cgpaPointer = new float; 
            *cgpaPointer = *object.cgpaPointer; 
        }

        // Destructor
        ~Student(){
            cout << "Object Deleted!" << endl;
            delete cgpaPointer;
        }

        void getInfo(){ 
            cout << "Name: " << name << endl; 
            cout << "CGPA: " << *cgpaPointer << endl << endl; 
        }
};

int main(){
    Teacher tee; 

    Teacher teacher("Deepak", "CSE", "C++");  
    teacher.getInfo();

    // default copy constructor
    Teacher t2(teacher);
    t2.getInfo(); 

    Student student("Prateek", 8.5); 
    student.getInfo();

    // shallow copy
    Student s2(student);
    *(s2.cgpaPointer) = 9.2; 
    s2.name = "Deepak";
    s2.getInfo(); 

    student.getInfo(); 
}