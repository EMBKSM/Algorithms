#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
	int sum = 0;
	vector<int> solution;

	for (int i = 1; i <= sqrt(n); i++)
		if (n % i == 0)
		{
			solution.push_back(i);
			if (i != n / i) solution.push_back(n / i);
		}
	sort(solution.begin(), solution.end());

	for (auto a = solution.begin(); a != solution.end(); a++)
		sum += *a;
	return sum;
}