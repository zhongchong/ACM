class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,unsigned int> postion;
        unsigned int front,rear;
        unsigned max_len = 0;
        front = rear = 0;
        while(rear < s.size())
        {
            auto index = postion.find(s.at(rear));
            if(index == postion.end())
            {
                postion.insert(make_pair(s.at(rear),rear));
                ++rear;
            }
            else
            {
                auto len = rear - front;
                if(len > max_len)
                    max_len = len;
                for(unsigned int i=front; i < index->second; ++i)
                {
                    postion.erase(s.at(i));
                }
                front = index->second + 1;
                index->second = rear;
                ++rear;
            }
        }
        if(rear - front > max_len)
            max_len = rear - front;
        return max_len;
    }
};

