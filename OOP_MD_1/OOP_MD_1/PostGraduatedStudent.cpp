#include "PostGraduatedStudent.h"

PostGraduatedStudent::PostGraduatedStudent(string n, string g, float a, int l, float gp, string d, string ra):Student(n, g, a, l, gp, d)
{
	research_interest = ra;
}

void PostGraduatedStudent::set_research_interest(string rarea)
{
	research_interest = rarea;
}

string PostGraduatedStudent::get_research_interest()
{
	return research_interest;
}
