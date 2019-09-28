#include <iostream>
using namespace std;

class pattern{
public:
	pattern(int n){
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				cout << " *";
			}
			cout << endl;
		}
	}
	
};

int main() {
	
   // prints Hello World
	pattern pat(10);
	
   return 0;
}
