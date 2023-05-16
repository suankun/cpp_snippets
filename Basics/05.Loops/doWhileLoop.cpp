#include <iostream>
using namespace std;

int main() {
    char selection {};

    do
    {
        cout << "\n----------------------" << endl;
        cout << "1. First choice" << endl;
        cout << "2. Second choice" << endl;
        cout << "3. Third choice" << endl;
        cout << "4. Quit!" << endl;
        cout << "Enter your choice: " << endl;
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "First thing to do" << endl;
            break;
        case '2':
            cout << "Second thing to do" << endl;
            break;
        case '3':
            cout << "Third thing to do" << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Good bye!" << endl;
            break;
        
        default:
            cout << "\n\\\\||||||||||||||||||//" << endl;
            cout << ">-Enter valid coice!-<" << endl;
            cout << "//||||||||||||||||||\\\\" << endl;
            break;
        }
    } while (selection != 'Q' && selection != 'q');
    
    return 0;
}