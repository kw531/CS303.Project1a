#ifndef _ASSIGNMENT_H_
#define _ASSIGNMENT_H_

#include "Date.h"

class assignment
{
public:
	assignment();

	enum assignStatus {assigned, completed, late};

	assignment(Date newDue, Date newAssign, string newDisc, assignStatus newStatus) :dueDate(newDue), assignDate(newAssign), description(newDisc), status(newStatus) {}

	assignment(const assignment& a) :dueDate(a.dueDate), assignDate(a.assignDate), description(a.description), status(a.status) {} //Copy Constructor

	//Setters
	void setDueDate(Date newDate);
	void setAssignDate(Date newDate);
	void setDescription(string newDescription);
	void setStatus(assignStatus newStatus);

	//Getters
	Date getDueDate();
	Date getAssignDate();
	string getDescription();
	assignStatus getStatus();

	
	~assignment();
private:
	Date dueDate;
	Date assignDate;
	string description;
	assignStatus status;
};

#endif