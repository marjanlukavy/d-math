#include <iostream>
using namespace std;
#define SIZE 100

int FuncReflexsive(int Matrix[][SIZE],int NumberOfElementsForA, bool* Reflexsive)
{
    int i = 0;
    int k = 0;
    
    while (i < NumberOfElementsForA-1 && k < NumberOfElementsForA-1)
    {
        if (Matrix[i][k] == Matrix[i + 1][k + 1])
        {
            *Reflexsive = true;
        }
        else
        {
            *Reflexsive = false;
            break;
        }
        i++;
        k++;
    }
    
    return *Reflexsive;
}

int FuncSymmetrical(int Matrix[][SIZE], int NumberOfElementsForA, bool* Symmetrical)
{
    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        for (int k = 0; k < NumberOfElementsForA; k++)
        {
            if (Matrix[i][k] == Matrix[k][i])
            {
                *Symmetrical = true;
            }
            else
            {
                *Symmetrical = false;
                break;
            }
        }
    }

    return *Symmetrical;
}

int FuncTransitive(int Matrix[][SIZE], int NumberOfElementsForA, bool* Transitive)
{
    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        for (int k = 0; k < NumberOfElementsForA; k++)
        {
            for (int m = 0; m < NumberOfElementsForA; m++)
            {
                if ((Matrix[i][k] == 1) && (Matrix[k][m] == 1))
                {
                    if ((Matrix[i][k] == Matrix[k][m])&&(Matrix[i][k] == Matrix[i][m])&&(Matrix[k][m] == Matrix[i][m]))
                    {
                        *Transitive = true;
                    }
                    else
                    {
                        *Transitive = false;
                        break;
                    }
                }
                if (*Transitive == false)
                {
                    break;
                }
            }
        }
        if (*Transitive == false)
        {
            break;
        }
    }

    return *Transitive;
}

int main()
{
    int A[SIZE];
    int B[SIZE];

    int NumberOfElementsForA;
    int NumberOfElementsForB;

    cout << "Enter the size for A" << endl;
    cin >> NumberOfElementsForA;
    cout << "Enter the size for B" << endl;
    cin >> NumberOfElementsForB;

    cout << "Enter elements for A" << endl;

    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        cin >> A[i];
    }
    cout << "Elements of A" << endl;
    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        cout << A[i] << endl;
    }

    cout << "Enter elements for B" << endl;
    for (int i = 0; i < NumberOfElementsForB; i++)
    {
        cin >> B[i];
    }
    cout << "Elements of B" << endl;
    for (int i = 0; i < NumberOfElementsForB; i++)
    {
        cout << B[i] << endl;
    }

    int Matrix[SIZE][SIZE];

    int TrueOrFalse;

    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        for (int k = 0; k < NumberOfElementsForB; k++)
        {
            if ((2 * B[k]+1) > A[i])
            {
                TrueOrFalse = 1;
            }
            else
            {
                TrueOrFalse = 0;
            }

            Matrix[i][k] = TrueOrFalse;
        }
    }

    cout << "Matrix of relations" << endl;

    for (int i = 0; i < NumberOfElementsForA; i++)
    {
        for (int k = 0; k < NumberOfElementsForB; k++)
        {
            cout << Matrix[i][k] << "    ";
        }
        cout << endl<<endl;
    }

    if (NumberOfElementsForA != NumberOfElementsForB)
    {
        cout << "The matrix must be square in order to indicate the type of relation"<< endl;
        return 0;
    }

    bool Reflexsive = false;

    FuncReflexsive(Matrix, NumberOfElementsForA, &Reflexsive);
    cout <<"Reflexsive(if true = 1 ; if false = 0)    "<< Reflexsive<< endl;

    bool Symmetrical = false;

    FuncSymmetrical(Matrix, NumberOfElementsForA, &Symmetrical);
    cout<< "Symmetrical(if true = 1 ; if false = 0)    " << Symmetrical << endl;

    bool Transitive ;

    FuncTransitive(Matrix, NumberOfElementsForA, &Transitive);
    cout << "Transitive(if true = 1 ; if false = 0)    " << Transitive << endl;

    if ((Reflexsive == true) && (Symmetrical == true) && (Transitive == true))
    {
        cout << "This relation is equivalent" << endl;
    }
    else
    {
        cout << "This relation is NOT equivalent" << endl;
    }

    if ((Reflexsive == true) && (Symmetrical == true))
    {
        cout << "This relation is compatible" << endl;
    }
    else
    {
        cout << "This relation is NOT compatible" << endl;
    }

    if ((Reflexsive == true) && (Symmetrical == false) && (Transitive == true))
    {

        cout << "This relation is partial order" << endl;
    }
    else
    {
        cout << "This relation is NOT partial order" << endl;
    }

    if ((Reflexsive == false) && (Symmetrical == false) && (Transitive == true))
    {
        cout << "This relation is full order" << endl;
    }
    else
    {
        cout << "This relation is NOT full order" << endl;
    }

}
