class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutesarray;
        for(int i=0;i<timePoints.size();i++)
        {
           string  curr=timePoints[i];
        int hours=stoi( curr.substr(0,2) );
        int minutes=stoi( curr.substr(3,2) );
        int totalmin=(hours*60+minutes);
        minutesarray.push_back(totalmin);
        }
        sort(minutesarray.begin(),minutesarray.end());
        int mini=INT_MAX;
        int n=minutesarray.size();
        for(int i=0;i<n-1;i++)
        {
        int diff=minutesarray[i+1]-minutesarray[i];
     mini=min(mini,diff);
        }
        int last_to_first_diff=(minutesarray[0]+1440)-minutesarray[n-1];
        mini=min(last_to_first_diff,mini);
        return mini;
    }   
   
};