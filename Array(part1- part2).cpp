/*
1)
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Enter the 5 integer as input"<<endl;
	cin>>a>>b>>c>>d>>e;
	cout<<"Reverse no: "<<e<<d<<c<<b<<a;
}
*/

/*
2) Take 5 integter number as input and print them 
#include<iostream>
using namespace std;
int main(){
	int a[4];
	int i;
	cout<<"Give 5 integer as input: "<<endl;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"The given 5 inputs are :"<<endl;
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
*/
#include<iostream>
using namespace std;
int main(){
	int a[9];
	int i;
	cout<<"Give 10 integer as input: "<<endl;
	for(i=0;i<9;i++){
		cin>>a[i];
	}
	cout<<"The given 10 reverse of inputs are :"<<endl;
	for(i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}
}


