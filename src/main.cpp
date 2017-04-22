#include<iostream>
#include<string>
#include "dictionary.h"
using namespace std;

int main(){
	cout<< "scheck version 0.1" << endl;
	Dictionary d( "data/mydict.dat" );
	string word;
	while( getline( cin, word )){
		if( d.Check( word ) ) {
			cout << word << "is OKAY\n";
		}
		else {
			cout<< word << " is misspelt \n";
		}
	}
}
