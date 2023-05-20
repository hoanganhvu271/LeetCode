class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
	for(int i = 0; i< s.size(); i++)
	{
		if(s[i] == '{' || s[i] == '[' || s[i] == '(')
			st.push(s[i]);
		else
		{
			if(st.empty())
			{
				return false;
			}
			
			char tmp = st.top();
			if(s[i] == ')' && tmp != '(')
			{
				
				return false;
			}
			else if(s[i] == ']' && tmp != '[')	
			{
				
				return false;
			}
			else if(s[i] == '}' && tmp != '{')	
			{
		
				return false;
			}
			else st.pop();
		}	
	}
	
	if(st.empty())	return true;
	else return false;
    }
};
