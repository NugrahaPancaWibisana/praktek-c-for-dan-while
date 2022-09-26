#include <iostream>
using namespace std;

int main (){
	int a, b, c;
	for (a = 100; a > 0; a--){
		for ( b = 1; a > b; b++){
			printf ("*", a);
		}
		printf ( "\n");
	}
}