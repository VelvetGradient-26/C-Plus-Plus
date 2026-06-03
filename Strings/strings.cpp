#include <iostream> 

using namespace std; 

int main(){ 
    // dynamic -> runtime resize
    string str = "Hello, World!"; 
    cout << str << endl; 

    // concatenation
    string str1 = "Hello";
    string str2 = "World"; 
    
    cout << str1 + str2 << endl; 
    
    // comparison
    cout << (str1 == str2) << endl; // equality

    // less than or greater than (lexographically)
    cout << (str1 < str2) << endl; 

    // access length of the string
    cout << "Length of the String: " << str.length() << endl; 

    // string input
    string str3; 
    getline(cin, str3); 
    cout << str3 << endl; 

    // iterate through a string
    for(int i=0; i<str.length(); i++){
        cout << str[i] << " "; 
    }

    // reverse a string
    string str4; 
    for(int i=str.length(); i>=0; i++){
        str4[i] = str3[i]; 
    }
    
}