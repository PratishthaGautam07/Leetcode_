class Solution {
public: 
   int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(),piles.end());
    while(low<high){
    int koko = (low+high)/2;
    long long hours = 0;
    for(int bananas:piles){
        hours += (bananas+koko-1)/koko;
    }
    if(hours<=h){
        high = koko;
    }
    else {
        low = koko+1;
    }
    }
    return low;
        
    }
};