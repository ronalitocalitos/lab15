#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &x,int &y,int &z,int &w){
	int s[4] = {x , y , z , w};
	for(int i = 3; i > 0;i--){
		swap(s[i],s[rand()%i]);
	}
	x = s[0];
	y = s[1];
	z = s[2];
	w = s[3];
}
void swap(int &x,int &y){
	int i = x;
	x = y;
	y = i;
}
