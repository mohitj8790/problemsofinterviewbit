vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
  int i;
  long long sum=0;
  long long sq=0;
  long long temp;
  for(i=0;i<A.size();i++)
  {
      temp=A[i];
      sum+=temp;
      sum-=(i+1);
      sq+=temp*temp;
      sq-=(long long) (i+1)*(long long)(i+1);
      
  }
  sq=int(sq/sum);
  
  int a=int((sum+sq)/2);
  int b=sq-a;
  vector<int> ans;
  ans.push_back(a);
  ans.push_back(b);
  return ans;
  
  
}

