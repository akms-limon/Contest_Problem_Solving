#include <iostream>  
#include <vector>  
#include <set>  
#include <tuple>  
#include <algorithm>  
using namespace std;  

struct Wire {  
    int u, v, isp, index;  
};  

bool doIntersect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) { 
    auto orientation = [](int x1, int y1, int x2, int y2, int x3, int y3) {  
        int val = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);  
        if (val == 0) return 0; 
        return (val > 0) ? 1 : 2; 
    };  
    int o1 = orientation(x1, y1, x2, y2, x3, y3);  
    int o2 = orientation(x1, y1, x2, y2, x4, y4);  
    int o3 = orientation(x3, y3, x4, y4, x1, y1);  
    int o4 = orientation(x3, y3, x4, y4, x2, y2);  
    if (o1 != o2 && o3 != o4) return true;  
    return false;
}

int main() {
    int T;  
    cin >> T;  
    for (int t = 1; t <= T; ++t) {  
        int N, M;  
        cin >> N >> M;  
        vector<pair<int, int>> routers(N);  
        vector<Wire> wires;  
        for (int i = 0; i < N; ++i) {  
            cin >> routers[i].first >> routers[i].second;  
        }  
        for (int i = 0; i < M; ++i) {  
            int U, V, I;  
            cin >> U >> V >> I;  
            wires.push_back({U - 1, V - 1, I, i + 1});  
        }  
        vector<int> toRemove;  
        for (size_t i = 0; i < wires.size(); ++i) {  
            for (size_t j = 0; j < wires.size(); ++j) {  
                if (i != j && wires[i].isp != wires[j].isp) {  
                    if (doIntersect(  
                        routers[wires[i].u].first, routers[wires[i].u].second,  
                        routers[wires[i].v].first, routers[wires[i].v].second,  
                        routers[wires[j].u].first, routers[wires[j].u].second,  
                        routers[wires[j].v].first, routers[wires[j].v].second)) {  
                        if (wires[i].index < wires[j].index) {  
                            toRemove.push_back(wires[i].index);  
                        } else {  
                            toRemove.push_back(wires[j].index);  
                        }  
                    }  
                }
            }
        }
        sort(toRemove.begin(), toRemove.end());  
        toRemove.erase(unique(toRemove.begin(), toRemove.end()), toRemove.end());
        cout << "Case #" << t << ":\n";  
        cout << toRemove.size() << "\n";  
        for (int wireIndex : toRemove) {  
            cout << wireIndex << " ";  
        }  
        if (!toRemove.empty()) {  
            cout << "\n";  
        }
        cout << '\n';
    }  
    return 0;  
}