#include <iostream>
using namespace std;
int main() { 
    int a=21, b=18; 
    int A = a&b; 
    int B = a|b;  
    int C = a^b; 
    int AP = ~a; 
    int BP = ~b; 
    int S = a<<1; 
    int s2 = b<<1; 
    int rS = a>>1; 
    int rS1 = b>>1; 
    
    cout << "Bitwise AND: " << A << "\n";
    cout << "Bitwise OR: " << B << "\n";
    cout << "Bitwise XOR: " << C << "\n";   
    cout << "Bitwise NOT of a: " << AP << "\n";
    cout << "Bitwise NOT of b: " << BP << "\n";
    cout << "Left shift of a: " << S<< "\n";
    cout << "Left shift of b: " << s2 << "\n";
    cout << "Right shift of a: " << rS << "\n";
    cout << "Right shift of b: " << rS1 << "\n";
    return 0; 
}

/*output:
Bitwise AND: 16
Bitwise OR: 23
Bitwise XOR: 7
Bitwise NOT of a: -22
Bitwise NOT of b: -19
Left shift of a: 42
Left shift of b: 36
Right shift of a: 10
Right shift of b: 9
    */
