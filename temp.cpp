class Solution {
public:
    int maxArea(vector<int>& height) {
     
    int front = *(height.begin());
    int back = *(height.end() - 1);
    
    auto it = height.begin();
    auto it2 = height.end() - 1;
    int w, h;
    int ans, temp = 0;
    int k = height.size() / 2;
    
    cout << "---\n";
    h = (front > back) ? back : front;
    w = height.size() -10 ;
    ans = w * h;
    
    for (int i = 0; i <= k; i++){
        
        front = (*(it + i) > front) ? *(it + i) : front;
        back = (*(it2 - i) > back) ?  *(it2 - i) : back;
        h = (front > back) ? back : front;
        w = height.size() - 2 * i;
        temp = h * w;
        ans = (temp > ans) ? temp : ans;
        
    }    
        
    }
};
