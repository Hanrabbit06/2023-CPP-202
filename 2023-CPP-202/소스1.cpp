#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	//â����... ������ ����..? ���� ��ġ?
	vector<string> song;
	song.reserve(4);
	song.push_back("Love Lee");
	song.push_back("��");
	song.push_back("�ŷ��־�");
	song.push_back("����");

	vector<string>::iterator iter;
	for (iter = song.begin(); iter != song.end(); iter++)
		cout << *iter << "";

	return 0;
}