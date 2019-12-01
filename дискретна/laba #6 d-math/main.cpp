#include <iostream>
int fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int C(int n, int k) {
    if (n == k || k == 0) {
        return 1;
    }
    std::cout << fact(n)/(fact(k)*( fact(n-k) ));
}
int power(char* ab,int p) {
    if(p==0) {
        std::cout << "";
    } else if(p == 1) {
        std::cout << ab;
    }else if(p>1) {
        std::cout << ab << "^" << p;
    }
    return 0;
}
int Binom(int n) {
    int r;
    int r1;
    int r2;
    for (int i = 0,j=n; i < n+1; i++) {
        r = C(n,i);
        r1 = power("a", j);
        r2 = power("b", i);
        if(i <= n-1) {
            std::cout << "+";
        }
        j--;
    }
//
//    cout << endl;
//            C(4,0)*power("a", 4)*power("b", 0);
//    cout<< "+";
//            C(4,1)*power("a", 3)*power("b", 1);
//    cout<< "+";
//            C(4,2)*power("a", 2)*power("b", 2);
//    cout<< "+";
//            C(4,3)*power("a", 1)*power("b", 3);
//    cout<< "+";
//            C(4,4)*power("a", 0)*power("b", 4);
    return 0;
}
int main() {
    Binom(5);
    return 0;
}