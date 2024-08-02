#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	set<string> s;
	string str;

	for (int i = 0 ; i < n ; i++){
		cin >> str;

		if (str == "ENTER")
		{
			cnt += s.size();
			s.clear();
			continue;
		}
		s.insert(str);
	}

	cnt += s.size();

	cout << cnt;
}