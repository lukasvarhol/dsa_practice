class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int>::iterator f_it = heights.begin();
        vector<int>::iterator b_it = heights.end() - 1;

        int largest_area{};
        while (f_it != b_it) {
            int height = std::min(*f_it, *b_it);
            int distance = int(std::distance(f_it, b_it));
            int area = height * distance;

            if (largest_area <= area) {
                largest_area = area; 
            }
            
            if (*f_it < *b_it) f_it++;
            else b_it--;
        }

        return largest_area;
    }
};
