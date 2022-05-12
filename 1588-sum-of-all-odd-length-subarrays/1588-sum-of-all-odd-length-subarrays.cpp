class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
   long long sum = 0;
   for(int i =0;i<arr.size();i++)
   {
       sum+=arr[i];
   }
        if(arr.size()==1)
        {
            return sum;
        }
   if(arr.size()%2!=0)
    sum*=2;
    if(arr.size()==3)
    {
        return sum;
    }
    else if(arr.size()==2)
    {
        return sum;
    }
    else{
   for(int i =0;i<arr.size();i++)
   {
       for(int j = i+1;j<arr.size();j++)
       {
           for(int k = i;k<=j;k++)
           {
               if((j-i)==1&&k==0&&arr.size()%2!=0)
               sum-=arr[k];
               if((j-i)%2==0)
               {
                   sum+=arr[k];
               }
               if((j-i)==arr.size()-1)
                break;

           }
       }
   }
   return sum;
    }
    }
};