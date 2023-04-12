#include <iostream>
using namespace std;

int main(){
//DECLARING THE INITIAL VARIABLES
	string pin="0000";
	int balance=1000;
	int select;
	int attempts=0;
	string code="*170#";
	string xpo;
	string io;
	
	while(attempts<3){
	cout<<"Dial *170# to start"<<endl;
	cin>>xpo;
	if(xpo!=code){
		cout<<"Re-enter code"<<endl;
		attempts++;
		if(attempts==3){
			cout<<"Kindly Restart the Process"<<endl;
			break;
		}
		else{
		continue;
	}
	}
	
	cout<<"Enter Your Mobile Money Pin"<<endl;
	cin>>io;
	if(io!=pin){
	 cout<<"Invalid Pin"<<endl;
	 attempts++;
	if(attempts==3){
		cout<<"Kindly Restart The Program..."<<endl;
	}
	else{
		continue;
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	cout<<"===================================="<<endl;
	//HEADING MENU
	cout<<"Welcome to MMS Mobile Money service:"<<endl;
	cout<<"Select Your Desired Option:"<<endl;
	cout<<"1.Aunthentication"<<endl;
	cout<<"2.Reset or Change Your pin"<<endl;
	cout<<"3.Check Your Balance"<<endl;
	cout<<"4.Send Money"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"=================="<<endl;
	cin>>select;
	
	
	
	//The Place to select your options
	
	if(select<1|| select>5){
		cout<<"Re-enter option:";
		cin>>select;
		attempts++;
	if(attempts==3){
		cout<<"Unknown application"<<endl;
	}
	else{
		continue;
	}
}
	
	
	
	
	
	//continuing
	
	
	
	//option 1
	
	else if(select==1){
		cout << "Enter Pin To Authenticate: ";
        string input_pin;
        cin >> input_pin;
        if (input_pin!= pin) {
            cout << "Invalid PIN" << endl;
            attempts++;
        if(attempts==3){
        	cout<<"Maximum number of attempts reached"<<endl;
		}
            }
            else{
            	cout<<"The pin is valid"<<endl;
            	break;
			}
			continue;
	}
	
	
	
	
	
	
	
	
	
	//option 2
	
	else if(select==2){
	 string old_pin;
	 string npin;
        cout<<"Enter Previous Pin: ";
        cin>>old_pin;
    if(old_pin!=pin){
    	cout<<"Invalid Pin(Re-enter)"<<endl;
    	cin>>old_pin;
    	attempts++;
    	if(attempts==3){
    		cout<<"Maximum attempts reached.."<<endl;
    		break;
		}
	} 
	else{
		cout<<"Enter New Pin:"<<endl;
		cin>>npin;
	if(npin==pin){
		cout<<"The Pin Should Be Different!"<<endl;
		attempts++;
	if(attempts==3){
		cout<<"Maximum Number of Attempts Reached..."<<endl;
		break;
	     }
	}
	else{
		cout<<"Pin Successfully Updated!"<<endl;
		break;
	}
	}  
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//option 3
	else if(select==3){
	string	momo_pin;					
	cout<<"Input Your Pin:"<<endl;
	cin>>momo_pin;
	if(momo_pin!=pin){
	cout<<"Invalid Pin"<<endl;
	cin>>momo_pin;
	attempts++;
	if(attempts==3){
		cout<<"Maximum Number of attempts Reached!.."<<endl;
		break;
	}
				}
	else{
	cout<<"Your Balance is: "<<balance<<" Ghana cedis"<<endl;
	break;
    	}
	
			       }
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
			       
		//option 4
		
	else if(select==4){
		char var;
		string momo_pin;
		int amt;
		string phone;
		cout<<"Do you want to send money?(Y/N):"<<endl;
		cin>>var;
		if(var=='y'||var=='Y'){
			cout<<"Enter your Pin:"<<endl;
			cin>> momo_pin;
		if(momo_pin!=pin){
			cout<<"Invalid Pin"<<endl;
			cin>>momo_pin;
			attempts++;
		if(attempts==3){
			cout<<"Unknown Application"<<endl;
			break;
		 }
		}
		else{
			cout<<"Enter the recipient's Phone number:"<<endl;
			cin>> phone;
		
			cout<<"Enter the amount:"<<endl;
			cin>>amt;
		if(amt<=0 || amt>balance){
			cout<<"Invalid Amount"<<endl;
			attempts++;
			if(attempts==3){
				cout<<"Unknown Application"<<endl;
				break;
			}
	   	}
	   	else{
	   		cout<<"Ghc"<<amt<<" Has been sent to "<<phone<<endl;
	   		balance=balance-amt;
	   		cout<<"Your Current Balance is now: Ghc"<<balance<<endl;
	   		break;
		   }
		    }
	                       }
	    else if(var=='n' || var=='N'){
	    	cout<<"Terminating process...."<<endl;
	    	break;
		}
		else if(var!='n' || var!='N'||var!='y'||var!='Y'){
		    	cout<<"Re-enter option"<<endl;
		    	attempts++;
		    if(attempts==3){
		    	cout<<"Maximum Number Of Attempts Reached!.."<<endl;
		    	break;
			}
	
		}
		
	                 }
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	                 
	//option 5
	else if(select==5){
		char opt;
		cout<<"Do want to exit?(Y/N)"<<endl;
		cin>>opt;
		if(opt=='Y'||opt=='y'){
		cout<<"============================================="<<endl;
		cout<<"|Thanks For Using Our Mobile Money Service! |"<<endl;  
		cout<<"============================================="<<endl;
		break;	
		}
	   else if(opt=='n'||opt=='N'){
	   	cout<<"Kindly Restart The Service And Select Your Option. Thank You"<<endl;
	   	break;
	   }
	   else{
	   	cout<<"Invalid Option"<<endl;
	   	attempts++;
	   	if(attempts==3){
	   		cout<<"Unknown Application"<<endl;
	   		break;
		   }
	   }
	}
}
	return 0;
}
