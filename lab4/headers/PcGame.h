#pragma once
#include <iostream>
#include <string>

using namespace std;

class PcGame
{
public:
	PcGame();
	PcGame(string n, int c, double a);
	PcGame(string ps , int pi);
	PcGame(int pi, string ps);

	void setName(string n);
	string getName();
	void setCap(int cap);
	int getCap();
	void setAvg(double avg);
	double getAvg();

	void setProStr(string ps);
	string getProStr();
	void setProInt(int pi);
	int getProInt();

	int pubInt;
	string pubStr;

	~PcGame();
private:
	string name;
	int heroCap;
	double avg;

protected:
	string proStr;
	int proInt;

};

