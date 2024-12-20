#include<iostream>
#include<iomanip>
using namespace std;

 

/***************************************************
 *      void print_joint(char symbol, int times)   *
 *              print_separators/joints            *
 ***************************************************/

void print_joint(char symbol, int times)
{
    for (int time = 0; time < times; time++)
    {
        cout << symbol;
    }
}
/***************************************************
 * void  print_space(int space)
 * print whitespace in console using std::cout                      
 ***************************************************/
void print_space(int space)
{
    for (int indent = 0; indent < space; indent++)
    {
        cout << " ";
    }
}


/****************************************************
 * void setTextColor(int color)
 *                  setTextColor                    *
 *       Sets the terminal text color using ANSI    *
 *           escape codes.                          *
 ****************************************************/
void setTextColor(int color)
{
    cout << "\033[" << color << "m";
}

/*******************************************************
 * void print_array_elements(string var[][2], int size)
 *             print_array_elements                    *
 *******************************************************/

void print_array_elements(string var[][2], int size)
{
    print_joint('`', 60);
    for (int row = 0; row < size; row++)
    {

        if (row % 2 == 0)
            cout << '`'<< endl;

        for (int col = 0; col < 1; col++)
        {
            cout << '`' << setw(4) << "(" << var[row][col] << ")" << "  " << var[row][col + 1] << setw(32 - var[row][col + 1].length() - 11) << "";
        }

         if (row+1 == size)
            cout << '`' << endl;

    }
}



/***************************************************
 * int randomly(int lowerLimit, int maxRange)
 *             Random numbers                      *
 ***************************************************/
int randomly(int lowerLimit, int maxRange)
{   
    return lowerLimit + rand() % maxRange;
}

/***************************************************
 * char randomlyASCIIChar(int from, int maxiRange)
 *             Random ASCII Aplhabets               *
 ***************************************************/
char randomlyASCIIChar(int from, int maxiRange)
{ 
    char ascIChar = from + rand() % maxiRange;
    return ascIChar;
}
/***************************************************
 * void resetConsoleColor()
 * Reset Console Color to system color             *
 ***************************************************/
void resetConsoleColor(){
     // Reset text color to default
        cout << "\033[0m";
        cout << endl;
}
