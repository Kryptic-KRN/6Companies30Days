class Solution{
public:
    string latest_version(string v1, string v2){
        if(v1=="" || v2=="")
            return "Invalid Input!!";
        int vnum1=0,vnum2=0;
        for(int i=0, j=0; (i<v1.length() || j<v2.length());){
            while(i<v1.length() && v1[i]!='.'){
                vnum1=vnum1*10+(v1[i]-'0');
                i++;
            }
            while(j<v2.length() && v2[j]!='.'){
                vnum2=vnum2*10+(v2[j]-'0');
                j++;
            }
            if(vnum1>vnum2) return v1;
            if(vnum2>vnum1) return v2;
            vnum1=vnum2=0;
            i++;
            j++;
        }
        return (v1==v2)?v1:"Invalid Input!!";
    }
};