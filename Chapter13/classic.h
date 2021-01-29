#ifndef CLASSIC_H_
#define CLASSIC_H_

#include"cd.h"

class Classic : public Cd
{
	private:
		char* p_work;
	public:
		Classic(const char* pw, const char* s1, const char* s2, int s, double pt);
		Classic(const Classic &c);
		Classic();
		virtual ~Classic();
		virtual void Report() const;
		Classic& operator = (const Classic& c);
};

#endif // !CLASSIC_H_
