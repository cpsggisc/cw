#include <iostream>
using namespace std;

int fibdp(int n) {
    //int A[n];
    //A[0] = 1;
    //A[1] = 1;
    int prev1 = 1;
    int prev2 = 1;
    int curr;
    for (int i = 2; i < n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;   
        //A[i] = A[i-1] + A[i-2];
    }
    return curr;
}

/*
 fact(n) = n * fact(n-1)
 fact(5) = 5 * fact(4)
         = 5 * 4 * fact(3)
         = 5 * 4 * 3 * fact(2)
*/

int main() {
    
    cout << fibdp(100000);
    
    system("PAUSE");
    return 0;
}
