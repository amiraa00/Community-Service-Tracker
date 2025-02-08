#include <iostream>
#include<string>
#include<fstream>
using namespace std;

class Volunteer
{
private:
	string Name;
	int Age;
	string EmergencyContactDetails;
	string PersonalContactDetails;
	string Email;
	string Address;
	string Skills;
	bool Avaliability;
	int NationalID;
public:
	Volunteer()
	{
		cout << "start of volunteer class" << endl;
		Name = " ";
		Age = 0;
		EmergencyContactDetails = " ";
		PersonalContactDetails = " ";
		Email = " ";
		Address = " ";
		Skills = " ";
		Avaliability = false;
		NationalID = 0;

	}
	Volunteer(string userName, int UserAge, string UserEmergencyContact, string UserPersonalContact, string UserEmail, string UserAddress, string UserSkills, bool UserAvaliability, int UserNationalID)
	{
		Name = userName;
		Age = UserAge;
		EmergencyContactDetails = UserEmergencyContact;
		PersonalContactDetails = UserPersonalContact;
		Email = UserEmail;
		Address = UserAddress;
		Skills = UserSkills;
		Avaliability = UserAvaliability;
		NationalID = UserNationalID;
	}
	~Volunteer()
	{
		cout << "done with volunteer class" << endl;
	}
	void setName(string setname)
	{
		Name = setname;
	}
	void setAge(int setage)
	{
		Age = setage;
	}
	void setEmergencyContactDetails(string setemergencydetails)
	{
		EmergencyContactDetails = setemergencydetails;
	}
	void setPersonalContactDetails(string setpersonaldetails)
	{
		PersonalContactDetails = setpersonaldetails;
	}
	void setEmail(string setemail)
	{
		Email = setemail;
	}
	void setAddress(string setaddress)
	{
		Address = setaddress;
	}
	void setSkills(string setskills)
	{
		Skills = setskills;
	}
	void setAvaliability(bool setavaliability)
	{
		Avaliability = setavaliability;
	}
	string getName()
	{
		return Name;
	}
	int getAge()
	{
		return Age;
	}
	string getEmergencyContactDetails()
	{
		return EmergencyContactDetails;
	}
	string getPersonalContactDetails()
	{
		return PersonalContactDetails;
	}
	string getEmail()
	{
		return Email;
	}
	string getAddress()
	{
		return Address;
	}
	string getSkills()
	{
		return Skills;
	}
	bool getAvaliability()
	{
		return Avaliability;
	}
	void setNationalID(int national)
	{
		NationalID = national;

	}
	int getNationalID()
	{
		return NationalID;
	}
	void SearchSkills(string searchskills)//searches for the volunteer based on skills
	{
		if (this->Skills == searchskills)
		{
			cout << "Volunteer name with " << searchskills << " skill is " << Name << endl;
			cout << "Volunteer ID with " << searchskills << " skill is " << NationalID << endl;
		}
		else {
			cout << "Volunteer does not has this skill" << endl;
		}
	}
	void SearchAvaliability(bool searchAvaliability)//searches for the volunteer based on avaliability
	{
		if (this->Avaliability == searchAvaliability)
		{
			cout << "Volunteer " << Name << " is avaliable" << endl;
		}
		else {
			cout << "Volunteer is not available" << endl;
		}
	}
	void DisplayVolunteerInfo()
	{
		cout << "Volunteer's name: " << Name << endl;
		cout << "Volunteer's age: " << Age << endl;
		cout << "Volunteer's Emergency Contact Details: " << EmergencyContactDetails << endl;
		cout << "Volunteer's personal Contact Details: " << PersonalContactDetails << endl;
		cout << "Volunteer's email: " << Email << endl;
		cout << "Volunteer's address: " << Address << endl;
		cout << "Volunteer's skill: " << Skills << endl;
		cout << "volunteer available: " << Avaliability << endl;
		cout << "Volunteer's National ID: " << NationalID << endl;
	}

};
class Task :public Volunteer
{
private:
	string TaskName;
	int TaskHours;
	bool CompletionTask;
	int VolunteerHours;
public:
	Task()
	{
		TaskName = " ";
		TaskHours = 0;
		CompletionTask = true;
		VolunteerHours = 0;
	}
	Task(string userName, int UserAge, string UserEmergencyContact, string UserPersonalContact, string UserEmail, string UserAddress, string UserSkills, bool UserAvaliability, int UserNationalID, string UserTaskName, int UserTaskhours, bool UserCompletion) :Volunteer(userName, UserAge, UserEmergencyContact, UserPersonalContact, UserEmail, UserAddress, UserSkills, UserAvaliability, UserNationalID)
	{
		TaskName = UserTaskName;
		TaskHours = UserTaskhours;
		CompletionTask = UserCompletion;
		VolunteerHours = 0;
	}

