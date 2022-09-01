#include <bits/stdc++.h>
using namespace std;
typedef vector< vector<char> > Matrix;


void print(Matrix& m){
   int R=m.size(); int C=m[0].size();
   //int dr[]={0,0,1,-1};
   //int dc[]={1,-1,0,0};
   //right(m[i][j+1]),left(m[i][j-1]),up(m[i-1][j]),down(m[i+1][j])

  //algo to swap '.' to '^' until all tree have two adjacent trees
    for(int i=0; i<R; i++) {
      for(int j=0; j<C; j++){
         if(m[i][j]=='^'){

          //CASE #1(RIGHT)
          if(m[i][j+1]=='^' || m[i][j+1]=='.'){
            m[i][j+1]='^';
            cout << i << "-->" << j << "\n";
          }
          //CASE #2(LEFT)
          else if(m[i][j-1]=='^' || m[i][j-1]=='.'){
            m[i][j-1]='^';
           cout << i << "-->" << j << "\n";
          }
          //CASE #3(UP)
          else if(m[i-1][j]=='^' || m[i-1][j]=='.'){
            m[i-1][j]='^';
            cout << i << "-->" << j << "\n";
          }
          //CASE #4(DOWN)
          else if(m[i+1][j]=='^' || m[i+1][j]=='.'){
            m[i+1][j]='^';
            cout << i << "-->" << j << "\n";
          }

         }
      }
   }

  //

   for(int i=0; i<R; i++) {
      for(int j=0; j<C; j++){
         cout << m[i][j] << " ";
      }
       cout << "\n";
   }
}


int main(){
  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  int tt,R,C;
  cin >> tt;

  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    cin >> R >> C;
    vector<char> row(C, 0); Matrix canvas(R, row) ;

    int count_tree=0;

    //intake the canvas matrix 2D
    for (int i=0;i<R;i++){
      for (int j=0;j<C;j++){
          cin >> canvas[i][j];
          if(canvas[i][j]=='^'){
            count_tree++;
          }
      }
    }


    //process algo
    if(count_tree==0){
      cout << "Possible\n";
      //print the canvas 2D
      for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
          cout << canvas[i][j];
        }
        cout << "\n";
      }
    }
    else{
      if(R==1 || C==1){
        cout << "Impossible\n";
      }
      else{
          ///
          cout << "Possible\n";
          //print the canvas 2D
          for (int i=0;i<R;i++){
            for (int j=0;j<C;j++){
                canvas[i][j]='^';
              cout << canvas[i][j];
            }
            cout << "\n";
          }
      }
    }
          //
      
  }

  return 0;
}