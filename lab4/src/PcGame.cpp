#include "../headers/PcGame.h"
#include <iostream>
#include <string>

using namespace std;


PcGame::PcGame()
{
	cout << "This is the first constructor!" << endl;
}

PcGame::PcGame(string n, int c, double a) :
	name(n), heroCap(c), avg(a)
{
	cout << "Name set in constructor :" << name << endl;
	cout << "Hero capacity set in constructor : " << heroCap << endl;
	cout << "Average IMDB rating set in constructor : " << avg << endl;
}

PcGame::PcGame(string ps , int pi):
	proStr(ps) , proInt(pi)
{
	cout << "Protected string from constructor :" << proStr << endl;
	cout << "Protected integer from constructor :" << proInt << endl;
}

PcGame::PcGame(int pi, string ps) :
	pubInt(pi), pubStr(ps)
{
	cout << "Public integer :" << pubInt << endl;
	cout << "Public string :" << pubStr << endl;
}

string PcGame::getName() {
	return name;
}


void PcGame::setName(string n) {
	name = n;
}

int PcGame::getCap() {
	return heroCap;
}

void PcGame::setCap(int c) {
	heroCap = c;
}


double PcGame::getAvg() {
	return avg;
}

void PcGame::setAvg(double a) {
	avg = a;
}

string PcGame::getProStr() {
	return proStr;
}

void PcGame::setProStr(string ps) {
	proStr = ps;
}

int PcGame::getProInt() {
	return proInt;
}

void PcGame::setProInt(int pi) {
	proInt = pi;
}

PcGame::~PcGame()
{
	cout << "Objects destroyed!" << endl;
}
