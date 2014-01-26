//
// This class structures and stores the celebrity info for the page displaying all of the celebrities attending (maybe page 2)
// CelebInfo.h
//
#ifndef CELEBINFO_H
#define CELEBINFO_H

#include <string>

namespace Page2
{
	using namespace std;

	class CelebInfo
	{
	public:
		CelebInfo( std::string name );

		std::string GetCelebName()
		{ return m_name; }

	private:
		std::string m_name;
		std::string description;
	};
}

#endif	//CELEBINFO_H