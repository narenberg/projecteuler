//Nick Arenberg, Euler Problem 5
#include <iostream>
using namespace std;
int divisible(long int max, int interval){
	for(int i = interval; i > 1; i--){
		if(!(max % i == 0)){
			cout << max << " is not divisible by " << i << endl;
			return divisible(max + interval, interval);
		}
	}
	return max;

}
int main(){
	cout << divisible(20*19, 20*19);
	return 0;
}

