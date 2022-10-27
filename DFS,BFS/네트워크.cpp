#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> parent(201);
int n;

int findPa(int a){
    if (a == parent[a]) return a;
    
    return parent[a] = findPa(parent[a]);
}

void unionPa(int a, int b){
    a = findPa(a);
    b = findPa(b);
    
    if(a > b) 
        parent[a] = b;
    else 
        parent[b] = a;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    n = computers.size();
    
    for(int i = 0; i < n; i++) parent[i] = i;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(computers[i][j] == 1) 
                unionPa(i, j);
        }
    }
    
    for(int i=0; i<n; i++) parent[i] = findPa(i);
 
    sort(parent.begin(), parent.end());
    parent.erase(unique(parent.begin(), parent.end()), parent.end());
    answer = parent.size();
    
    for(int i = 0; i < parent.size(); i++){
        cout << parent[i] << "\n";
    }
    
    return answer;
}