#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int prefixEval(string s){
    stack<int> st;

    for(int i=(s.size())-1;i>=0;i--){ //we ar eiterating the loop in reverse order
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1,operand2));
                    break;
                default:
                    cout<<"No valid Operator!!";
                    break;


            }
        }
    }
    return st.top();
}

int main()
{
    string s="-+7*45+20";
    int val=prefixEval(s);
    cout<<val;

}
