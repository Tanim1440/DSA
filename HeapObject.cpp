#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Student{
    public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name=name;
        this->marks=marks;
    }
    
    // must have operator overloading
    bool operator < (const Student &obj) const{
        return this->marks < obj.marks;
    }
};

int main(){
    priority_queue<Student>pq;

    pq.push(Student("tanim",82));
    pq.push(Student("rakib",88));
    pq.push(Student("napi",92));

    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
}