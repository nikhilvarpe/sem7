#include<iostream>
using namespace std;

int steps = 0;

int Recursive_Fib(int n){
    steps++;
    if(n <= 1)
        return n;

    return Recursive_Fib(n-1) + Recursive_Fib(n-2);
    

}


void Iterative_Fib(int n){
    int a = 0, b = 1, fib;

    if(n >= 0) 
        cout<< a << "  ";
    if(n >= 1)
        cout<< b << "  ";

    for(int i=2; i<n; i++){
        fib = a+b;
        cout<< fib << "  ";
        a = b;
        b = fib;
    }
    
}

int main(){
    int n ,i = 0;
    cout<<"Enter the value of n :";
    cin>>n;

    // Recursive
    cout<<"********* Using recursive method **********"<<endl;
    while(i < n) {
      cout<< Recursive_Fib(i)<< "  " ;
      i++;
    }
    cout<<endl;
    cout<<"Steps required for recursive approach : "<<steps<<endl<<endl;

    // Non-Recursive
    cout<<"********* Using iterative method **********"<<endl;

    Iterative_Fib(n);

    cout<<endl;
    cout<<"Steps required for iterative approach : "<<n<<endl;

    return 0;
}

/*
    // Time and Space Complexity of Recursive Fibonacci:
   ==> 
    Time Complexity: O(2^n) because it solves two subproblems (n-1 and n-2) recursively for every call.
    Space Complexity: O(n) due to the recursion stack, where the maximum depth of recursion is n.
                      Maximum depth of the call stack : The deepest recursive path is from fibonacciRecursive(n) to fibonacciRecursive(1), 
                      which makes n recursive calls before returning.
                      Thus, the recursion depth is O(n)


    // Time and Space Complexity of Non-Recursive Fibonacci:
   ==> 
    Time Complexity: O(n) because there is a single loop from 2 to n.
    Space Complexity: O(1) since only a few variables (a, b, and fib) are used, irrespective of n.


*/

