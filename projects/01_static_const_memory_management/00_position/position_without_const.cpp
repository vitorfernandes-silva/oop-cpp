#include <iostream>

using namespace std;

class Position{
    private:
    int x;
    int y;

    public:
        // Constructor
        Position(int a = 0, int b = 0){
            x = a;
            y = b;
        };

    void changeValues(){
        int temp;
        temp = y;
        y = x;
        x = temp;
    };

    void getPosition(){
        cout << "x = " << x << ";y = " << y << endl;
    };

};

int main(){

    Position position1(2,3);
    position1.getPosition();
    position1.changeValues();
    position1.getPosition();

    return 0;
}