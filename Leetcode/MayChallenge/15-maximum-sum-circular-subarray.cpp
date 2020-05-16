// Day 15 of LeetCode May Challenge, by Kartik Mohan
// Maximum Sum Circular Subarray
class Solution {
public:
    int kadane(vector<int>& a,int n)
    {
        int max_local=a[0];
        int max_global=a[0];
        for(int i=1;i<n;i++)
        {
            max_local=max(a[i],a[i]+max_local);
            max_global=max(max_local,max_global);
        }
        return max_global;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int n=A.size();
        if(n==0) return 0;
        if(n==1) return A[0];
        int n1=kadane(A,n),n2,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            A[i]=-A[i];
        }
        n2=kadane(A,n);
        if(sum+n2 == 0) return n1;
        n2=sum+n2;
        return max(n1,n2);
    }
};
