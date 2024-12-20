/**************************************************************************************
 *               P R O B L E M : A S ID E WA Y S T R I A N GL E                        *
 * Write a program that uses only two output statements, cout << "#" and cout << "\n", *
 *     to produce a pattern of hash symbols shaped like a sideways triangle:           *
 *                           #                                                         *
 *                           ##                                                        *
 *                           ###                                                       *
 *                           ####                                                      *
 *                           ###                                                       *
 *                           ##                                                        *
 *                           #                                                         *
 ***************************************************************************************/

#include <iostream>
using namespace std;

int main(/* args */)
{
    int sizeOfpattern = 9;
    char drawnCharacter = '*';

    for (int row = 0; row <sizeOfpattern ; row++)
    {
        if (row < sizeOfpattern / 2)
        {
            for (int numDraw = 0; numDraw <= row; numDraw++)
            {
                cout << drawnCharacter;
            }
        }
        else
        {
            for (int numDraw = sizeOfpattern- row; numDraw > 0; numDraw--)
            {
                cout << drawnCharacter;
            }
        }
        cout << endl;
    }

 cout << endl;
    return 0;
}