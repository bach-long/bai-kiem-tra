#include<bits/stdc++.h>
using namespace std;
void hoanvi(string s,int low,int high){
  	if(low==high){
  	cout<<s<<endl;

  }
  	for(int i=low;i<=high;i++){
  		swap(s[i],s[low]);
  		hoanvi(s,low+1,high);
	  }
  }
  string save;
  vector<string> result;
void tapcon(int n,string s,int low=0){
	if(n==0){
		//cout<<save;
		//cout<<endl;
		result.push_back(save);
		}
		else{
	for(int i=low;i<=s.length()-n;i++){
		save.push_back(s[i]);
		tapcon( n-1, s, i+1);

		save.pop_back();
	}
  }
}

int main(){
	string a="abcde";
	for(int i=1;i<=5;i++){
		tapcon(i,a,0);
	}
	for(int i=0;i<result.size();i++){
        hoanvi(result[i],0,result[i].length()-1);
	}
}