	void setTaskName(string tname)
	{
		TaskName = tname;
	}
	void setTaskHours(int taskhours)
	{
		TaskHours = taskhours;
	}
	void setCompletionTask()
	{
		CompletionTask = true;
	}
	void setVolunteerHours(int VolHours)
	{
		VolunteerHours = VolHours;
	}
	string getTaskName()
	{
		return TaskName;
	}
	int getTaskHours()
	{
		return TaskHours;
	}
	int getVolunteerHours()
	{
		return  VolunteerHours;
	}
	bool getCompletionTask()
	{
		return CompletionTask;
	}

	void DisplayTaskInfo()
	{
		cout << "Volunteer's name that will complete the task: " << getName() << endl;
		cout << "Volunteer's ID that will do the task: " << getNationalID() << endl;
		cout << "The task is to " << TaskName << endl;
		cout << "Task hours: " << TaskHours << endl;
		cout << "Volunteer hours: " << VolunteerHours << endl;
		cout << "Task completed? " << CompletionTask << endl;

	}
	void AssignTask(string usertask, int userTaskHours)//assigns a new task to the volunteer
	{
		TaskName = usertask;
		TaskHours = userTaskHours;
	}
	void updateCompletionOfTask() //updates the completion of the task to true
	{

		setCompletionTask();
	}
	void TotalVolunteerHours()//calculates the total volunteer hours done by the volunteer
	{
		VolunteerHours += TaskHours;
	}
	~Task()
	{
		cout << "we have finished the task class" << endl;
	}

};
class Event :public Volunteer
{
private:
	string Eventlocation;
	string serviceimpact;
	string Eventdate;
	string EventName;
	string Eventtime;
	string EventHost;
public:
	Event()
	{
		Eventlocation = " ";
		serviceimpact = " ";
		Eventdate = " ";
		EventName = " ";
		Eventtime = " ";
		EventHost = " ";
	}
	Event(string userName, int UserAge, string UserEmergencyContact, string UserPersonalContact, string UserEmail, string UserAddress, string UserSkills, bool UserAvaliability, int UserNationalID, string eventLocation, string impact, string Usereventdate, string UserEventname, string UserEventtime, string UserEventHost) :Volunteer(userName, UserAge, UserEmergencyContact, UserPersonalContact, UserEmail, UserAddress, UserSkills, UserAvaliability, UserNationalID)
	{
		Eventlocation = eventLocation;
		serviceimpact = impact;
		Eventdate = Usereventdate;
		EventName = UserEventname;
		Eventtime = UserEventtime;
		EventHost = UserEventHost;
	}
	void setlocation(string setlocation)
	{
		Eventlocation = setlocation;
	}
	void setserviceimpact(string setserviceimpact)
	{
		serviceimpact = setserviceimpact;
	}
	void setdate(string setdatee)
	{
		Eventdate = setdatee;
	}
	void setEventname(string setEventName)
	{
		EventName = setEventName;
	}
	void seteventtime(string settime)
	{
		Eventtime = settime;
	}
	string gettlocation()
	{
		return Eventlocation;
	}
	string getserviceimpact()
	{
		return serviceimpact;
	}
	string getdate()
	{
		return Eventdate;
	}
	string getEventname()
	{
		return EventName;
	}
	string geteventtime()
	{
		return Eventtime;
	}

