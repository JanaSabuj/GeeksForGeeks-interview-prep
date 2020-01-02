// #include<iostream>
// #include<cstdio>
// #include<queue>
#include<bits/stdc++.h>

using namespace std;
// int n,m;
#define n 20
#define m 20

struct Node{
  int x, y, dist;
};

int row[] = {-1,1,0,0};
int col[] = {0,0,1,-1};

bool isSafe(int mat[][m], bool visited[][m], int x, int y){
  return (x >=0) and (x < n) and (y>=0) and (y < m) and (mat[x][y] == 1) and (!visited[x][y]);
}

void BFS(int mat[][m], int i,int j, int x, int y){

  if(mat[i][j] == 0 or mat[x][y] == 0){
    // Imp Trivial case
      cout << -1 <<endl;
      return;
  }
  bool visited[n][m];
  memset(visited, false, sizeof(visited));

  queue<Node> q;
  q.push({i,j,0});
  visited[i][j] = true;
  int ans = -1;

  while (!q.empty()) {
    /* code */
    Node t = q.front();
    q.pop();

    // terminating condition
    if(t.x == x and t.y == y){
      ans = t.dist;
      break;
    }

    for(int k = 0; k < 4; k ++){
      if(isSafe(mat, visited, t.x + row[k], t.y + col[k])){
        q.push({t.x + row[k], t.y + col[k], t.dist + 1});
        visited[t.x + row[k]][t.y + col[k]] = true;
      }
    }


  }//

  if(ans != -1){
    cout << ans <<endl;// min steps
  }else
  cout << -1 <<endl;// no path

}

void solve(){
  int r,u;
  cin>>r>>u;

  int mat[n][m];
  memset(mat,0,sizeof(mat));

  for (size_t i = 0; i < r; i++) {
    /* code */
    for (size_t j = 0; j < u; j++) {
      /* code */
      int x;
      cin>>x;
      mat[i][j] = x;
    }
  }

  int a,b;
  cin>>a>>b;
  BFS(mat, 0, 0,a,b);



}

int main()
 {
	//code
  int t;
  cin>>t;

  while(t--){
    solve();
  }

	return 0;
}
