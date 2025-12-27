#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
	srand(time(0));
	double temp = 70.0; int change=0;
	cout << "System Starting..." << endl;
	cout << "===SMART MOTOR MONITORING SYSTEM===" << endl;
	cout << "Status: SCANNING..." << endl << endl;
	for (int i=1; i<=10; i++)
	{
	    change = rand()%15 -2;
		temp=temp+change;
		cout << "Check " << i << ": " << temp << " C" << endl;
		Sleep(500);
	if (temp>90){
		cout << "Danger: Motor is overheating!" << endl;
	} else if (temp>80) {
		cout << "Warning: Temperature is rising fast!" << endl;
	} else {
		cout << "Status: Normal!" << endl;
	}
	double prediction = temp+ (change*2);
	cout << "Predicted temp in 2 steps: " << prediction << " C" << endl;
	if (prediction>100) {
		cout << "! Alert: Hight risk of failure in near future!!"
		<< endl; 
	}
}
	return 0;
}

