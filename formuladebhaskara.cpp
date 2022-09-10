#include <iostream>
#include <cmath>

using namespace std;
int main (){
    
    double A, B, C, X, delta, root1, root2;

    cin >> A >> B >> C;
    
    if (A != 0){
        delta = (B*B) - (4*A*C);

        if(delta<0){
            cout <<"Impossivel calcular" << endl;
        }
        else if (delta==0){
            root1=(-B)/(2*A);
            cout << "Impossivel calcular"<<endl;
        }else{
            root1=(-B - sqrt(delta))/(2*A);
            root2=(-B + sqrt(delta))/(2*A);
            cout.precision(5);
            cout << fixed;
            cout << "R1 = "<<root2<<endl;
            cout << "R2 = "<<root1<<endl;
        }
    }else{
        cout <<"Impossivel calcular" << endl;
    }

    return 0;
}