#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	string item[3]={"rice","oil","soap"};
	int price[3]={50,1000,45};
	int total=0;
	
    cout<<"ITEM"<<"\t"<<"PRICE"<<endl;
    
	for(int i=0;i<3;i++){
		total+=price[i];
		cout<<item[i]<<"\t"<<setw(4)<<price[i]<<endl;
	}
	cout<<"______________"<<endl;
	cout<<"TOTAL"<<"\t"<<setw(5)<<total;
	return 0;
}
