#include<iostream>
#include<stdlib.h>
#include<string>
#include <ctime>
using namespace std;

string CountDown1();
int StopV1;
int Adding1;
//int StopV2; 
//int Adding2;
int main() {
	srand(time(NULL));
	StopV1 = rand() % 35;
	//StopV2 = rand() % 35;

	while (Adding1 <= StopV1) {
		system("CLS");
		cout << CountDown1() << endl;
		Adding1++;
	}

	return 0;
}
string CountDown1() {
	string Chara1[35] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9" };
	int num1 = rand() % 35;
	return Chara1[num1];
}
//	string Chara2[35] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9" };
//	int num2 = rand() % 35;
//	return Chara2[num2];
