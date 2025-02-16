#include <iostream>
using namespace std;

// Patterns for each character in 5x5 grid format using stars
const char *M[5] = {
    "*   *",
    "** **",
    "* * *",
    "*   *",
    "*   *"};

const char *A[5] = {
    " *** ",
    "*   *",
    "*****",
    "*   *",
    "*   *"};

const char *H[5] = {
    "*   *",
    "*   *",
    "*****",
    "*   *",
    "*   *"};

const char *F[5] = {
    "*****",
    "*    ",
    "**** ",
    "*    ",
    "*    "};

const char *U[5] = {
    "*   *",
    "*   *",
    "*   *",
    "*   *",
    " *** "};

const char *J[5] = {
    "*****",
    "    *",
    "    *",
    "*   *",
    " *** "};

// Function to get the pattern array for a given character
const char **getPattern(char ch)
{
    switch (ch)
    {
    case 'M':
        return M;
    case 'A':
        return A;
    case 'H':
        return H;
    case 'F':
        return F;
    case 'U':
        return U;
    case 'J':
        return J;
    default:
        return nullptr;
    }
}

int main()
{
    // The name to be printed in the pattern

    cout<<endl<<endl<<endl;
    string name = "MAHFUJ";

    
    for (int row = 0; row < 5; ++row)
    {
        for (char ch : name)
        {
            const char **pattern = getPattern(ch);
            if (pattern)
            {
                cout << pattern[row] << "  "; 
            }
        }
        cout << endl; 

    return 0;
}
}
