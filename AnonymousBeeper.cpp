#include <iostream>

using namespace std;

int main()
{
	int z=10, d=10, e=10, q = 10;
	cout << "Tell me a number: ", cin >> z; 

	auto a = [&z](int x, int y)
	{
		z=100;
		cout << "\n\079\tBEEP \bBOOP\a\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};
	auto b = [=](int x, int y)
	{
		cout << "\n\079\tBEEP \bBOOP\a\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};
	auto c = [&](int x, int y)
	{
		q = z;
		cout << "\n\079\tBEEP \bBOOP\a\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};

	cout << a(d,e);
	cout << b(d,e);
	cout << c(d,e);
	if(q == z)
	{
		cout << "HELP COMPUTER" << endl;
	}
	

	return 0;
}
