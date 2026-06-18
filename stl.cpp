#include<bits/stdc++.h>
using namespace std;

void print(){
    cout << "shivani";

}
int sum (int a, int b){
    return a+b;
}

// Pairs
void explainPairs(){

    pair<int,int> p = {1,3};

    cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> p1 = {1,{3,4}};

    cout << p1.first << " " << p1.second.second <<p1.second.first << endl;

    pair<int,int>arr[] p2 = {{1,2},{2,5},{5,1}};
    cout << arr[1].second << endl;
}

// vectors
void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); // 5 elements with value 100

    vector<int> v(5); // 5 elements with value 0

    vector<int> v1(5,20); // 5 elements with value 20
    vector<int> v2(v1); // copy of v1


    vector<int>::iterator it = v.begin();
    it++; // points to 2nd index
    cout << *(it) << " "; // prints 100

    it =it + 2; // points to 4th index
    cout << *(it) << " "; // prints 100

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rbegin(); // reverse iterator
    vector<int>::iterator it = v.rend(); // reverse iterator


    cout << v[0] << " " << v.at(0) << endl; // prints 100
    cout << v.back() << endl; // prints 100


for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";

    
}

for(auto it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

for(auto it : v){
    cout << it << " ";
}

}

v.erase(v.begin()+1); // removes 2nd element
v.erase(v.begin()+1, v.begin()+3); // removes 2nd and 3rd element

//Insert function
vector<int> v(2,100); // 100,100
v.insert(v.begin(),300); // 300,100,100
v.insert(v.begin()+1,2,10); // 300,10,10,100,100

vector<int> copy(2,50); // 50,50
v.insert(v.begin(),copy.begin(),copy.end()); // 50,50,300,10,10,100,100

cout << v.size() << endl; // prints 7

v.pop_back(); // removes last element

v1.swap(v2); // swaps v1 and v2

v.clear(); // removes all elements

cout << v.empty() << endl; // prints 1 if empty, 0 if not


// list
list<int> ls;
ls.push_back(2); // 2
ls.emplace_back(4); // 2,4
ls.push_front(5); // 5,2,4
ls.emplace_front(1); // 1,5,2,4

// rest functions are same as vector
// begin, end, rbegin, rend, erase, size, swap, clear, empty


void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // 1
    dq.emplace_back(2); // 1,2
    dq.push_front(4); // 4,1,2
    dq.emplace_front(3); // 3,4,1,2

    dq.pop_back(); // 3,4,1
    dq.pop_front(); // 4,1

    cout << dq.back() << endl; // prints 1
    cout << dq.front() << endl; // prints 4

}

void explainStack(){
    stack<int> st;
    st.push(1); // 1
    st.push(2); // 1,2
    st.push(3); // 1,2,3
    st.push(3); // 1,2,3,3
    st.emplace(5); // 1,2,3,3,5


    cout << st.top() << endl; // prints 3

    st.pop(); // 1,2

    cout << st.top() << endl; // prints 2

    cout << st.size() << endl; // prints 2

    cout << st.empty() << endl; // prints 0 if not empty, 1 if empty
    stack<int> st1,st2;
    st1.swap(st2); // swaps st1 and st2
}

void explainQueue(){
    queue<int> q;
    q.push(1); // 1
    q.push(2); // 1,2
    q.emplace(4); // 1,2,4

    cout << q.back() << endl; // prints 4
    cout << q.front() << endl; // prints 1

    q.pop(); // 2,4

    cout << q.front() << endl; // prints 2

    cout << q.size() << endl; // prints 2

    cout << q.empty() << endl; // prints 0 if not empty, 1 if empty
}

void explainPriorityQueue(){
    priority_queue<int> pq; // max heap
    pq.push(5); // 5
    pq.push(2); // 5,2
    pq.push(8); // 8,5,2
    pq.emplace(10); // 10,8,5,2

    cout << pq.top() << endl; // prints 10

    pq.pop(); // 8,5,2

    cout << pq.top() << endl; // prints 8

    cout << pq.size() << endl; // prints 3

    cout << pq.empty() << endl; // prints 0 if not empty, 1 if empty

    priority_queue<int,vector<int>,greater<int>> minheap; // min heap
}

void explainSet(){
    set<int> st; // unique and sorted
    st.insert(1); // 1
    st.emplace(2); // 1,2
    st.insert(2); // 1,2
    st.insert(4); // 1,2,4
    st.insert(3); // 1,2,3,4

    for(auto it:st){
        cout << it << " "; // prints 1 2 3 4
    }
    cout << endl;

    set<int>::iterator it = st.find(3); // returns iterator to 3
    if(it != st.end()){
        cout << "Found " << *it << endl; // prints Found 3
    }

    st.erase(2); // removes 2

    for(auto it:st){
        cout << it << " "; // prints 1 3 4
    }
    cout << endl;

    cout << st.count(3) << endl; // prints 1 if found, 0 if not found

}

void explainMultiSet(){
    multiset<int> ms; // unique and sorted
    ms.insert(1); // 1
    ms.emplace(2); // 1,2
    ms.insert(2); // 1,2,2
    ms.insert(4); // 1,2,2,4
    ms.insert(3); // 1,2,2,3,4

    for(auto it:ms){
        cout << it << " "; // prints 1 2 2 3 4
    }
    cout << endl;

    multiset<int>::iterator it = ms.find(3); // returns iterator to 3
    if(it != ms.end()){
        cout << "Found " << *it << endl; // prints Found 3
    }

    ms.erase(2); // removes all occurrences of 2

    for(auto it:ms){
        cout << it << " "; // prints 1 3 4
    }
    cout << endl;

    cout << ms.count(3) << endl; // prints 1 if found, 0 if not found

}

void explainUnorderedSet(){
    unordered set<int> st;
    // lower_bound and upper_bound funtion
    // does not works,rest all function are same
    // as above it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, exept some when collisions happens
}

void explainMap(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] =2;
    mpp.emplace({3,1});
    mpp.insert({2,4});

    mpp[{2,3}] = 10;

    for(auto it: mpp){
        cout<< it.first<<" " << it.second <<endl;
    }
    cout << mpp[1];
    cout << mpp[5];
    auto it = mpp.find(3);
    cout << *(it).second;
    
    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // erase swap,size,empty are same as above
}

void explainMultimap(){
    // everything same as map only it can store multiple keys
    // only mpp[keys] cannot be used here
}

void explainUnorderedmap(){
    // same as set and unoredered set difference
}

bool comp(pair<int, int > p1, pair<int, int>p2){
    if(p1.second<p2.second){
        return true;

    }
    else if(p1.second == p2.second){
        if (p1.first > p2.second)
        return true;
    }
    return false;

}
void explainExtra(){
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return true;
// they are same
if (p1.first > p2.first)return true;
return false;
}

int main(){
print();
int s = sum(10,20);
cout << s;
    return 0;
}