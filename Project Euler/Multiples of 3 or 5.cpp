// Q - If we list all the natural numbers below 10 that are multiples of 3 or 5 , we get 3 , 5 , 6 and 9 The sum of these multiples is 23 Find the sum of all the multiples of
//3 or 5 below 1000 .

// so first get multiples of 3 -> 999 / 3 = 333
// second get multiples 5 -> 995 / 5 = 199
// then we need the sum we use { ( N *(N+1) ) / 2 } formula 
// then remove duplicate so ( 3 * 5 = 15 ) 990 / 15 = 66 
// Final answer = 233168

#include <iostream>
using namespace std;
long long sumOfMultiples(int k, int limit) {
    int n = (limit - 1) / k;  
    return k * (n * (n + 1)) / 2;
}

int main() {
    int limit = 1000;
    long long sum3 = sumOfMultiples(3, limit);
    long long sum5 = sumOfMultiples(5, limit);
    long long sum15 = sumOfMultiples(15, limit);  
    long long totalSum = sum3 + sum5 - sum15;

    cout << totalSum << endl;

    return 0;
}
