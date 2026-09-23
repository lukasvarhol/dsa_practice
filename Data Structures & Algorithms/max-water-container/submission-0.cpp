class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int>::iterator f_it = heights.begin();
        vector<int>::iterator b_it = heights.end() - 1;

        std::stack<int> largest_area;
        while (f_it != b_it) {
            int height = std::min(*f_it, *b_it);
            int distance = std::distance(f_it, b_it);
            int area = height * distance;

            if (largest_area.empty()) {
                largest_area.push(area);
            } else if (largest_area.top() <= area) {
                if (largest_area.top() < area) largest_area.pop();
                largest_area.push(area); 
            }
            
            if (*f_it < *b_it) f_it++;
            else b_it--;
        }

        return largest_area.top();
    }
};
