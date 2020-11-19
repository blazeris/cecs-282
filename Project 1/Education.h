// Nathan Lai
// CECS 282 Project - Part 2
#ifndef EDUCATION_H
#define EDUCATION_H

#include <string>

using namespace std;

class Education {
	public:
		enum Degree {
			NoDegree, MS, PhD
		};
		Education();
		Education(Degree d, string major, int research);
		
		Degree getDegree();
		string getMajor();
		int getResearch();
		
		void setDegree(Degree d);
		void setMajor(string major);
		void setResearch(int research);
	private:
		Degree d;
		string major;
		int research;
		
};

#endif
