#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    string s = "";
    for(int i=0;i<nums.size();i++){
        s.append(std::to_string(nums[i]));
        if(i != nums.size()-1){
            s.append(" ");
        }
    }
    
    return s;
}

int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }
    return sum;
}
int num_vector_product(const vector<int>& nums){
    int prodct = nums[0];
    for(int i=1;i<nums.size();i++){
        prodct *= nums[i];
    }
    return prodct;
}
