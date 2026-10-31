class LRUCache {
    class Node{
        public:
        int val;
        int key;
        Node*next;
        Node*prev;
    };
    Node*head;
    Node*tail;
    int sz;
    int cap;
    
    unordered_map<int,Node*>m;


public:
    LRUCache(int capacity) {
        cap=capacity;
        head=nullptr;
        tail=nullptr;
        sz=0;
    }
    int get(int key) {
        if(!m.count(key))return -1;
        Node*p=m[key];
        
        
        if(p!=head){
            if(p==tail)tail=tail->prev;
            p->prev->next=p->next;
            if(p->next){
                p->next->prev=p->prev;
            }
            head->prev=p;
            p->next=head;
            head=p;
        }
        m[key]=head;
        return m[key]->val;
        
    }
    
    void put(int key, int value) {
        if(!m.count(key)){
            Node*tmp=new Node;tmp->val=value;tmp->prev=nullptr;tmp->next=nullptr;tmp->key=key;
            if(sz==0){
                head=tmp;
                tail=tmp;
            }
            else{
                head->prev=tmp;
                tmp->next=head;
                head=tmp;
            }
            sz++;
            m[key]=head;
        }
        else{
            Node*p=m[key];
            if(p!=head){
                if(p==tail){
                    tail=tail->prev;
                }
                p->prev->next=p->next;
                if(p->next){
                p->next->prev=p->prev;
                }
                p->next=head;
                head->prev=p;
                head=p;
            }
            head->val=value;
        }
        if(sz>cap){
            Node* tmp=tail;
            m.erase(tmp->key);
            tail=tail->prev;
            tail->next=nullptr;
            delete tmp;
            sz--;
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */