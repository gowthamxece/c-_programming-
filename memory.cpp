#include <iostream>
#include <memory>
#include <string>
using namespace std;
int main()
{
int id;
string method;
public:
MemoryTracker(int _id,string _method):id(_id),method(_method){
cout<<"[allocated] object"<<id<<"created via"<<method<<"@"<<this<<endl;

}
~MemoryTraker(){
cout<<"[FREED] Object"<<id<<"destoyed(memory relesed) @"<<this<<endl;

}

void  dotask(){
cout<<"-> Object "<<id<<"is  processing data..."<<endl;
}
};
void demonsterateRawPointer(){
cout<<"\n-----staring smart Pointer scope-----"<<endl;
}