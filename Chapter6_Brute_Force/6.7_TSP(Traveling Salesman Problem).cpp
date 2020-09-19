#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int n;
int dist[15][15];

int shortestPath(vector<int>& path, vector<bool>& visited, int currentLength){
	if(path.size()==n)
		return currentLength + dist[0][path.back()];
	int ret = INFINITY;
	for(int next = 0; next < n; next++){
		if(visited[next]) continue;
		int here = path.back();
		path.push_back(next);
		visited[next] = true;
		int cand = shortestPath(path, visited, currentLength+dist[here][next]);
		ret = min(ret, cand);
		path.pop_back();
	}
	return ret;
}
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			cin>>dist[i][j];
		}
	}
	vector<int> path(1, 0);
	vector<bool> visited(n, false);
	visited[0] = true;
	int ret = shortestPath(path, visited, 0);
	cout<<ret<<endl;
}