	void VolunteerAllocation(Volunteer Vol1)//allocates the volunteer to an event
	{
		if (Vol1.getAvaliability() == true)
		{
			cout << "Volunteer " << Vol1.getName() << " is assigned to event " << EventName << "hosted by " << EventHost << endl;

		}
	}
	void EventSchedule(string EventScheduleFile)//takes a file as an argument and stores the event information
	{
		ofstream outfile;
		try
		{
			outfile.open(EventScheduleFile, ios::out);//opens a file to store the event schedule
			if (outfile.fail())
			{
				throw "file failed to open";// error handling incase the file dosent exist 
			}

		}
		catch (const char* e)
		{
			cerr << e;
		}
		outfile << "Event name is " << EventName << ", will be held in " << Eventlocation << ", hosted by " << EventHost << " and will be at " << Eventtime;
		outfile.close();

	}
	void ServiceImpact(Task VolunteerName) //checks how well did the volunteer do by checking hsi volunteer hours and by that determining his service impact
	{
		if (VolunteerName.getVolunteerHours() > 12)
		{
			serviceimpact = "excellent";
		}
		else if (VolunteerName.getVolunteerHours() <= 12 && VolunteerName.getVolunteerHours() > 9)
		{
			serviceimpact = "very good";
		}
		else if (VolunteerName.getVolunteerHours() <= 9)
		{
			serviceimpact = "poor";
		}

	}
	void VolunteerReport(string VolunteerReportFile, Task Tasks)/// creates the volunteer report about the volunteers service impact and their volunteerhours
	{
		ofstream reportfile;
		try
		{
			reportfile.open(VolunteerReportFile, ios::out); //opens a file in writing mode to write the volunteer report
			if (reportfile.fail())
			{
				throw "file failed to open";
			}

		}
		catch (const char* e)
		{
			cerr << e;
		}
		reportfile << EventName << " " << "event hosted by " << EventHost << ",  " << getName() << " Volunteered in this event and completed her task in " << Tasks.getVolunteerHours() << " Hours" << " and the volunteer service impact is " << serviceimpact;
		reportfile.close();
	}
};
int main()
{
	Volunteer Volunteer1("Amira", 18, "012838", "012883", "amira@gmail.com", "beverly hills", "Leadership", true, 3983);//creates an object with data type volunteer
	Task Volunteer1Task("Amira", 18, "012838", "012883", "amira@gmail.com", "beverly hills", "Leadership", true, 3983, "Organization", 6, true);//creates an object with data type task
	Event Volunteer1Event("Amira", 18, "012838", "012883", "amira@gmail.com", "beverly hills", "Leadership", true, 3983, "Maadi", "excellent", "9/6/2024", "Traverse ", "5 pm", "Mariam Emad");//creates an object with data type event
	string skill;
	cout << "Please enter the skill you want to search for" << endl;
	getline(cin, skill);
	Volunteer1.SearchSkills(skill);
	string available;
	cout << "is there an available Volunteer ( 1 for true and 0 for false)" << endl;
	getline(cin, available);//reades the entire line to check for the availability status
	bool isAvailable = (available == "1");//converts from string to boolean
	Volunteer1.SearchAvaliability(isAvailable);
	Volunteer1.DisplayVolunteerInfo();
	string task;
	cout << "Please enter the volunteer's task" << endl;
	getline(cin, task);
	cout << "Please enter the total task hours" << endl;
	int taskhours;
	cin >> taskhours;
	Volunteer1Task.AssignTask(task, taskhours);
	Volunteer1Task.TotalVolunteerHours();
	Volunteer1Task.updateCompletionOfTask();
	Volunteer1Task.DisplayTaskInfo();
	Volunteer1Event.VolunteerAllocation(Volunteer1);
	Volunteer1Event.ServiceImpact(Volunteer1Task);
	Volunteer1Event.EventSchedule("Event.txt");
	Volunteer1Event.VolunteerReport("Report.txt", Volunteer1Task);

}