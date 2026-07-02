#include <iostream>
using namespace std;

int Square_j(){
    cout << "Enter n:";
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}

int ASCII_patt(){
    int n;
    cout <<"Enter n:";
    cin >> n;
    for(int i=0;i<=n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout << ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

int sqNumPatt(){
    int n;
    cout <<"Enter rows:";
    cin >> n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << k;
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}

int sqCharPatt(){
    int n;
    cout <<"Enter rows:";
    cin >> n;
    
    char ch='A'; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

int sqStars(){
    cout << "Enter n:";
    int n;
    cin>> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout<<"\n";
    }
    return 0;
}

int star1(){
    cout <<"Enter n :";
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int star1rev(){
    cout <<"Enter n :";
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
// ---------------------------------------------- //
int main(){
    
    cout << "Enter case:";
    int Case;
    cin >> Case;


    switch (Case)
    {
        case 1:
        Square_j();
        break;

        case 2:
        sqStars();
        break;

        case 3:
        ASCII_patt();
        break;

        case 4:
        sqNumPatt();
        break;

        case 5:
        sqCharPatt();
        break;

        case 6:
        star1();
        break;

        case 7:
        star1rev();
        break;

    default:
        break;
    }
}