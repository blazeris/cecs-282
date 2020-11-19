// Nathan Lai
// CECS 282 Project - Part 2
#include "Education.h"

Education::Education(){
	d = NoDegree;
	major = "";
	research = 0;
}

Education::Education(Degree d, string major, int research){
	this->d = d;
	this->major = major;
	this->research = research;
}

Education::Degree Education::getDegree(){
	return d;
}

string Education::getMajor(){
	return major;
}

int Education::getResearch(){
	return research;
}

void Education::setDegree(Degree d){
	this->d = d;
}

void Education::setMajor(string major){
	this->major = major;
}

void Education::setResearch(int research){
	this->research = research;
}
