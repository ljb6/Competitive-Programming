#include <iostream>
#include <stdbool.h>

using namespace std;

int main() {
    int A, B, C, D; cin >> A >> B >> C >> D;

    bool possible = false;

    for (int i = 0; i <= C; i += D) {
        int leite = C - i;
        if (leite >= A && leite <= B) possible = true;
    }

    if (possible) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}