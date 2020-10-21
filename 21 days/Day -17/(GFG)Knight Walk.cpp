#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct temp{
    int x;
    int y;
    int steps;
};

temp makeStruct(int xx, int yy, int ssteps){
    temp t;
    t.x = xx;
    t.y = yy;
    t.steps = ssteps;
    return t;
}

int main() {
	//code
	int test;
	cin >> test;
	
	while(test--){
	    int n, m;
	    cin >> n >> m;
	    
	    int sx, sy, dx, dy, ans = 1000;
	    cin >> sx >> sy >> dx >> dy;
	    
	    vector<vector<bool> > visited(n, vector<bool>(m, false));
	    
	    queue<temp> q;
	    q.push(makeStruct(sx-1, sy-1, 0));
	    
	    dx--;
	    dy--;
	    
	    while(!q.empty()){
	        temp t = q.front();
	        q.pop();
	        if(!(t.x < 0 || t.x >=n || t.y < 0 || t.y >= m)){
    	        if(!visited[t.x][t.y]){
	                visited[t.x][t.y] = true;
    	            q.push(makeStruct((t.x)-1, (t.y)-2, (t.steps)+1));
    	            q.push(makeStruct((t.x)-1, (t.y)+2, (t.steps)+1));
    	            q.push(makeStruct((t.x)+1, (t.y)-2, (t.steps)+1));
    	            q.push(makeStruct((t.x)+1, (t.y)+2, (t.steps)+1));
    	            q.push(makeStruct((t.x)-2, (t.y)-1, (t.steps)+1));
    	            q.push(makeStruct((t.x)-2, (t.y)+1, (t.steps)+1));
    	            q.push(makeStruct((t.x)+2, (t.y)-1, (t.steps)+1));
    	            q.push(makeStruct((t.x)+2, (t.y)+1, (t.steps)+1));
    	        }
	        }
	        if((t.x == dx) && (t.y == dy)){
	            ans = min(ans, t.steps);
	            visited[dx][dy] = false;
	        }
	    }
	    
	   // int ans = find(visited, sx-1, sy-1, dx-1, dy-1);
	    
	    if(ans >= 1000){
	        ans = -1;
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
}
