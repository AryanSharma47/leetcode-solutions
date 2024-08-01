//Beats 100% Users || Simplext Approach Using Stack
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;

        for(int i=0;i<path.length();i++)
        {
            if(path[i]=='/')
            continue;

            string temp="";
            while(i<path.length() && path[i]!='/')
            temp+=path[i++];

            if(temp==".")
            continue;

            if(temp=="..")
            {
                if(!s.empty())
                s.pop();
            }
            else
            {
                s.push(temp);
            }
        }

        string finalPath="";
        while(!s.empty())
        {
            finalPath="/"+s.top()+finalPath;
            s.pop();
        }
        if(finalPath.size()==0)
        return "/";
        else
        return finalPath;
    }
};