/* Consider a staircase of size
 *
 *
 *
 *    #
 *   ##
 *  ###
 * ####
 *
 * Observe that its base and height are both equal to
 * , and the image is drawn using # symbols and spaces.
 * The last line is not preceded by any spaces.
 * Write a program that prints a staircase of size */

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < (n - 1) - i; k++) {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++) {
            cout << "#";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
