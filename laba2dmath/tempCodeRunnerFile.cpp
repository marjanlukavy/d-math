#include <iostream>
#include <ctime>
#include <set>
 
using namespace std;
 
int main() {
    char A[26]{ 0 };
    for (int i = 0; i<5; i++) {
        cin >> A[i];
    }
    for (int i = 0; i<5; i++) {
        cout << A[i];
    }
    return 0;
}
