#include <iostream>
using namespace std;
void printRow(int k) {
    

    if (k == 0) {
        
        int leftStars = 11;
        int middleSpaces = 3;

        for (int i = 0; i < leftStars; i++) cout << "*";
        for (int i = 0; i < middleSpaces; i++) cout << " ";
        for (int i = 0; i < leftStars; i++) cout << "*";
    } else {
        
        int leftStars = 11 - k;        
        int innerStars = 2 * k - 1;    
        int sideSpaces = 2;            

    
        for (int i = 0; i < leftStars; i++) cout << "*";
        
        for (int i = 0; i < sideSpaces; i++) cout << " ";
        
        for (int i = 0; i < innerStars; i++) cout << "*";
        
        for (int i = 0; i < sideSpaces; i++) cout << " ";
    
        for (int i = 0; i < leftStars; i++) cout << "*";
    }

    cout << endl;
}

void recursiveDiamond(int k, int maxLevel) {
    
    printRow(k);

    if (k == maxLevel) {
        return;
    }

    recursiveDiamond(k + 1, maxLevel);

    printRow(k);
}

int main() {
    
    for (int i = 0; i < 25; i++) cout << "*";
    cout << endl;

    recursiveDiamond(0, 10);

    for (int i = 0; i < 25; i++) cout << "*";
    cout << endl;

    return 0;
}

