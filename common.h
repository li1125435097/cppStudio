#include <iostream>
#include <time.h>

using namespace std;


template <class T>
void l(T d){
	cout << time(NULL) << ":  " << d << endl;
}

template <class T>
void l(T d,int l){
	cout << time(NULL) << ":  ";
	for(int i = 0;i<l;i++){			
			if(i<l-1){
				cout << *d << ',';
			}else{
				cout << *d << endl;
			}
			d++;
	}
}
