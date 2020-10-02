// Fibonacci Series using Optimized Method 
#include <bits/stdc++.h> 
#define int long long
#define mod 1000000007
using namespace std; 

void multiply(int F[2][2], int M[2][2]); 
void power(int F[2][2], int n); 

// Function that returns nth Fibonacci number 
int fib(int n) 
{ 
    int F[2][2] = {{1, 1}, {1, 0}}; 
    if (n == 0) 
        return 0; 
    power(F, n ); 

    return F[0][0]%mod; 
} 

void power(int F[2][2], int n) 
{ 
    if(n == 0 || n == 1) 
    return; 
    int M[2][2] = {{1, 1}, {1, 0}}; 
    
    power(F, n / 2); 
    multiply(F, F); 
    
    if (n % 2 != 0) 
        multiply(F, M); 
} 

void multiply(int F[2][2], int M[2][2]) 
{ 
    int x = (F[0][0] * M[0][0] + F[0][1] * M[1][0])% mod; 
    int y = (F[0][0] * M[0][1] + F[0][1] * M[1][1])% mod; 
    int z = (F[1][0] * M[0][0] + F[1][1] * M[1][0])% mod; 
    int w = (F[1][0] * M[0][1] + F[1][1] * M[1][1])% mod; 
    
    F[0][0] = x; 
    F[0][1] = y; 
    F[1][0] = z; 
    F[1][1] = w; 
} 

// Driver code 
int32_t main() 
{ 
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int dim,n;
        cin>>n;
        cout << fib(n)<<endl; 
    } 
    
    
    
    
    return 0; 
} 

// This code is contributed by Parag Varshney 
