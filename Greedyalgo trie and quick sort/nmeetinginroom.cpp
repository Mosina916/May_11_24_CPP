//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  static bool cmp(pair<int,int> p1,pair<int,int> p2){
      return p1.second<p2.second;
      
      
  }
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int> start, vector<int> end) {
        // Your code here
        vector<pair<int,int> > v;
       for(int i=0;i<start.size();i++){
       pair<int,int> p=make_pair(start[i],end[i]);
       v.push_back(p);
       }
       
       
       sort(v.begin(),v.end(),cmp);
       
       int mcount=1;
       int mend=v[0].second;//2
       
       for(int i=1;i<v.size();i++){
       if(v[i].first>mend){
           mcount++;
           mend=v[i].second;
       }
       }
       
       
       
       return mcount;
       
       
       
        
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends