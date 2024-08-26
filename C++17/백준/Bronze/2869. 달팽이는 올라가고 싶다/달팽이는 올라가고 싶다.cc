#include <iostream>
using namespace std;
int main()
{
	int A; int B; int V;
	cin >> A >> B >> V;
	int count = (V - A) / (A - B);
	if ((V - A) % (A - B) == 0) count += 1;
	else count += 2;
	cout << count;
}