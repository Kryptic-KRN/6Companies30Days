class Solution {
public:
    struct Engineer {
        Engineer(){}
        Engineer(int _speed, int _efficiency) : speed(_speed), efficiency(_efficiency) {}
        int speed;
        int efficiency;
    };
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<Engineer> v(n);
        for(int i=0;i<n;i++){
            v[i]=Engineer(speed[i],efficiency[i]);
        }
        sort(v.begin(),v.end(),[](const auto& lhs,const auto& rhs){
            if(lhs.efficiency!=rhs.efficiency){
                return lhs.efficiency>rhs.efficiency;
            }
            return lhs.speed>rhs.speed;
        });
        priority_queue<int,vector<int>,std::greater<>> pq;
        long sum_s=0,ans=0;
        for(int i=0;i<n;i++){
            if(pq.size()==k){
                if(v[i].speed<pq.top()) continue;
                sum_s-=pq.top();
                pq.pop();
            }
            sum_s+=v[i].speed;
            pq.push(v[i].speed);
            ans=max(ans,sum_s*v[i].efficiency);
        }
        int mod=1e9+7;
        return ans%mod;
    }
};