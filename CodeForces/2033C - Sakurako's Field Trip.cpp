#include <bits/stdc++.h>
using namespace std ;

int solve(){
    int n ;
    cin >> n ;

    vector<int> numbers(n) ;
    for( int &x : numbers)cin >>x;

    for(int i = 1 ; i < n/2 ; i++){
        if(numbers[i]==numbers[i-1] or numbers[n-i] == numbers[n-i-1]){
            swap(numbers[i] , numbers[n-i-1]);
        }
    }
    int count = 0 ;

    for (int i = 1 ; i<n ; i++){
        if (numbers[i]==numbers[i-1]){
            count += numbers[i]==numbers[i-1];
        }
    }

    return count;
}


int main(){
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t ;
    vector<int> results;

    while(t--) results.push_back(solve());

    for (int result : results) {
        cout << result << endl;
    }
   return 0;
}
