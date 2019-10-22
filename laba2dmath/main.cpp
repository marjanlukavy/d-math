#include <iostream>
#include <locale>
#include <vector> /* об'єкт vector  */
#include <algorithm> /* sort for_each set_union і інші */

using namespace std;
const int SIZE = 26;


  void Print(char *a, int n, int i)
  {
     if (n)
     {
         if (n & 1)
            cout << a[i] << " ";
         Print(a, n >> 1, i + 1);
     }
  }

int  main() {
    char A[SIZE]{ 0 };
    char B[SIZE]{ 0 };
    int s,s2,k,r,size;

    cout << "Enter size1: ";
    cin >> s;
    cout << "Enter size2: ";
    cin >> s2;
    
    cout << "Enter 1 array: ";
    // 1 array
    for (int i = 0; i<s; ++i) {
        cin >> A[i];
    }
    
    for (int i = 0; i<s; ++i) {
        cout << A[i] << endl;
    }
    // 2 array
    cout << "Enter 2 array: ";

    for (int i = 0; i<s2; ++i) {
        cin >> B[i];
    }
    
    for (int i = 0; i<s2; ++i) {
        cout << B[i] << endl;
    }
    

    char C[100];
    int i = s;
    for (int k = 0; k < s; k++) {
        C[k] = A[k];
    }
    
        for (int k = 0; k < s2; k++) {
            C[i] = B[k];
            i++;
        }
    cout << " *************A+B********** ";

    for (int k = 0; k < s+s2; k++) {
          cout << C[k];
          cout << "\n";
      }
   

        int n = (s + s2) + 1;
        for(int i=0;i<n;++i)
            for(int j=i+1;j<n;)
            {
                if(C[i]==C[j])
                {
                    for(k=j;k<n-1;++k)
                        C[k]=C[k+1];
                --n;
                }
                else
                ++j;
            }
    cout << "New array: ";

    for (int k = 0; k < s+s2; k++) {
        cout << C[k];
    }
    cout << "\n";
    
    
    size = sizeof(C) / sizeof (*C);
    r = 1 << size;
    for (i = 0; i < r; i++)
    {
       Print(C, i, 0);
       cout << "\n";
    }

       return 0;
}



