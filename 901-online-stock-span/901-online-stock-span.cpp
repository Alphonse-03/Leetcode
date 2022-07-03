class StockSpanner {
public:
    stack<int> st;
    vector<int> arr;
    StockSpanner() {
    }
    int cnt=0;
    int next(int price) {
        while(st.size() && arr[st.top()-1]<=price){
            st.pop();
        }
        cnt++;
        st.push(cnt);

        arr.push_back(price);
        if(st.size()==1)return st.top();
        else{
            int back=st.top();
            st.pop();
            int back2=st.top();
            st.push(back);
            return back-back2;
        }
        
       
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */