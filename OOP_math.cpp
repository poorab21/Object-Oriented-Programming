#include<iostream>
#include<math.h>
std::string content;
std::string choice,number,function;
int arr[100],i=0,count=0,counter=0,arr2[100];
void calculator()
{
	std::cout<<"_____________________________"<<"\n";
   std::cout<<"|                             |"<<"\n";
   std::cout<<"|"<<content<<"                             |"<<"\n";
   std::cout<<"|_____________________________|"<<"\n";
   std::cout<<"|     |     |     |     |     |"<<"\n";
   std::cout<<"|  +  |  /  |  -  |  x  |  %  |"<<"\n";
   std::cout<<"|-----------------------------|"<<"\n";
   std::cout<<"|     |     |     |     |     |"<<"\n";
   std::cout<<"|SIN  |COS  |TAN  |Sqrt |Cbrt |"<<"\n";
   std::cout<<"|-----------------------------|"<<"\n";
   std::cout<<"|     |     |     |     |     |"<<"\n";
   std::cout<<"|CEIL |FLOOR|ROUND|POWER|LOG  |"<<"\n";
   std::cout<<"|-----------------------------|"<<"\n";
   std::cout<<"|     |     |     |     |     |"<<"\n";
   std::cout<<"|SINH |COSH |TANH | CLR |  =  |"<<"\n";
   std::cout<<"|_____________________________|"<<"\n";
   std::cout<<"\n\n";
}
int main()
{
   while(1)
   {
   	std::cout<<"Number OR Function"<<std::endl;
   	std::cin>>choice;
   	if(choice=="number" || choice=="Number")
   	{
   		std::cout<<"Enter Number:";
   		std::cin>>number;
   		arr[i]=stoi(number);
   		i++;
	}
	else if(choice=="function" || choice=="Function")
	{
	    std::cout<<"Enter Function:";
	    std::cin>>function;
	    if(function=="+")
	    {
	        arr2[count]=1;
	        count++;
	    }
	    else if(function=="-")
	    {
	        arr2[count]=2;
	        count++;
	    }
	    else if(function=="/")
	    {
	        arr2[count]=3;
	        count++;
	    }
	    else if(function=="%")
	    {
	        arr2[count]=4;
	        count++;
	    }
	    else if(function=="power")
	    {
	        arr2[count]=5;
	        count++;
	    }
	    else if(function=="x")
	    {
	        arr2[count]=6;
	        count++;
	    }
	    else if(function=="sin")
	    {
	        arr2[count]=7;
	        count++;
	    }
	    else if(function=="cos")
	    {
	        arr2[count]=8;
	        count++;
	    }
	    else if(function=="tan")
	    {
	        arr2[count]=9;
	        count++;
	    }
	    else if(function=="sinh")
	    {
	        arr2[count]=10;
	        count++;
	    }
	    else if(function=="cosh")
	    {
	        arr2[count]=11;
	        count++;
	    }
	    else if(function=="tanh")
	    {
	        arr2[count]=12;
	        count++;
	    }
	    else if(function=="sqrt")
	    {
	        arr2[count]=13;
	        count++;
	    }
	    else if(function=="cbrt")
	    {
	        arr2[count]=14;
	        count++;
	    }
	    else if(function=="round")
	    {
	        arr2[count]=15;
	        count++;
	    }
	    else if(function=="ceil")
	    {
	        arr2[count]=16;
	        count++;
	    }
	    else if(function=="floor")
	    {
	        arr2[count]=17;
	        count++;
	    }
	    else if(function=="=")
	    {
	      
	    }
	}
	for(int j=0;j<i;j++)
	{
	   content+=std::to_string(arr[j]);
	   if(counter<=(count-1))
	   {
	       if(arr2[counter]==1)
	       {
	           content+="+";
	           counter++;
	       }
	       else if(arr2[counter]==2)
	       {
	           content+="-";
	           counter++;
	       }
	       else if(arr2[counter]==3)
	       {
	           content+="/";
	           counter++;
	       }
	       else if(arr2[counter]==4)
	       {
	           content+="%";
	           counter++;
	       }
	       else if(arr2[counter]==5)
	       {
	           content+="^";
	           counter++;
	       }
	       else if(arr2[counter]==6)
	       {
	           content+="x";
	           counter++;
	       }
	       else if(arr2[counter]==7)
	       {
	           content+="Sin(";
	           counter++;
	       }
	       else if(arr2[counter]==8)
	       {
	           content+="Cos(";
	           counter++;
	       }
	       else if(arr2[counter]==9)
	       {
	           content+="Tan(";
	           counter++;
	       }
	       else if(arr2[counter]==10)
	       {
	           content+="Sinh(";
	           counter++;
	       }
	       else if(arr2[counter]==11)
	       {
	           content+="Cosh(";
	           counter++;
	       }
	       else if(arr2[counter]==12)
	       {
	           content+="Tan(";
	           counter++;
	       }
	       else if(arr2[counter]==13)
	       {
	           content+="Sqrt(";
	           counter++;
	       }
	       else if(arr2[counter]==14)
	       {
	           content+="Cbrt";
	           counter++;
	       }
	       else if(arr2[counter]==15)
	       {
	           content+="Round(";
	           counter++;
	       }
	       else if(arr2[counter]==16)
	       {
	           content+="Ceil(";
	           counter++;
	       }
	       else if(arr2[counter]==17)
	       {
	           content+="Floor(";
	           counter++;
	       }
	   }
	   if(count>i && j==i-1)
	   {
	       for(int k=counter;k<count;k++)
	       {
	        if(arr2[k]==1)
	       {
	           content+="+";
	       }
	       else if(arr2[k]==2)
	       {
	           content+="-";
	       }
	       else if(arr2[k]==3)
	       {
	           content+="/";
	       }
	       else if(arr2[k]==4)
	       {
	           content+="%";
	       }
	       else if(arr2[k]==5)
	       {
	           content+="^";
	       }
	       else if(arr2[k]==6)
	       {
	           content+="x";
	       }
	       else if(arr2[k]==7)
	       {
	           content+="Sin(";
	       }
	       else if(arr2[k]==8)
	       {
	           content+="Cos(";
	       }
	       else if(arr2[k]==9)
	       {
	           content+="Tan(";
	       }
	       else if(arr2[k]==10)
	       {
	           content+="Sinh(";
	       }
	       else if(arr2[k]==11)
	       {
	           content+="Cosh(";
	       }
	       else if(arr2[k]==12)
	       {
	           content+="Tan(";
	       }
	       else if(arr2[k]==13)
	       {
	           content+="Sqrt(";
	       }
	       else if(arr2[k]==14)
	       {
	           content+="Cbrt";
	       }
	       else if(arr2[k]==15)
	       {
	           content+="Round(";
	       }
	       else if(arr2[k]==16)
	       {
	           content+="Ceil(";
	       }
	       else if(arr2[k]==17)
	       {
	           content+="Floor(";
	       }   
	       }
	   }
	}
	calculator();
	content="";
	counter=0;
   }
}













