#pragma once
#include <iostream>
#include <string>

using namespace std;

class PcGame
{
public:
	PcGame();
	PcGame(string name, int capacity, double avgRating);
	PcGame(string protString , int protInt);
	PcGame(int protInt, string protString);

	void setGameName(string name);
	string getGameName();
	void setHeroCapacity(int cap);
	int getHeroCapacity();
	void setAverageRating(double averageRating);
	double getAverageRating();

	void setProtectedString(string protString);
	string getProtectedString();
	void setProtectedInteger(int protInt);
	int getProtectedInteger();

	int publicInteger;
	string publicString;

	~PcGame();
private:
	string gameName;
	int heroCapacity;
	double averageRating;

protected:
	string protectedString;
	int protectedInteger;

};

