#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int z=10, d=10, e=10, q = 10;
	vector<int> BEEP = {z, d, e, q};
	cout << "Tell me a number: ", cin >> z; 
	auto a = [&z](int x, int y)
	{
		z=100;
		cout << "\n\079\tBEEP \bBOOP\a\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};
	auto b = [=](int x, int y)
	{
		cout << "\b\e\e\b\bB\bE\bE\bP\b \bB\bE\bE\bP\b\n\079\tBEEP \bBOOP\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};
	auto c = [&](int x, int y)
	{
		q = z;
		cout << "\b\b\n\079\tBEEP \bBOOP\e\007\t\rBEEPBOOP\007\008\069\n" << endl;
		return x + y + z;
	};
	cout << a(d,e);
	cout << b(d,e);
	cout << c(d,e);
	if(q == z)
	{
		double QQ = 0; 
		std::for_each(begin(BEEP),end(BEEP),[&](int x){QQ+=x;});
		cout<<"HELP COMPUTER"<<QQ<<endl;
	}
	return 0;
}
