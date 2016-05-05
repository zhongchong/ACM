class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> hash_map;
        vector<pair<int,int>> hash_vector;
        vector<int> top;
        for( auto i : nums)
        {
            if( hash_map.find(i) == hash_map.end() )
                hash_map.insert( {i,1} );
            else
                ++( hash_map.find(i)->second );
        }
        for(  auto it=hash_map.begin(); it!=hash_map.end(); ++it)
        {
            hash_vector.push_back(*it);
        }
        struct comp{
            bool operator()(const pair<int, int>& x, const pair<int, int>& y)  
            {
                return x.second > y.second; 
            }
        };
        sort(hash_vector.begin(),hash_vector.end(),comp());
        for( int i=0; i<k; ++i)
        {
            top.push_back( hash_vector.at(i).first );
            cout<<hash_vector.at(i).first<<endl;
        }
        return top;
    }
};