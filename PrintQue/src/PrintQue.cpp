//============================================================================
// Name        : PrintQue.cpp
// Author      : Chatura Ahangama
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

enum job_status{
			queued,
			processed,
			error
		 	};

class InvalidRequest{

private:
	string m_error;
public:
	InvalidRequest(string Error_m):m_error(Error_m){};
	string get_message(){return m_error;};
};



class printQue
{


	struct PrintJob{
	 private:
		int m_id;
		string m_message;
		job_status internal;

		;
	 public:
	 	 void addId(int add){m_id=add;}
	 	 void addMessage(string mess){m_message=mess;}
	 	 void addStatus(job_status out){internal=out;}
	 	 int  getId(){return m_id;}
	 	 string getMessage(){return m_message;}
	     job_status getStatus(){return internal;}

};

    private:
	    string qname;
	    vector<PrintJob>qlist;



	    static printQue * print_instance; //Create this privately
	    printQue(string val="NULL")  //Private Constructor
	    {
	    	qname=val;
	    }

	public:

	    static printQue *instance(){
	    	if (!print_instance)
	    	{
	    		print_instance=new printQue;

	    	}
	    	return print_instance;

	    }

		int AddJob(string sTextToPrint)
		{
			PrintJob Object;
			Object.addId(qlist.size());
			Object.addMessage(sTextToPrint);
			qlist.push_back(Object);
			return qlist.size();

		}

job_status JobStatus(int nJobNumber){

			if(nJobNumber > qlist.size() || qlist.size() == 0){
						  if( qlist.size() == 0)
						   throw InvalidRequest("Empty Print Que item");
						  else
						    throw InvalidRequest("Invalid Que item");
					   }

			if (qlist[nJobNumber].getStatus() == job_status(queued))
				return queued;
			if (qlist[nJobNumber].getStatus() == job_status(processed))
				return processed;
			if (qlist[nJobNumber].getStatus() == job_status(error))
				return error;

		}

		void CancelJob(int nJobNumber = 0)
		{

		   if(nJobNumber > qlist.size() || qlist.size() == 0){
			  if( qlist.size() == 0)
			   throw InvalidRequest("Empty Print Que item");
			  else
			    throw InvalidRequest("Invalid Que item");
		   }

			if(nJobNumber!=0)
				nJobNumber=nJobNumber-1;
            qlist.erase(qlist.begin()+nJobNumber);

		}
/*
		void getJob(int njobNumber = 0)
		{
			if(njobNumber!=0)
				njobNumber=njobNumber-1;

			cout<<qlist[njobNumber]<<endl;
		}
*/
};



printQue *printQue::print_instance=0;

//Creating a wrapper classs
class PrintJobManagerProxy{
	private:
		string GUID="1002";

	public:
		int Print(string sTextToPrint, string key_guid){
				if(key_guid==GUID)
					return printQue::instance()->AddJob(sTextToPrint);
				else
					return 0;
		};
		bool Cancel(int nJobNumber, string key_guid){
			if(key_guid==GUID){
				printQue::instance()->CancelJob(nJobNumber);
				return true;}
			else
				return false;

		};
		job_status Status(int nJobNumber){
			return printQue::instance()->JobStatus(nJobNumber);

		};


};



int main() {
	try{

		cout<<"Position on the P-que : "<< printQue::instance()->AddJob("Print 1")<<endl;
		cout<<"Position on the P-que : "<< printQue::instance()->AddJob("Print 2")<<endl;
		cout<<"Position on the P-que : "<< printQue::instance()->AddJob("Print 3")<<endl;
		cout<<"Position on the P-que : "<< printQue::instance()->AddJob("Print 4")<<endl;


	}catch(InvalidRequest &err)
	{
		cerr<< "Message is :"<< err.get_message();
	}

	try{
		 cout<<"Deleting from Wrong que"<<endl;
		 printQue::instance()->CancelJob(99); //Trying to Catch!!

	}catch(InvalidRequest &err)
	{
		cerr<< "\nMessage is :"<< err.get_message();
	}

	try{

		     cout<<"Deleting from Empty que"<<endl;
			 printQue::instance()->CancelJob(); //Trying to Catch Since we have 4 in the spooler!!
			 printQue::instance()->CancelJob();
			 printQue::instance()->CancelJob();
			 printQue::instance()->CancelJob();
			 printQue::instance()->CancelJob();

	  }catch(InvalidRequest &err)
	  {
			cerr<< "\nMessage is :"<< err.get_message();
	  }

	  try{
		  cout<<"Adding the que class wrapper"<<endl;
		  PrintJobManagerProxy printDemon;

		  int count=printDemon.Print("Printer 1001","1002");


		  if(count!=0)
		  {  cout<<"Added to spool :" << count <<endl;
		  }

		  cout<<printDemon.Status(1)<<endl;

		  if(printDemon.Cancel(1,"1002"))
		  {
			  cout<<"Cancelling Sucessfull"<<endl;
		  }

		  cout<<"Trying to Acess CANCELLED Print"<<endl;
		  	  cout<<printDemon.Status(1)<<endl;


	  }catch(InvalidRequest &err){
		  cerr<< "\nWRAPPER Message is :"<<err.get_message()<<endl;

	  }

	return 0;
}
