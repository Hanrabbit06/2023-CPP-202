#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	//â����... ������ ����..? ��ȭ�̸�-��ȭ ���ΰ�
	map<string, string>ghibli;

	ghibli["���� �� �Ƹ���Ƽ"] = "�Ƹ���Ƽ";
	ghibli["���� ġ������ ���Ҹ�"] = "ġ����";
	ghibli["�ٶ������ �����ī"] = "�����ī";
	ghibli["ī���� ���� �̾߱�"] = "ī��������";

	map<string, string>::iterator iter;
	for (iter = ghibli.begin(); iter != ghibli.end(); iter++) {
		cout << iter->first <<"  -���ΰ�:" << iter->second << "\n";
	}

	return 0;
}