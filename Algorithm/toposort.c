
void topsort() {
		vector<int> inDegree(n);//统计每个顶点的入度
		//扫描每一条边，统计各个顶点的入度
		for (int i = 0; i < v; ++i) {
			for (int j = 0; j < adj[i].size(); ++j) {
				int w = adj[i].at(j);//i->w
				inDegree[w]++;
			}
		}
 
		queue<int> myqueue;
		for (int i = 0; i < v; ++i) {
			if (inDegree[i] == 0) myqueue.push(i);
		}
 
		while (!myqueue.empty()) {
			int i = myqueue.front();
			myqueue.pop();
			for (int j = 0; j < adj[i].size(); ++j) {
				int k = adj[i].at(j);
				inDegree[k]--;
				if (inDegree[k] == 0) myqueue.push(k);
			}
 
		}
