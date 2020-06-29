class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto ti : tickets){
            graph[ti[0]].insert(ti[1]);
        }
        dfs("JFK");
        return res;
    }
    
    void dfs(string source){
        while(graph[source].size()){
            string next = *graph[source].begin();
            graph[source].erase(graph[source].begin());
            dfs(next);
        }
        res.insert(res.begin(),source);
    }
    vector<string> res;
    map<string, multiset<string>> graph;
};
