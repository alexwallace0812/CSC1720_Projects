#include <iostream>
#include "Boat.h"
using namespace std;
int main()
{
Boat herbie(10);
cout << "Test 1: Set up and test.\n";
herbie.addFuel(8);
herbie.setFloating(true);
herbie.showDash();
cout << "\nTest 2: Drive for 20 minutes at 60 mph.\n";
herbie.operate(20, 60);
herbie.showDash();
cout << "\nTest 3: Drive for 40 minutes at 90 mph.\n";
herbie.operate(40, 90);
herbie.showDash();
cout << "\nTest 4: Try to drive for 500 minutes at 45 mph.\n";
herbie.operate(500, 45);
herbie.showDash();
return 0;
}
