#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
   int n=0;
   double pi=0;
   cout << "Enter the value of the parameter 'n' in the leibniz formula (or -1 to quit):" << endl;
   cin >> n;
        
        while(n>-1){
        pi= 0;
            for (int i=0; i<=n; i++){
                pi = pi+4*((pow(-1,i))/(2*i+1));  
            }
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);  
        cout << "The approximate value of pi using term " << n+1 << " is: " << pi << endl;
        cout << "Enter the value of the parameter 'n' in the leibniz formula (or -1 to quit):" << endl;
        cin >> n;
        
        
        }
        return 0;
}