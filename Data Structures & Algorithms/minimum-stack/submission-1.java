class MinStack {
    Stack<Integer>st=new Stack<>();
    Stack<Integer>minSt=new Stack<>();
    public MinStack() {
        
    }
    
    public void push(int val) {
        if(st.isEmpty()){
            st.push(val);
            minSt.push(val);
        }
        else{
            st.push(val);
            if(val<=minSt.peek()){
                minSt.push(val);
            }
        }
    }
    
    public void pop() {
        int val=st.peek();
        st.pop();
        if(val==minSt.peek()){
            minSt.pop();
        }
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return minSt.peek();
    }
}
