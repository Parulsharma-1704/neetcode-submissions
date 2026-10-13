class Solution {
    public int operation(int val1, int val2, String op){
        if(op.equals("+")){
            return val1+val2;
        }
        if(op.equals("-")){
            return val1>val2 ? val1-val2 : val2-val1;
        }
        if(op.equals("*")){
            return val1*val2;
        }
        if(op.equals("/")){
            return val1>val2 ? (val1/val2) : (val2/val1); 
        }
        return -1;
    }
    public int evalRPN(String[] tokens) {
        Stack<Integer>st=new Stack<>();

        for(int i=0;i<tokens.length;i++){
            if(!tokens[i].equals("+") && !tokens[i].equals("-") && !tokens[i].equals("*") && !tokens[i].equals("/")){
                st.push(Integer.parseInt(tokens[i]));
            }
            else{
                int val1=st.peek();
                st.pop();
                int val2=st.peek();
                st.pop();
                int res=operation(val1,val2,tokens[i]);
                st.push(res);
            }
        }
        return st.peek();
    }
}
