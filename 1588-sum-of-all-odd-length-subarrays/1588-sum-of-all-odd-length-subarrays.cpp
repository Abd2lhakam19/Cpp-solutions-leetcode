class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
   int sum = 0;
    for(int i =0;i<arr.size();i++){
        sum+=arr[i];
    }
//    if(arr.size()%2!=0)
//        sum*=2;
        for(int i =0;i<arr.size();i++)
        {
            for(int j = i+1;j<arr.size();j++)
            {
                for(int k = i;k<=j;k++)
                {
                    if((j-i)%2==0)
                        sum+=arr[k];
                }
            }
        }
        return sum;

    }
};