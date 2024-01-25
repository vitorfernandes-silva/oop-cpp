#include <iostream>

using namespace std;

int main(){

    int vector[] {1,2,3,4,5,6,7,8,9,10};

    cout << "Traversing the vector in the normal way: " << endl;
    for (int i = 0; i < 10; i++){
        cout << vector[i] << " - ";
    }

    cout << "\n\nTraversing the vector with range-for: " << endl;
    for (int x : vector){
        cout << x << " - ";
    }


    return 0;
}
