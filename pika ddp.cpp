#include<iostream>
using namespace std;

int main()
{
	for(int f=0; f<=9; f++){
		for(int i=0; i<=9; i++){
			if(f==0 || f==3 || f==6 || f==9 || i==0 || i==3 || i==6 || i==9){
				cout<<" * ";
			}else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
	return 0;
}
