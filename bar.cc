#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> strs{"chengdu", "xian", "chongqin"};
	for(auto val:strs)
	{
		cout << val << endl;
	}
	cout << "add new content." << endl;
	return 0;
}
