/**********************************************************************
 *           P R O BL E M : H A L F O F A S Q U A R E                  *
 *       Write a program that uses only two output statements,         *
 *                cout << "#" and cout << "\n",                        *
 *       to produce a pattern of hash symbols shaped like              *
 *        half of a perfect 5 x 5 square (or a right triangle):        *
 *                       #####                                         *
 *                       ####                                          *
 *                       ###                                           *
 *                       ##                                            *
 *                       #                                             *
 *                                                                     *
 ***********************************************************************/

#include <iostream>  //input ,output library
#include <algorithm> // algorithm
#include <chrono>    // time management
#include <cstdlib>   // system control like commands
#include <thread>    // process management
#include <iomanip>
#include "./classes/my_shape_drawer.h" // drawing shapes
using namespace std;

void print_array_elements(string var[][2], int size);
void print_joint(char symbol, int times);
int randomly(int lowerLimit, int maxRange);
void setTextColor(int color);
char randomlyASCIIChar(int from, int maxiRange);
// global
const char separator = '"';

int main()
{
    int size = 0;
    char symbol, choice;
    string drawAgain = "no";
    string availableChoices[][2] = {{"a", "Circle"}, {"b", "Triagle"}, {"c", "Square"}, {"d", "Rombus"}, {"e", "Trapezium"}, {"f", "Sideway Triangle"}, {"g", "Rectangle"}, {"*", "Random"}};
    unsigned seed = time(0);
    srand(seed);

    do
    {
        print_joint(separator, 60);
        cout << endl;
        cout << separator << setw(4) << "    This Program draws the following Shapes  on Console. \n";
        cout << separator << setw(10) << "       Choose Pattern to Draw. \n";
        print_joint(separator, 60);
        cout << endl;

        print_array_elements(availableChoices, 8);
        print_joint(' ', 60);
        cout << endl;
        print_joint(separator, 60);
        cout << endl;
        cout << endl;

        cout << "Select Pattern you want to draw from figure above  : ";
        cin >> choice;
        while (/* condition */ choice == ' ')
        {
            cout << "Insert Pattern latter .";
            cin >> choice;
        }

        cout << "Provide the Dimension of Pattern you want to draw  : ";
        try
        {
            /* code */
            cin >> size;

            // validating
            while (size < 2)
            {

                cout << "Dimension of Pattern to draw should be atleast 2.\n";
                cout << "Provide the Dimension of Pattern you want to draw  :";
                cin >> size;
            }
        }
        catch (int &e)
        {
            cout << "This program accepts intergers " << e;
        }
        catch (char &e)
        {
            cout << "This program accepts intergers " << e;
        }
        catch (string &e)
        {
            cout << "This program accepts intergers " << e;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        cout << "Provide a symbol to used to draw : ";
        cin >> symbol;
        while (symbol == ' ')
        {

            cout << "Provide any symble not space.\n";
            cout << "Provide a symbol to used to draw : ";
            cin >> symbol;
        }

        //
        MyShapes shape(symbol, size);
        setTextColor(randomly(90, 10));

        // choose random char
        if (choice == '*')
            choice = randomlyASCIIChar(97, 7);

        cout << endl;
        cout << endl;
        /* code */
        switch (choice)
        {
            /* constant-expression */
        case 'a':
            /* code */
            shape.circle();
            break;

        case 'b':
            shape.triangle();
            break;

        case 'c':
            shape.square();
            break;

        case 'd':
            shape.rhombus();
            break;

        case 'e':
            shape.trapezium();
            break;

        case 'f':
            shape.sideway_triangle();
            break;

        case 'g':
            shape.rectangle();
            break;
        default:
            cout << "The Pattern selected  isnt availabe "<< endl;
            print_joint(separator, 40);
            break;
        }

        // Reset text color to default
        cout << "\033[0m";
        cout << endl;
        cout << endl;

        cout << "Do you wants to draw again  Yes (y) / No (n): ";
        cin >> drawAgain;

        transform(drawAgain.begin(), drawAgain.end(), drawAgain.begin(), ::tolower);

        /* code */
        if (drawAgain == "yes" || drawAgain == "y")
        {
            drawAgain = "yes";
            system("clear");
        }
        else if (drawAgain == "no" || drawAgain == "n")
        {
            system("clear");
            drawAgain = "no";
            cout << "Thank You !.";
            this_thread::sleep_for(chrono::seconds(2));

            exit(0);
        }
        else
        {

            cout << "Do you wants to draw again  Yes (y) / No (n): ";
            cin >> drawAgain;
        }

    } while (/* condition */ drawAgain == "yes");

    return 0;
}

/*******************************************************
 * void print_array_elements(string var[][2], int size)
 *             print_array_elements                    *
 *******************************************************/

void print_array_elements(string var[][2], int size)
{
    print_joint(separator, 60);
    for (int row = 0; row < size; row++)
    {

        if (row % 2 == 0)
            cout << separator << endl;

        for (int col = 0; col < 1; col++)
        {
            cout << separator << setw(4) << "(" << var[row][col] << ")" << "  " << var[row][col + 1] << setw(32 - var[row][col + 1].length() - 11) << "";
        }

         if (row+1 == size)
            cout << separator << endl;

    }
}

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
