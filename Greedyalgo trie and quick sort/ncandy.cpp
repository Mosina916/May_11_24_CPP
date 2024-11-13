//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        // min
        int i=0;
        int l=N-1;
        
        int minamt=0;
        
        while(l>=i){
        minamt=minamt+candies[i];//1+2+3
        i++;
        l=l-K;
        }
        
        // max
        int maxiamt=0;
        
        i=0;
        int j=N-1;
        while(i<=j){
        maxiamt=maxiamt+candies[j];//9
        j--;
        i=i+K;
        }
        
        
        vector<int> v;
        v.push_back(minamt);
         v.push_back(maxiamt);
         return v;
        
        
        
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends