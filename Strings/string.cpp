#include <iostream> 

using namespace std; 

int main(){ 
    // string as a character array
    char str[] = {'H', 'e', 'l', 'l', 'o',',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; 

    cout << str << endl; 

    cout << "Length of String: " << strlen(str) << endl; 

    // taking a string input as a character array
    char string[100]; 

    // cout << "Enter your string: "; 
    // cin >> str; // stops reading after a space (the remaining characters are stored in buffer)
    // cout << str <<endl; 

    cout << "Enter your string: "; 
    cin.getline(str, 100); // has an optional delimiter argument
    cout << str; 

    // Manually calculate length of the string
    int len = 0; 
    for(int i=0; str[i] != '\0'; i++){
        len++; 
    }

    cout << "Length of string: " << len << endl; 

}