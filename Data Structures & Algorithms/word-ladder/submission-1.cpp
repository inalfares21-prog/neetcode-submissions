class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int sz;
        int res=1;
        unordered_set<string>s;
        for(int i=0;i<wordList.size();i++){
            s.insert(wordList[i]);
        }
        unordered_set<string>visited;
        queue<string>q;
        q.push(beginWord);
        visited.insert(beginWord);
        while(!q.empty()){
            sz=q.size();
            for(int i=0;i<sz;i++){
                string temp=q.front();
                for(int j=0;j<temp.size();j++){
                    for(char c='a';c<'z'+1;c++){
                        q.front()[j]=c;
                        if(s.count(q.front())){
                            if(q.front()==endWord){
                                return res+1;
                            }
                            if(!visited.count(q.front())){
                                q.push(q.front());
                                cout<<q.front()<<endl;
                                visited.insert(q.front());
                            }
                            
                        }
                    }
                    q.front()=temp;
                }
                q.pop();
               
            }
            res++;
        }
        return 0;
        
    }
};
