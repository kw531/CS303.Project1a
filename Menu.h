#pragma once

#include "Ordered_List.h"
#include "Assignment.h"
#include "Date.h"

class Menu {
private:
	Ordered_List<Assignment> assignedList;
	Ordered_List<Assignment> completedList;
	Ordered_List<Assignment>::iterator iter = assignedList.begin();

public:
	// Constructors
	Menu() {}
	Menu(Ordered_List<Assignment>& aList, Ordered_List<Assignment>& cList) : assignedList(aList), completedList(cList) {}

	// Destructor
	~Menu() {}

	// List modifiers
	void addToList(Date due, string desc, Date assign, assignStatus status);
	bool addAssignment();
	bool findAssignment(Date inDate);
	bool editDueDate();
	bool editDescription();
	bool completeAssignment();

	// List accessors
	void displayAssignments();
	void listLateAssignments();

	// Program functions
	void saveLists();
	void exitProgram();
};