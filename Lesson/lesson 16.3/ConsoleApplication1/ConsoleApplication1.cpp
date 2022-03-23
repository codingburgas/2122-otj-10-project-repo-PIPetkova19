#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

namespace bg
{
	namespace burgas
	{
		struct targovska {};
		namespace mr
		{
			struct pgkpi {};
		}
	}
}

double* foo()
{
	double* arr = new double(10);
	delete[] arr;

	return arr;
}

struct USER
{
	size_t id;
	string name;
	string email;
	uint8_t age;
};



int main()
{
	vector<USER> users
	{
	{1, "user1", "user1@gmail.com", 16},
	{2, "user1", "user2@gmail.com", 17},
	{3, "user1", "user3@gmail.com", 18},
	{4, "user1", "user4@gmail.com", 19}
	};

	auto sum = [](int a, int b) { return a + b; };
	int c = sum(5, 6);
	cout << c;
}