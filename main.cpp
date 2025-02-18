#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int count;
    cout << "How many matrices?" << endl;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int r, c;
        cout << "How many rows you need in matrix number " << i + 1 << endl;
        cin >> c;
        cout << "How many columns you need in matrix number " << i + 1 << endl;
        cin >> r;
        
        int Matrix[r][c];

        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                int randomNumber = rand() % 41 - 20; // Generates a random number in the range -20 to 20
                Matrix[j][k] = randomNumber;
            }
        }
        
        cout << "Matrix number " << i + 1 << ":" << endl;
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                cout << Matrix[j][k] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
