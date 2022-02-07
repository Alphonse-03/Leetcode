class Bitset {
public:
    string str="";
    string rev="";
    int set=0;
    Bitset(int size) {
        for(int i=0;i<size;i++)
        {
            str.push_back('0');
            rev.push_back('1');
        }
    }
    
    void fix(int idx) {
        if(str[idx]=='0')
        {
            set++;
            str[idx]='1';
            rev[idx]='0';
        }
    }
    
    void unfix(int idx) {
         if(str[idx]=='1')
        {
            set--;
            str[idx]='0';
            rev[idx]='1';
        }
    }
    
    void flip() {
        swap(str,rev);
        set=str.size()-set;
    }
    
    bool all() {
        return set==str.size();
    }
    
    bool one() {
        return set>=1;
    }
    
    int count() {
        return set;
    }
    
    string toString() {
        return str;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */