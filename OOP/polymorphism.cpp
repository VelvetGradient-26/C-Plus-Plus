#include <iostream>

using namespace std; 

class Student{ 
public: 
    string name; 

    Student(){
        cout << "This is a non-parametrized constructor" << endl; 
    }

    Student(string name){ 
        this->name = name; 
        cout << "This is a parametrized constructor" << endl; 
    }
};

class Print{ 
    public: 
        void show(int x){
            cout << "int: " << x << endl; 
        }

        void show(char ch){
            cout << "char: " << ch << endl; 
        }

        void show(string str){ 
            cout << "String: " << str << endl; 
        }
}; 

class Parent{ 
    public: 
        void getInfo(){
            cout << "parent class\n"; 
        }
}; 

class Child : public Parent{
    public: 
        void getInfo(){
            cout << "chid class\n";
        }
};

int main(){
    // constructor overloading
    Student s1; 
    Student s2("Deepak"); 

    // function overloading
    Print print; 
    print.show(10); 
    print.show("Hello, World!"); 

    // function overrriding
    Parent parent; 
    parent.getInfo();

    Child child; 
    child.getInfo(); 
}