//5
#include <iostream>
using namespace std;

int main() {
	int eins,zwei;
	char s;
	cin>>eins>>zwei>>s;
	
	switch (s){
	    case '+':
	        cout<<eins+zwei;
	        break;
	    case '-':
	        cout<<eins-zwei;
	        break;
	    case '*':
	        cout<<eins*zwei;
	        break;
	    case '/':
	        cout<<(float)eins/(float)zwei;
	        break;
	}
	
	return 0;
}
