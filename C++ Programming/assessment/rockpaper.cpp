#include<iostream>
#include<stdlib.h> 
#include<ctime>
#include<conio.h>
using namespace std;


int main()
{
	string name;
	int rounds;
	int round;
	
	cout<<"**--**--**--**--**--**--**--**--**--**"<<"\n \t\t NAME:"<<"\n**--**--**--**--**--**--**--**--**--**";
	cout<<"\n\nEnter Your Name :";
	cin>>name;
	cout<<"\n\n**--**--**--**--**--**--**--**--**--**"<<"\n \t\t rounds:"<<"\n**--**--**--**--**--**--**--**--**--**";
	cout<<"\n\n"<<name<<"::how many rounds you want to play?:";             
	cin>>rounds;
	cout<<"\n**--**--**--**--**--**--**--**--**--**"<<"\n \t\t GAME:"<<"\n**--**--**--**--**--**--**--**--**--**";
	int player_score=0,computer_score=0;
	//for how many rounds you want //
	for(round=1;round<=rounds;round++)
	{
		system("cls");
		
		int player_choice,computer_choice;
		//to display runnung round out of total rounds//
		cout<<"Round no:"<<round<<"/"<<rounds<<endl;
		cout<<"_*"<<name<<"'s score::"<<player_score;
		cout<<"\n_*"<<"computers score::"<<computer_score<<endl;
		cout<<" 1:Rock"<<endl;
		cout<<" 2:Paper"<<endl;
		cout<<" 3: scissor"<<endl;
		//for selecting choice//
		do
		{
			cout<<"select your choice:";
	    	cin>>player_choice;
		}
		while(player_choice !=1 && player_choice !=2 && player_choice!=3 );
		// for generating random no. for computer//
		srand(time(0));
		computer_choice=(rand()%3)+1;
		
		if(player_choice==1 && computer_choice==3)
		{
			cout<<"player wins"<<endl;
			 player_score++;
		}
		else if(player_choice==2 && computer_choice==1)
		{
			cout<<"player wins"<<endl;
			player_score++;
		}
		else if(player_choice==3 && computer_choice==2)
		{
			cout<<"player wins"<<endl;
			player_score++;
		}
		else if(player_choice== computer_choice)
		{
			cout<<"Draw"<<endl;
			
		}
		else
		{
			cout<<"Computore wins"<<endl;
			computer_score++;
			
		}
		cout<<"Press any key to continue..."<<endl;
		getch();
	}
	
	if(player_score==computer_score)
	{
		cout<<"Its a draw"<<endl;
	}
	else if (player_score>computer_score)
	{
		cout<<name<<"You won the match"<<endl;
	}
	else
	{
		cout<<"Computor won";
	}
	return 0;
}