#include <bits/stdc++.h>

using namespace std;

typedef struct teamLink
{
	string tName;
	int tScore;
	int tNetGoal;
	struct teamLink* nextTeam;
}*TeamLink;

void Insert(TeamLink &tL,TeamLink t)
{
	if (tL == NULL)
		tL = t;
	else
	{
		TeamLink p = tL->nextTeam;
		TeamLink pre = tL;
		pre->nextTeam = p;
		while(p != NULL && p->tScore > t->tScore)
		{
			p = p->nextTeam;
			pre = pre->nextTeam;
		}
		if (p == NULL)
			pre->nextTeam = t;
		else
		{
			cout<<1<<"\t"<<p->tName<<"\t"<<p->tScore<<"\t"<<p->tNetGoal<<endl;
			
			while(p != NULL && p->tNetGoal > t->tNetGoal && p->tScore == t->tScore)
			{
				p = p->nextTeam;
				pre = pre->nextTeam;
			}
			t->nextTeam = p;
			pre->nextTeam = t;
		}
	}//else
	return;
}

int main(int argc, char const *argv[])
{
	int M,N;//参战队M 出线队N
	cin>>M>>N;
	cout<<M<<" "<<N<<endl;
	TeamLink tL = new struct teamLink;
	tL->nextTeam = NULL;
	for (int i = 0; i < M; ++i)
	{
		cout<<i<<endl;
		TeamLink t = new struct teamLink;
		int win,plain,loss,goal,rgoal;
		string name;
		cin>>name>>win>>plain>>loss>>goal>>rgoal;
		t->tName = name;
		t->tScore = win*3 + plain;
		t->tNetGoal = goal - rgoal;
		t->nextTeam = NULL;
		//cout<<1<<"\t"<<t->tName<<"\t"<<t->tScore<<"\t"<<->tNetGoal<<endl;
		Insert(tL,t);
		t = NULL;
	}
	TeamLink p = tL->nextTeam;
	for(int i = 0 ; i< N ; i++)
	{
		cout<<i+1<<"\t"<<p->tName<<"\t"<<p->tScore<<"\t"<<p->tNetGoal<<endl;
		p = p->nextTeam;
	}
	return 0;
}
// 4 2
// 德国 1 1 0 9 3
// 俄罗斯 1 0 0 2 1
// 威尔士 1 1 1 10 2
// 芬兰 0 1 0 3 3