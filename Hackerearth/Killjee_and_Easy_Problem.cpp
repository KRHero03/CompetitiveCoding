

#include <bits/stdc++.h>

using namespace std;
vector <int> edges[400001];
char visited[400001];
vector <int> path;
void dfs(int x){
    path.push_back(x);
    visited[x]='1';
    int size=edges[x].size();
    int i;
    for(i=0;i<size;i++){
        if(visited[edges[x][i]]!='1'){
            dfs(edges[x][i]);
            path.push_back(x);
        }
    }
}
int main() 
{
	int n,m;
	cin >> n >> m;
	int i=0;
	for(i=0;i<m;i++){
	    int x,y;
	    cin >> x >> y;
	    edges[x].push_back(y);
	    edges[y].push_back(x);
	}
	dfs(1);
	cout<<path.size()<<endl;
	for(i=0;i<path.size();i++)
	    cout<<path[i]<<" ";
	cout<<endl;
}

