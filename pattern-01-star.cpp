#include <iostream>

using namespace std;

int main() {
    // input
    int n;
    cin >> n;

    //output
    int i = 1;
    while (i <= n) {
        int j = 1, k = 1;
        while (k <= n-i) {
            cout << " ";
            k = k + 1;
        }
        while (j <= i) {
        	cout << "*";
        	j = j + 1;
        }        
    	cout << endl;
   		i = i + 1;
    }    

    return 0;
}
