#include <iostream> 

using namespace std; 

class A { 
    public: 
        static int y; 

        void addX(){
            y = y + 1;
            cout << y << endl; 
        }
};

int A::y = 0; 

void func(){ 
    // persists throughout the lifetime of the program
    static int x = 0; 
    cout << "X: " << x << endl; 
    x++; 
}

int main(){ 
    func(); 
    func(); 
    func(); 

    cout << endl; 

    A obj; 
    A object; 
    obj.addX(); 
    obj.addX(); 
    object.addX(); 
    obj.addX();
}