class Solution {
public:
    bool isCircularSentence(string sentence) {
        char prev= sentence[sentence.size()-1];
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]!=prev){return false;}
            while(i<sentence.size()&&sentence[i]!=' '){
                i++;
            }
            prev=sentence[i-1];
        }
        return true;

    }
};
