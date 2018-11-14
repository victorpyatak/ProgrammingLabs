#include "src/PcGame.cpp"
#include <iostream>
#include <string>
using namespace std;



int main() {

	PcGame gameObject;
	PcGame secondObject("XXX", 9, 7.1);
	PcGame protectedObject("Hey!" , 32313);
	PcGame publicObject(123213 , "Public");

	gameObject.setGameName("The GAME");
	gameObject.setHeroCapacity(12);
	gameObject.setAverageRating(8.6);

	gameObject.setProtectedString("This is the protected string!");
	gameObject.setProtectedInteger(1234);

	cout << "The game calls : " << gameObject.getGameName() << endl;
	cout << "There are " << gameObject.getHeroCapacity() << " heroes in the game!" << endl;
	cout << "IMDB rating : " << gameObject.getAverageRating() << endl;

	cout << gameObject.getProtectedString() << endl;
	cout << "This is protected integer : " << gameObject.getProtectedInteger() << endl;
	system("pause");

	return 0;
}
