class Solution {
public:
string multi(string num, char ch)
{
    string ans="";
    int d= ch-'0';
    int car=0; 
    int rem;
    for(int i=num.size()-1;i>=0;i--)
    {
        int temp=num[i]-'0';
        rem=(temp*d + car)%10;
        ans.push_back(rem+'0');
        car=(temp*d + car)/10;

    }
    if(car!=0)
    {
        ans.push_back(car +'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
string add(string num1 , string num2)
{
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());
    int i=0;
    int j=0;
    int car=0;
    while(i<num1.size() && j<num2.size())
    {
        char rem =(((num1[i]-'0')+(num2[i]-'0')+ car)%10 )+'0';
        car =((num1[i]-'0')+(num2[i]-'0')+ car)/10 ;
        num1[i]=rem;
        i++;
        j++;
    }
    while(i<num1.size())
    {
         char rem =(((num1[i]-'0')+ car)%10) +'0';
        car =((num1[i]-'0')+ car)/10 ;
        num1[i]=rem;
        i++;
    }
    
    if(car!=0)
    {
        num1.push_back(car +'0');
    }
    reverse(num1.begin(),num1.end());
    return num1;
}
    string multiply(string num1, string num2) {
      int n1=num1.size();
      int n2=num2.size();
        if(num1=="0" || num2 == "0"){
            return "0";
        }
        string ans =multi(num1, num2[n2-1]);
        int x=1;
        for (int i=num2.size()-2;i>=0;i--){
            string temp = multi(num1,num2[i]);
            for(int j=0;j<x;j++){
                temp.push_back('0');
            }
            if(temp.size()>ans.size()){
              ans = add(temp,ans);  
            }
            else{
            ans = add(ans,temp);
                
            }
            x++;
        }
        return ans;
    }
};


// num2 = 456
// num1 = 123

// ans = "10488"


// temp = "45600"
