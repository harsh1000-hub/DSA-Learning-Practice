#include<bits/stdc++.h>
using namespace std;
int main(){
	// Pair STL 
	pair<int,string> p;
	// first way to assign the value to a pair
	p=make_pair(2,"abc");
	// second way to assign the value to a pair
	p={1,"abc"};
	cout<<p.first<<" "<<p.second<<endl;

	// Copy the content of one pair to other pair
	pair<int,string> p1 = p; // this is pass by value  -> only copy is pass not original referrence
	pair<int,string> &p2 = p; // this is pass by referrence  -> in this case if you change p1 pair value it also change the pair p value
	p2.first = 20;
	p2.second = "Harsh";
	cout<<"Pair p value:- "<<p.first<< " "<<p.second<<endl;
    cout<<"Pair p1 value:- "<<p1.first<< " "<<p1.second<<endl;
    cout<<"Pair p2 value:- "<<p2.first<< " "<<p2.second<<endl;


    // Why we need Pair in C++ -> To maintain a relationship b/w to things
    // For example there are 2 array a[3]={1,2,3} and b[3]={2,3,4} so if you want that array a value are swap and changes
    // all reflect in array b because each indices of array a & b are related to each other so without using pair 
    // first time you swap elements in array a and than in array b 
    // And using pair at one time swap element in array a & b

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
    	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    // take input in pair
    pair<int,int> pair1;
    cin>>pair1.first;
    cout<<pair1.first<<endl;
	return 0;
}