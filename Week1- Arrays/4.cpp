#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i=n-1; i>=0; i--){
	        cout<<arr[i]<<" ";
	    }
	}
	return 0;
}