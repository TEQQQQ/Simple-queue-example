#include<iostream>
#include<queue>
using namespace std;

void printqueue(queue<int> n){
	while(!n.empty()){
		cout<<n.front()<<" ";
		n.pop();
	}
}

int main(){
	queue<int> numbers;
	numbers.push(4);
	numbers.push(7);
	numbers.push(9);
	numbers.push(81);
	
	cout<<"kuyrugun boyutu: "<<numbers.size()<<endl;
	cout<<"kuyrugun ilk elemani: "<<numbers.front()<<endl;
	cout<<"kuyrugun son elamani: "<<numbers.back()<<endl;
	cout<<"kuyrugun elemanlari: "<<endl;
	
	printqueue(numbers);
	
}
