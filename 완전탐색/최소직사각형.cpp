#include <string>
#include <vector>
using namespace std;

vector<int> h; // 긴 변
vector<int> w; // 짧은 변

int solution(vector<vector<int>> sizes) {
    int max_h = 0, max_w = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]){
            h.push_back(sizes[i][0]);
            w.push_back(sizes[i][1]);
        }else{
            h.push_back(sizes[i][1]);
            w.push_back(sizes[i][0]);
        }
    }
    
    for(int i = 0; i < sizes.size(); i++){
        if(max_h < h[i])
            max_h = h[i];
        if(max_w < w[i])
            max_w = w[i];
    }
    
    return max_h * max_w;
}

// #include <string>
// #include <vector>

// using namespace std;

// int solution(vector<vector<int>> sizes) {
//     int answer = 0;
//     int w = 0, h = 0;
    
//     for(int i = 0; i < sizes.size(); i++){    
//         w = max(w, min(sizes[i][0], sizes[i][1]));
//         h = max(h, max(sizes[i][0], sizes[i][1]));
//     }
    
//     answer = w * h;
    
//     return answer;
// }