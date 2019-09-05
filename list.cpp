#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;

waiting_room::waiting_room()
{
  return;
}

waiting_room::~waiting_room()
{
  return;
}

// Add a patient node to the list
void waiting_room::admit_patient(void)
{
  node *temp = new node;
  patient_info(temp);

  return;
}

// Removes the highest priority patient from the list
void waiting_room::see_patient(void)
{
  return;
}

// displays the current linked list
void waiting_room::display(void)
{
  cout << "Not implemented yet" << endl;
}

// Fill outs a patient struct
void waiting_room::patient_info(node *p)
{
  // placeholder values
  p->name = NULL;
  p->priority = 0;
}
