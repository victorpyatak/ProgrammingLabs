#include "../headers/PcGame.h"
#include <iostream>
#include <string>

using namespace std;


PcGame::PcGame()
{
	cout << "This is the first constructor!" << endl;
}

PcGame::PcGame(string name, int capacity, double avgRating) :
	gameName(name), heroCapacity(capacity), averageRating(avgRating)
{
	cout << "gameName set in constructor :" << gameName << endl;
	cout << "Hero capacity set in constructor : " << heroCapacity << endl;
	cout << "Average IMDB rating set in constructor : " << averageRating << endl;
}

PcGame::PcGame(string protString , int protInt):
	protectedString(protString) , protectedInteger(protInt)
{
	cout << "Protected string from constructor :" << protectedString << endl;
	cout << "Protected integer from constructor :" << protectedInteger << endl;
}

PcGame::PcGame(int protInt, string protString) :
	publicInteger(protInt), publicString(protString)
{
	cout << "Public integer :" << publicInteger << endl;
	cout << "Public string :" << publicString << endl;
}

string PcGame::getGameName() {
	return gameName;
}


void PcGame::setGameName(string name) {
	gameName = name;
}

int PcGame::getHeroCapacity() {
	return heroCapacity;
}

void PcGame::setHeroCapacity(int capacity) {
	heroCapacity = capacity;
}


double PcGame::getAverageRating() {
	return averageRating;
}

void PcGame::setAverageRating(double avgRating) {
	averageRating = avgRating;
}

string PcGame::getProtectedString() {
	return protectedString;
}

void PcGame::setProtectedString(string protString) {
	protectedString = protString;
}

int PcGame::getProtectedInteger() {
	return protectedInteger;
}

void PcGame::setProtectedInteger(int protInt) {
	protectedInteger = protInt;
}

PcGame::~PcGame()
{
	cout << "Objects destroyed!" << endl;
}
