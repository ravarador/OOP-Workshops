#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   double a = 12.3455;
   /*   cout << "#";
      cout.width(10);
      cout.setf(ios::fixed);
      cout.setf(ios::left);
      cout.fill('*');
      cout.precision(2);
      cout << a << "#" << endl;
      cout.unsetf(ios::left);
   */
   cout << "#" << setw(10) << left << fixed << setfill('*') << setprecision(2) << a << "#" << endl;
   return 0;
}