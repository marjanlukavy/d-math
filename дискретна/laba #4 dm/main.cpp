#include<cstdio>
#include <iostream>
using namespace std;
int hm;
int disjoint(int * Source, int * Dest, int source, int dest) {
    int verdict = 0;
    for (int i = 0; i < 18; i++) {
        if(Source[i] == source) {
            verdict += 1;
            break;
        }
    }
    for (int i = 0; i < 18; i++) {
        if(Dest[i] == dest) {
            verdict += 1;
            break;
        }
    }
    return verdict;
}


int main()
{
//    cout << "Enter: ";
//    cin >> hm;
    int Source[18],Destination[18],Weight[18];

    for (int i = 0; i < 18; i++) {
        scanf("%d %d %d", &Source[i],&Destination[i],&Weight[i]);
    }
    for (int i = 0; i < 18; i++) {
        int select = Weight[i];
        int index = i;
        for (int j = i; j < 18; j++) {
            if(select > Weight[j]) {
                select = Weight[j];
                index = j;
            }

        }
        int temp;
        temp = Weight[i];
        Weight[i] = Weight[index];
        Weight[index] = temp;

        temp = Source[i];
        Source[i] = Source[index];
        Source[index] = temp;

        temp = Destination[i];
        Destination[i] = Destination[index];
        Destination[index] = temp;
    }
    for (int i = 0; i < 18; i++) {
        printf("%d %d %d\n", Source[i],Destination[i],Weight[i]);
    }
    cout << "\n";

    int finalSource[100],finalDest[100],finalWeight[100];
    int fIndex = 0;
            for (int i = 0; i < 18; i++) {
                if(disjoint(finalSource, finalDest,Source[i],Destination[i]) < 2) {
                    finalSource[i] = Source[i];
                    finalDest[i] = Destination[i];
                    finalWeight[i] = Weight[i];
                } else {
                    finalSource[i] = 0;
                    finalDest[i] = 0;
                    finalWeight[i] = 0;
                };
    }
            int result;
    for (int i = 0; i < 11; i++) {
        printf("%d %d %d\n", finalSource[i],finalDest[i],finalWeight[i]);
        result  += finalWeight[i];
    }
    cout << endl;
    cout << result;

    return 0;
}

//1 2 1
//1 3 2
//1 4 3
//2 5 4
//2 7 2
//3 5 7
//3 6 5
//4 6 2
//4 7 3
//5 8 4
//5 9 6
//6 8 7
//6 10 3
//7 9 5
//7 10 7
//8 11 4
//9 11 1
//10 11 4