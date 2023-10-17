#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	//창의적... 젤다의 전설..? 무기 수치?
	vector<string> song;
	song.reserve(4);
	song.push_back("Love Lee");
	song.push_back("고래");
	song.push_back("매력있어");
	song.push_back("낙하");

	vector<string>::iterator iter;
	for (iter = song.begin(); iter != song.end(); iter++)
		cout << *iter << "";

	return 0;
}