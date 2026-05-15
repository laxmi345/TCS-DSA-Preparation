#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

vector<int> arr = {2, 3, 1, 2, 4, 3};
int target=7;

int i=0,sum=0;
int minLen = INT_MAX;

for(int j=0;j<arr.size();j++){
	sum+=arr[j];
	while(sum>=target){
		minLen =min(minLen,j-i+1);
		sum-=arr[i];
		i++;
	}
}
if(minLen== INT_MAX)cout<<0;
else cout << minLen;

    return 0;
}
