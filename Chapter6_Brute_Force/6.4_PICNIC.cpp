#include<iostream>
#include<memory.h>
using namespace std;

int n, m;
bool areFriends[10][10], taken[10];

int countPairings(bool taken[10]){
	int firstFree=-1;
	for(int i=0; i<n; i++){
		if(!taken[i]){
			firstFree=i;
			break;
		}
	}
	if(firstFree==-1) return 1;
	int ret = 0;
	for(int pairWith = firstFree+1; pairWith < n; pairWith++){
		if(!taken[pairWith]&&areFriends[firstFree][pairWith]){
			taken[firstFree] = taken[pairWith] =true;
			ret+=countPairings(taken);
			taken[firstFree] = taken[pairWith] = false;
		}
	}
	return ret;
}

int main(){
	int caseNum;
	cin>>caseNum;
		while (caseNum--) {
		memset(areFriends, false, sizeof(areFriends));
		cin >> n >> m;
		int input1, input2;
		for (int i = 0; i < m; i++) {
			cin >> input1 >> input2;
			areFriends[input1][input2] = true;
			areFriends[input2][input1] = true;
		}

		int result=countPairings(taken);
		cout << result << endl;
	}
}

