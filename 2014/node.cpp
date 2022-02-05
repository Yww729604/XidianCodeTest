#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	string s;
	string t;
	struct node *next;
}*linkList;

void init(linkList &l)
{
	int d;
	while(cin>>d)
	{
		linkList tempNode = (linkList)malloc(sizeof(struct node));
		tempNode->data = d;
		tempNode->next = l;
		l = tempNode;
	}
}

void print(linkList l)
{
	linkList p = l;
	while(p != NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
}

int main(int argc, char const *argv[])
{
	linkList l = NULL;
	init(l);
	print(l);
	return 0;
}