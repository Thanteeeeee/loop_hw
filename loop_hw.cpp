#include <iostream>
using namespace std;

int main() 
{
    int ql    ;
    char menu ;
   
	cout << "Select Menu"           << endl ;
    cout << "********************"  << endl ;
    cout << "1.Align Left"          << endl ;
    cout << "2.Align Right"         << endl ;
    cout << "3.Center"              << endl ;
    cout << "4.Exit"                << endl ;
    cout << "********************"  << endl ;
   
	do {
        cout << "Select Menu No : "      ;
        cin >> menu ;
        cout << "Enter number of line: ";
        cin >> ql   ;
        
		if (menu == '1')
            for (int i = 1; i <= ql; ++i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*" ;
                }
                cout << "\n" ;
            }
        else if (menu == '2')
            for (int i = 1; i <= ql; i++)
            {
                for (int j = 1; j <= ql - i; j++)
                {
                    cout << " ";
                }
                int d = i;
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                    d--;
                }
                cout << endl;
            }
        else if (menu == '3')
            for (int i = 1; i <= ql; i++)
            {
                for (int s = i; s < ql; s++)
                {
                    cout << " " ;
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    cout << "*" ;
                }

                cout << "\n";
            }

       }while (menu != '4') ;


     


	system("pause") ;
    return(0)       ;
}
