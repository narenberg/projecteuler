#include <iostream>
using namespace std;

int iterate(long int x, bool print){
	if(x <= 1){
		if(print){cout << "end" << endl;}
		return 1;

	}
	if(x % 2 == 0){
		if(print){cout << x/2 << ", ";}
		return 1 + iterate(x/2, print);
	}else{
		if(print){cout << 3*x + 1 << ", ";}
		return 1 + iterate(3*x + 1, print);
	}
}
int print(int a){
	int b = iterate(a, true);
	cout <<"start: " << a << ", " << b << endl;
	return b;
}
int main(){
/*	int max = 0, y = 1, it;
	for(int i = 1; i < 1000000; i ++){
		it = print(i);
		if(it > max){
			max = it;
			y = i;
		}
	}

	cout << "Max chain length: " << y << ":" << max;*/
	print(837799);
}


