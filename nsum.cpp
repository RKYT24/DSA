#include <iostream>
using namespace std;
/*
int main(){
    cout << "For looooop";
    int n;
    cout << "Enter n: ";
    cin >> n ;
    int sum=0;
    
    for(int i = 1; i <= n; i++){
        sum+=i;
        }
        cout << sum;
        return 0;
        }
*/
       
int main(){
    cout << "While looooop";
    int n;
    cout << "Enter n: ";
    cin >> n ;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << sum;
}
