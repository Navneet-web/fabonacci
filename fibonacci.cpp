#include<iostream>
using namespace std;
int series(int x){
	if(x==1 || x==2) 
		return 1;
	

		return series(x-1)+series(x-2);
	
}
int main(){
	while(1){
	
	int x;
	cout<<"Enter The Value :: ";
	cin>>x;
	
	int result=series(x);	
cout<<result<<endl;
}

}
