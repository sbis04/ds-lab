#include<iostream>
using namespace std;


int main()
{
    int arr[10],

    top=-1;
    int t=10,c;



    do{
    	cout<<"Enter the operation : \n 1. Adding Elements \n 2.Removing Elements \n ";
    	cout<<"3.Display Elements \n 4.Exit \n";
    	cin>>c;

    		switch(c)
    		{
	    		case 1:
	    		{
	    			if (top>=10)
	    			{
	    				cout<<"Stack Overflow\n";
	    			}
	    			else
	    			{
	    				int z,x;
	    				cout<<"Enter no. f Elements to be pushed\n";
	    				cin>>z;
	    				for (int i = 0; i < z; ++i)
	    				{
	    					cout<<"Enter element to be entered";
	    					cin>>x;
	    					top++;
	    					arr[top]=x;
	    				}
	    			}
	    		break;
	    		}


	    		case 2: {
	    		if (top <= -1){
	    			cout<<"Stack is Empty \n";
	    		}
	    		else{
	    			cout<<"Popped Element is "<<arr[top];
	    			top--;
	    		}
	    		break;	
	    		} 

	    		case 3:
	    		{ 
	    			if (top >=0)
	    			{
	    			cout<<"Elements are ";
		    			for(int i=0; i<=top ;i++)
		    			{
		    				cout<<arr[i]<<"-";
		    			}

	    			}
	    			else
	    			{
	    				cout<<"Stack is Empty \n";
	    			}
	    		break;
	    		}

	    		case 4:
	    		{
	    			cout<<"Thanks For Using \n";
	    		}

    		}

    }while(c != 4);
    return 0;

}