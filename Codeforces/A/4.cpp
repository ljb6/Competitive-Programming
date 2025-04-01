#include <iostream>
using namespace std;
 
int main()
{
	int kg;
	cin >> kg;
 
	if (kg % 2 !=0 || kg == 2) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	return 0;
}