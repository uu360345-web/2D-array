#include <iostream>
using namespace std;
 
int main()
{
   int rows, columns;
 
   cout << "Enter Rows: ";
   cin >> rows;
 
   cout << "Enter Columns: ";
   cin >> columns;
 
   int seatingChart[rows][columns];
 
   cout << "Enter Roll Numbers:" << endl;
 
   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < columns; j++)
       {
           cin >> seatingChart[i][j];
       }
   }
 
   cout << "Seating Chart:" << endl;
 
   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < columns; j++)
       {
           cout << seatingChart[i][j] << " ";
       }
       cout << endl;
   }
 
   return 0;
}
