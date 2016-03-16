#include <iostream>

using namespace std;

int main()
{
	cout << "Fizz Buzz Woof" << endl;
	int i;
	for (i = 1; i <= 50; i++){
		if (i % 3 == 0){
			cout << "Fizz ";
		}
		if (i % 5 == 0){
			cout << "Buzz";
		}
		if (i % 7 == 0){
			cout << "Woof";
		}
		if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		{
			cout << i;
		}
		cout << "" << endl;
	}
}