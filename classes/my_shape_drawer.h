/**************************************************************************************
 *                   Header class to draw various  shapes                              *
 *                                                                                     *
 ***************************************************************************************/
#include <iostream>
using namespace std;

class MyShapes
{
private:
    /* data */
    char drawingSymbol = '*';
    int sizeOfPattern = 0;

public:
    MyShapes(/* args */ char symbolUsed, int size);
    ~MyShapes();
    void half_square(/* args */);
    void sideway_triangle(/* args */);
    void circle(/* args*/);
    void trapezium(/* args */);
    void square(/* args */);
    void rectangle(/* ags*/);
    void triangle(/* args */);
    void print_space(/* args */ int space);
    void rhombus(/* args */);
};

/***************************************************
 *              Constructor                        *
 ***************************************************/
MyShapes::MyShapes(/* args */ char symbolUsed, int size)
{
    this->drawingSymbol = symbolUsed;
    this->sizeOfPattern = size;
}

/***************************************************
 *              distructor                        *
 ***************************************************/

MyShapes::~MyShapes()
{
    drawingSymbol = ' ';
    sizeOfPattern = 0;
}

/***************************************************
 *             Half Square                         *
 ***************************************************/

void MyShapes::half_square(/* args*/)
{
    for (int counter = sizeOfPattern; counter > 0; counter--)
    {
        for (int row = 0; row < counter; row++)
        {
            cout << drawingSymbol << " ";
        }
        cout << endl;
    }
}

/***************************************************
 *              Circle                             *
 ***************************************************/
void MyShapes::circle()
{
    for (int i = 0; i < sizeOfPattern; i++)
    {
        /* code */
    }
}
/***************************************************
 *              Sideway Triangle                   *
 ***************************************************/
void MyShapes::sideway_triangle()
{
    for (int row = 0; row < sizeOfPattern; row++)
    {
        if (row < sizeOfPattern / 2)
        {
            for (int numDraw = 0; numDraw <= row; numDraw++)
            {
                cout << drawingSymbol;
            }
        }
        else
        {
            for (int numDraw = sizeOfPattern - row; numDraw > 0; numDraw--)
            {
                cout << drawingSymbol;
            }
        }
        cout << endl;
    }

    cout << endl;
}

/***************************************************
 *              Triangle                           *
 ***************************************************/

void MyShapes::triangle()
{
    int space = sizeOfPattern;
    for (int counter = 0; counter<sizeOfPattern; counter++)
    {
        print_space(space);
        for (int row = 0; row < counter; row++)
        {
            cout << drawingSymbol << " ";
        }
        cout << endl;
         space--;
    }
    cout << endl;
}

/***************************************************
 *              Trapeza                            *
 ***************************************************/
void MyShapes::trapezium()
{
    int space = sizeOfPattern;
    for (int counter = 0; counter<sizeOfPattern; counter++)
    {
        print_space(space);
        for (int row = 0; row < sizeOfPattern; row++)
        {
            cout << drawingSymbol << " "<< drawingSymbol << " ";
        }
        cout << endl;
         space--;
    }
   
}

/***************************************************
 *                    Quare                        *
 ***************************************************/
void MyShapes::square()
{
    for (int counter = sizeOfPattern; counter > 0; counter--)
    {
        for (int row = 0; row < sizeOfPattern; row++)
        {
            cout << drawingSymbol << " ";
        }
        cout << endl;
    }
}

/***************************************************
 *              Rectangle                          *
 ***************************************************/
void MyShapes::rectangle()
{
    for (int counter = sizeOfPattern; counter > 0; counter--)
    {
        for (int row = 0; row < sizeOfPattern; row++)
        {
            cout << drawingSymbol << " "<< drawingSymbol << " ";
        }
        cout << endl;
    }
}

/***************************************************
 * void  print_space(int space)
 * print whitespace in console using std::cout                      
 ***************************************************/
void MyShapes::print_space(int space)
{
    for (int indent = 0; indent < space; indent++)
    {
        cout << " ";
    }
}

/***************************************************
 * void rhombus()
 * prints rhombus shape in console                      
 ***************************************************/
void MyShapes::rhombus()
{
    int upperSpace = sizeOfPattern / 2,
        lowerSpace = sizeOfPattern % 2 == 0 ? 1 : 0;
    for (int row = 0; row < sizeOfPattern; row++)
    {
        if (row < sizeOfPattern / 2)
        {
            print_space(upperSpace - row);
            for (int numDraw = 0; numDraw <= row; numDraw++)
            {
                cout << drawingSymbol << " ";
            }
        }
        else
        {
            print_space(lowerSpace);
            for (int numDraw = sizeOfPattern - row; numDraw > 0; numDraw--)
            {
                cout << drawingSymbol << " ";
            }

            lowerSpace++;
        }
        cout << endl;
    }

    cout << endl;
}