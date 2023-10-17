#include <bits/stdc++.h>
using namespace std;

//sort the string vector in decreasing order of their length.
bool comp(string &s1,string &s2)
{
    return s1.size()>s2.size();
}

void solve(){
    clock_t start_time = clock();

    //taking input
    vector<string>words;
    for(int i=0;i<200000;i++){
      string temp;
      cin>>temp;
      if(temp=="") break;
      words.push_back(temp);
    }
    
    //making a set for efficient search
    unordered_set<string> words_set;
    for (string word : words) words_set.insert(word);
    
    //res to store the result
    vector<string> res;

    //Sorting the word vector in decreasing order of word's length to improve the processing of the program.
    // We will start checking from the longest word, if it is compounded or not. After storing 2 desired words in res we will break through the process. 
    sort(words.begin(),words.end(),comp);
    
    // checking each word to be compounded or not using DP. If it is , then store in the res vector.
    for(string word:words){
      int n=word.size();
      vector<int>dp(n+1,0);
      dp[0]=1;
      for(int i=0;i<n;i++){
        if(!dp[i]) continue;
        for(int j=i+1;j<=n;j++){
          if(j-i<n && words_set.count(word.substr(i,j-i))){
            dp[j] = 1;
          }
        }
        if(dp[n]){
          res.push_back(word);
          break;
        }
        if(res.size()==2) break;
      }
    }

    // Outputing the result
    cout<<"Longest Compound Word"<<" "<<res[0]<<endl;
    cout<<"Second Longest Compound Word"<<" "<<res[1]<<endl;
    clock_t end_time1 = clock();
    clock_t result = end_time1 - start_time;
    cout<<"Time taken to process file Input_02.txt"<<" "<<result<<" miliseconds" << endl;
}

//main fxn
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
#endif
	solve();
	return 0;
}
