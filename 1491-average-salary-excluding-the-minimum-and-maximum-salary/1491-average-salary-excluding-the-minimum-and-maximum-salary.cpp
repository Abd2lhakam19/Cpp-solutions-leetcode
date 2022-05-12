class Solution {
public:
    double average(vector<int>& salary) {
        cout<<fixed<<setprecision(5);
        vector<int>update;
    sort(salary.begin(),salary.end());
    int mn = salary[0],mx = salary[salary.size()-1];
    for(int i =0;i<salary.size();i++)
    {
        if(salary[i]!=mn&&salary[i]!=mx)
            update.push_back(salary[i]);
    }
    double res = 0,sum = 0;
    for(int i = 0;i<update.size();i++)
    sum+=update[i];
    res = sum/update.size();
    return res;
    }
};