#include <iostream>
using namespace std;
 
int main() {
                     
    int t;
    cin >> t;
 
    int sum_x = 0, sum_y = 0, sum_z = 0;
 
    while(t!=0) {
                         
        int x, y, z;
        cin >> x >> y >> z;
 
        sum_x += x;
        sum_y += y;
        sum_z += z;
 
        t--;
    }
 
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" ;
    } else cout << "NO" ;
    
 
    return 0;
}
