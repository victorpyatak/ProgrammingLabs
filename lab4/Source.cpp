#include "src/PcGame.cpp"
#include <iostream>
#include <string>
using namespace std;



int main() {

	PcGame gameObj;
	PcGame secObj("XXX", 9, 7.1);
	PcGame proObj("Hey!" , 32313);
	PcGame pubObj(123213 , "Public");

	gameObj.setName("The GAME");
	gameObj.setCap(12);
	gameObj.setAvg(8.6);

	gameObj.setProStr("This is the protected string!");
	gameObj.setProInt(1234);

	cout << "The game calls : " << gameObj.getName() << endl;
	cout << "There are " << gameObj.getCap() << " heroes in the game!" << endl;
	cout << "IMDB rating : " << gameObj.getAvg() << endl;

	cout << gameObj.getProStr() << endl;
	cout << "This is protected integer : " << gameObj.getProInt() << endl;
	system("pause");

	return 0;
}
