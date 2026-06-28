#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;

    if (n>=1){
        for(int i=2; i<n; i++){
            if(n%i==0){
                cout<< n <<" is Non-Prime number\n";
                // break;
                return 0;
            }
        }
        cout<< n << " is a prime Number";
    }
    else{
        cout << "cannot be classified as prime/non-prime\n";
    }
    return 0;
}