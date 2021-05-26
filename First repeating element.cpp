#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	 
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int pos = INT_MAX; //pos = 19999999
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				if(i<pos){
					pos=i;
				}
			}
		}
	}
	pos++;
	cout<<pos;
	return 0;
}
