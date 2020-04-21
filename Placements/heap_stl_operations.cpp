/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(nlogn), since heapify takes O(logn) and build heap call takes O(n)
 * title :  Heap-STL/vector heap/ priority queue heap
 */
#include<bits/stdc++.h>
using namespace std;
void heapVector();
void heapPriorityQueue();
int main()
{
	
	heapVector(); // heap by a vector
	heapPriorityQueue(); // heap by a priority queue
	
}
void heapVector()
{
	vector<int> v={12,2,3,4,11};
	//vector<int> :: iterator it; // no need of iterators in vector datatype
	cout<<"Vector in initial form"<<endl;
	for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	} 
	cout<<"\nVector in heap form"<<endl;
	make_heap(begin(v),end(v));	//1. make_heap() :- This function is used to convert a range in a container to a heap.
	for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"Max element of heap"<<endl;
	cout<<v.front()<<endl; 			//2. front() :- This function displays the first element of heap which is the maximum number.
	cout<<"Min element of heap"<<endl;
	cout<<v.back()<<endl;				//3. front() :- This function displays the first element of heap which is the minimum number.
	cout<<"Heap after insertion of 50"<<endl;
	v.push_back(50); 					// using push_heap() to reorder elements
    push_heap(v.begin(), v.end());
    for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"Sort in descending order"<<endl;
	sort(v.begin(),v.end(),greater<int>());// sort descending order wise //passing a greater greater<int>()
	for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	pop_heap(begin(v),end(v)); //pop the root element with the last element and heapify again and the previous root element at the last
	v.pop_back(); //pop the last element .i.e. previous root
	cout<<"After deletion of max element"<<endl;
	for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"Sort heap in ascending order"<<endl;
    sort_heap(v.begin(),v.end()); //	5. sort_heap() :- This function is used to sort the heap. After this operation, the container is no longer a heap.
	for(auto it=v.begin(); it!=v.end();it++) //print vector
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void heapPriorityQueue()
{
	cout<<"Heap by priority queue"<<endl;
	cout<<"Max heap"<<endl;
	priority_queue<int> q; // max heap;
	q.push(5);
	q.push(3);
	q.push(8);
	q.push(9);
	while(q.empty()==false)
	{
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
	cout<<"Min heap"<<endl;
	priority_queue<int, vector<int>,greater<int>> q1; // min heap;
	q1.push(5);
	q1.push(3);
	q1.push(8);
	q1.push(9);
	while(q1.empty()==false)
	{
		cout<<q1.top()<<" ";
		q1.pop();
	}
	cout<<endl;
}
// note: we use greater<int> in a data structure and greater<int>() in a function call to sort descending.
