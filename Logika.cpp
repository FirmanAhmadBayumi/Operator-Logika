#include <iostream>
using namespace std;
int main(){
	bool hasil;
	int x,y;
	x=3;
	y=5;
	
	hasil = (x != y);
	cout << "3 != 5 adalah\t : " << hasil << endl;
	
	hasil = (x == y);
	cout << "3 == 7 adalah\t : " << hasil << endl;
	
	hasil = (x < y);
	cout << "3 < 5 adalah\t : " << hasil << endl;
	
	hasil = (x > y);
	cout << "3 > 5 adalah\t : " << hasil << endl;
	
	return 0;
}
