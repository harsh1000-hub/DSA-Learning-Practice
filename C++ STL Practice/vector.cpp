#include<bits/stdc++.h>
using namespace std;
int main(){
	// Vector
	vector<int> v;  // declare vector
	vector<int> v1(5); // declare vector with specific size and by default value assign to vector v1 is 0
	vector<int> v2(5,-1); // declare vector with specific size and specific value -1 assign to vector v2

	// basic vector functions
	// push_back() -> add element in the end of the vector T.C. -> O(1)
	// pop_back() -> remove element from the end of the vector T.C. -> O(1)
	// size() -> give the size of the vector T.C. -> O(1)

	// assign one whole vector to other vector
	vector<int> v3 = v2; // T.C. for assign the whole vector is O(n) and this very expensive operation
	// So don't use directly assign one vector to another vector or you can say pass by value because this will make another copy
	// Rather than use pass by referrence concept
	vector<int> &v4 = v2;  // In this original vector v2 pass to vector v4 means any changes in v4 reflect the changes in vector v2


	// code vector stl

	vector<int> a;
	int n;
	cin>>n;
	cout<<"Take input in vector"<<endl;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	cout<<"Output the vector"<<endl;
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	return 0;
}