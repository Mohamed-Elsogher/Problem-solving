class Solution {
    public boolean isValid(String s) {
/*
stack = ( or { or [ 
*/
        Stack<Character> stack = new Stack <>();

        for (int i = 0 ; i < s.length() ; i++){

            char ch = s.charAt(i);
            
            if (ch == '(' || ch == '{' || ch == '['){ // stack = ( 
                stack.push(ch);
            }
            else if ( ch == ')' || ch == '}' || ch == ']'){

                if (stack.isEmpty()){
                    return false; 
                }

                char top = stack.pop(); 

                if (ch == ')' && top != '('){
                    return false ;
                }
               else  if (ch == '}' && top != '{'){
                    return false ;
                }
                else  if (ch == ']' && top != '['){
                    return false ;
                }
            }

        }
        return stack.isEmpty();

        

    }
}
