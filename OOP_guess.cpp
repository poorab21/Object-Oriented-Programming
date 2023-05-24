#include"guess.h"

guess::guess()
{
	this->guess_count=7;
	this->decide=false;
	this->help_count=3;
}
void guess::draw()
{
	std::cout<<"_____________________________________"<<std::endl;
	std::cout<<"|              HINTS                |"<<std::endl;
	std::cout<<"|___________________________________|"<<std::endl;
	std::cout<<"| Part of the largest extant cat    |"<<std::endl;
	std::cout<<"| species                           |"<<std::endl;
	std::cout<<"|-----------------------------------|"<<std::endl;
	std::cout<<"| Recognisable for it's Stripes     |"<<std::endl;
	std::cout<<"|-----------------------------------|"<<std::endl;
	std::cout<<"| Preys on Ungulates                |"<<std::endl;
	std::cout<<"|-----------------------------------|"<<std::endl;
	std::cout<<"| powerful Swimmers                 |"<<std::endl;
	std::cout<<"|-----------------------------------|"<<std::endl;
	std::cout<<"|___________________________________|"<<std::endl;
	std::cout<<"|"<<random[0]<<" "<<random[1]<<" "<<random[2]<<" "<<random[3]<<" "<<random[4]<<" "<<random[5]<<" "<<random[6]<<" "<<random[7]<<" "<<random[8]<<" "<<random[9]<<" "<<random[10]<<" "<<random[11]<<" "<<random[12]<<" "<<random[13]<<" "<<random[14]<<"      |"<<std::endl;                                                                                                 
	std::cout<<"|___________________________________|"<<std::endl;
	std::cout<<"|       |     |     |     |         |"<<std::endl;
	std::cout<<"|  "<<guess_word[0]<<"    |  "<<guess_word[1]<<"  |  "<<guess_word[2]<<"  |  "<<guess_word[3]<<"  |  "<<guess_word[4]<<"      |"<<std::endl;
	std::cout<<"|_______|_____|_____|_____|_________|"<<std::endl;
}
void guess::select()
{
	std::cout<<"Select a Character or press 'q' for help guess("<<this->help_count<<"):"<<std::endl;
	std::cin>>this->answer;
}
void guess::Verify()
{
	if(this->answer=='t')
	{
		guess_word[0]='t';
	}
	else if(this->answer=='i')
	{
		guess_word[1]='i';
	}
	else if(this->answer=='g')
	{
		guess_word[2]='g';
	}
	else if(this->answer=='e')
	{
		guess_word[3]='e';
	}
	else if(this->answer=='r')
	{
		guess_word[4]='r';
	}
	else
	{
		this->guess_count--;
	}
}
void guess::guess_end()
{
	if(this->guess_count==0)
	{
		this->decide=true;
	}
	else if(guess_word[0]=='t' && guess_word[1]=='i' && guess_word[2]=='g' && guess_word[3]=='e' && guess_word[4]=='r')
	{
		this->decide=true;
	}
}
void guess::help()
{
	if(this->answer=='q' && this->help_count>0)
	{
		this->help_number=rand()%5;
		guess_word[this->help_number]=word1[this->help_number];
		this->help_count--;
	}
}
void guess::help_end()
{
	if(this->help_count==0)
	{
		std::cout<<"No More Help Guess"<<std::endl;
	}
}
void guess::run()
{
	do
	{
	draw();
	select();
	Verify();
	guess_end();
	help();
	system("cls");
	}
	while(this->decide==false);
}





