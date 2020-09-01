/*********************
PROJECT 1
TIC-TAC-TOE GAME
ATULANANADA PANIGRAHY
*********************/


#include <iostream>
#include <string>

using namespace std;

void board(char* nums)
{
    cout<<"\t   |     |   "<<endl;
    cout<<"\t"<<*(nums+1) <<"  |  " << *(nums+2) << "  |  " << *(nums+3) <<endl;
    cout<<"\t___|_____|____"<<endl;
    cout<<"\t   |     |   "<<endl;
    cout<<"\t"<<*(nums+4) <<"  |  " << *(nums+5) << "  |  " << *(nums+6) <<endl;
    cout<<"\t___|_____|____"<<endl;
    cout<<"\t   |     |   "<<endl;
    cout<<"\t"<<*(nums+7) <<"  |  " << *(nums+8) << "  |  " << *(nums+9) <<endl;
    cout<<"\t   |     |   "<<endl;

}

/************************
FUNCTION TO CHECK WIN AND RETURN SOME VALUE
(-1) FOR GAME IN PROGRESS
(1) FOR GAME OVER AND WINNER DECLARED
(0) FOR GAME OVER AND NO WINNER
************************/
int checkwin(char* nums)
{
    if(*(nums+1)==*(nums+2) && *(nums+2)==*(nums+3))
    {return 1;}
    else if(*(nums+4)==*(nums+5) && *(nums+5)==*(nums+6))
    {return 1;}
    else if(*(nums+7)==*(nums+8) && *(nums+8)==*(nums+9))
    {return 1;}
    else if(*(nums+1)==*(nums+4) && *(nums+4)==*(nums+7))
    {return 1;}
    else if(*(nums+2)==*(nums+5) && *(nums+5)==*(nums+8))
    {return 1;}
    else if(*(nums+3)==*(nums+6) && *(nums+6)==*(nums+9))
    {return 1;}
    else if(*(nums+1)==*(nums+5) && *(nums+5)==*(nums+9))
    {return 1;}
    else if(*(nums+3)==*(nums+5) && *(nums+5)==*(nums+7))
    {return 1;}
    else if( *(nums+1)!='1' && *(nums+2)!='2'  && *(nums+3)!='3'   && *(nums+4)!='4'   && *(nums+5)!='5'   && *(nums+6)!='6'   && *(nums+7)!='7'   && *(nums+8)!='8'  && *(nums+9)!='9')
    {return 0;}
    else
    {return -1;}
}


int main()
{
  //step 1 --to print opt the board
  cout<<"\n\n*****WELCOME TO THE TIC-TAC-TOE GAME***** \n\n";
  cout<<"   PLAYER-1 is \"X\" AND PLAYER-2 IS \"O\"\n\n";

  char nums[]={'0','1','2','3','4','5','6','7','8','9'};
  char choice,mark;
  int player=1,i;
  do{
        cout<<endl;
        board(nums);

        player=(player%2) ? 1 : 2 ;

        cout<<"\a\n\tPLAYER : "<<player<<" ENTER A NUMBER : ";
        cin>>choice;

        player==1 ? mark='X' : mark='O' ;

        /****** started replacing the matrix by X and O *****/
       if(choice=='1' && nums[1]=='1')
       {nums[1]=mark;}
       else if(choice=='2' && nums[2]=='2')
       {nums[2]=mark;}
       else if(choice=='3' && nums[3]=='3')
       {nums[3]=mark;}
       else if(choice=='4' && nums[4]=='4')
       {nums[4]=mark;}
       else if(choice=='5' && nums[5]=='5')
       {nums[5]=mark;}
       else if(choice=='6' && nums[6]=='6')
       {nums[6]=mark;}
       else if(choice=='7' && nums[7]=='7')
       {nums[7]=mark;}
       else if(choice=='8' && nums[8]=='8')
       {nums[8]=mark;}
       else if(choice=='9' && nums[9]=='9')
       {nums[9]=mark;}
       else
       {
           cout<<"\a\tINVALID MOVE"<<endl;
           player--;
           cin.ignore();
           cin.get();
       }

       i=checkwin(nums);
       player++;

    }while(i==(-1));

    board(nums);

    if(i==1)
       { cout<<"\a\t **PLAYER-"<<--player<<" IS THE WINNER** "<<endl;}
    else
       { cout<<"\a\tGAME DRAW \n";  }

       cin.ignore();
       cin.get();
       return 0;

}

