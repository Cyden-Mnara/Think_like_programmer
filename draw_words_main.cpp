#include <iostream>
#include "./classes/my_words_drawer.h"
#include "./utils/draw_utils.h"

using namespace std;

int main()
{
    char symbol;
    string word;
    char reType = 'n';
    unsigned seed;

    do
    {   
        /* code */
        seed = time(0);
        srand(seed);
        cout << endl;
        print_joint('`', 64);
        cout << endl;
        cout << "Enter a word : ";
        getline(cin, word);
        cout << endl;

        print_joint('`', 64);
        cout << endl;
        cout << "Enter a drawing symbol : ";
        cin >> symbol;

        cout << endl;
        cout << endl;

        WordsDrawer drawer(word, symbol);
        setTextColor(randomly(91,7)); // set
        drawer.draw();

        cout << endl;

        print_joint(symbol, drawer.get_row_length());
        cout << endl;
        resetConsoleColor(); // resetM

        cout << endl;
        cout << "Do you Want to retype the word? Yes(y) /No(n) : ";
        cin >> reType;
        reType = tolower(reType);

        // validating input
        while (reType != 'y' && reType != 'n')
        {
            cout << "Invalid input. Please enter y for yes or n for no : ";
           cin >> reType;
            cout<<endl;
        }
        if (reType == 'y')
            system("clear");

        cin.ignore(); // Clear the buffer
    } while (/* condition */ reType == 'y');

     system("exit");
    return 0;
   
}