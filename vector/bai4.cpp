#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	vector<int > evaluate;
	int danhgia;cin>>danhgia;
	for(int i=0;i<danhgia;i++){
		int x;cin>>x;
		evaluate.push_back(x);
	}
	cout<< *min_element(evaluate.begin(),evaluate.end())<<endl;
	cout<< *max_element(evaluate.begin(),evaluate.end())<<endl;
	cout<< accumulate(evaluate.begin(),evaluate.end(),0);
}
