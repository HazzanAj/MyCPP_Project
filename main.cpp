#include <iostream>
using std :: cout;
using std :: cin;

double performAddOperation ( double x, double y )
{

    return x + y;
}
double performMulOperation ( double w, double z )
{

    return w * z;
}
double performSubOperation ( double j, double k )
{

    return j - k;
}
int main() {
    double x, y, w, z, j, k;
    cout << " Add Operation Begins\n";
    cout << " enter x value";
    cin >> x;
    cout << " Enter y value ";
    cin >> y;
    double myAddOperation = performAddOperation(x, y);
    cout << myAddOperation << std::endl;

    cout << " Mul Operation Begins\n";
    cout << " enter w value";
    cin >> w;
    cout << " Enter z value ";
    cin >> z;
    double myMulOperation = performMulOperation(w, z);
    cout << myMulOperation << std::endl;

    cout << " Sub Operation Begins\n";
    cout << " enter j value";
    cin >> j;
    cout << " Enter k value ";
    cin >> k;
    double mySubOperation = performSubOperation(j, k);
    cout << mySubOperation << std::endl;

    for (int i = 0; i <= 1; i++) {
        cout << " Add operation value is :" << myAddOperation << std::endl;
        cout << " Mul operation value is :" << myMulOperation << std::endl ;
        cout << " Sub operation value is :" << mySubOperation << std::endl;
    }
    if (myAddOperation == 2000) {
        cout << "First Winner is : Add Operation\n";
    }else if( myMulOperation == 2000){
        cout << "First Winner is : Mul Operation\n";
    } else if ( mySubOperation ==2000){
        cout<< " First Winner is : Sub Operation\n";
    } else {
        cout<< " Sorry try again no winner!!";
    }


}