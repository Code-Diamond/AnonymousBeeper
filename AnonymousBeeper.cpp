#include <iostream>

using namespace std;

int main()
{
	int z=10, b=10, c=10;
	cout << "Tell me a number: ", cin >> z; 

	auto a = [&z](int x, int y)
	{
		z=100;
		cout << "\079\tBEEP \bBOOP\a\007\t\rBEEPBOOP\007\008\069" << endl;
		return x + y + z;
	};
	cout << a(b,c);

	return 0;
}