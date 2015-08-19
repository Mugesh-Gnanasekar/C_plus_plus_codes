#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* Head;
void Insert(int x){
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	temp->next = Head;
	Head = temp;
}

void Print(){
	Node* temp = Head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
	cout << '\n';
}

int main(){	
	Head = NULL;
	int n,x,i;
	cout << "Enter the number of elements you want to add:\n";
	cin >> n;
	for (i=0; i < n; i++){
		cout << "Enter the number:\n";
		cin >> x;
		Insert(x);
		Print();

	}

	system("pause");
}