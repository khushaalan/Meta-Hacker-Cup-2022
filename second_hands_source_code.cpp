#include <bits/stdc++.h>
using namespace std;

bool is_Triple(int S[],int sz){

  //check whether the array hv triple pair
  //only if the number of elements greater than 2, do this process.otherwise there is no possibility to hv triple pair.
  if(sz>=3){
    int count=0;
    for(int i=0;i<sz;i++){
      //for each element check whether the following two elements are equal. 
      //if they make up a triple pair, then increase the count by 1. if there is at least one triple pair then return true;
      //it should print out "NO"
      if(S[i]==S[i+1] && S[i]==S[i+2]){count++;}
      //else do nothing
      else{count=count+0;}
    }

    if(count>0){return true;}
    else{return false;}
  }

  else if(sz<3){return false;}
}


int main(){
  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  int tt,N,K;
  cin >> tt;

  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    cin >> N >> K;  
    int S[N];
    //N--> number of pre-owned clock parts for sale
    //K--> max number of parts each display cases can hold
    //there are two display cases

    for(int i=0;i<N;i++){
      cin >> S[i];
    }

    if(N>(K*2)){cout << "NO\n";}
    else{int sz=sizeof(S) / sizeof(S[0]); sort(S, S + sz);  cout << (is_Triple(S,sz)? "NO":"YES") << "\n";}
  }
  
  return 0;
}