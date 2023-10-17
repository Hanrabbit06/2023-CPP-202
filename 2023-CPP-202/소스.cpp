#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	//창의적... 젤다의 전설..? 영화이름-영화 주인공
	map<string, string>ghibli;

	ghibli["마루 밑 아리에티"] = "아리에티";
	ghibli["센과 치히로의 행방불명"] = "치히로";
	ghibli["바람계곡의 나우시카"] = "나우시카";
	ghibli["카구야 공주 이야기"] = "카구야히메";

	map<string, string>::iterator iter;
	for (iter = ghibli.begin(); iter != ghibli.end(); iter++) {
		cout << iter->first <<"  -주인공:" << iter->second << "\n";
	}

	return 0;
}