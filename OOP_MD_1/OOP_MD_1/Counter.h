#pragma once
class Counter
{
private:
	unsigned int count; //count

public:
	Counter() : count(0) //constructor
	{}

	Counter(int c) : count(c) //constructor
	{}

	int get_count() //return count
	{
		return count;
	}

	Counter operator ++ () // Prefix
	{
		++count;
		return Counter(count);
	}

	Counter operator ++ (int) // Postfix
	{
		count++;
		return Counter(count);
	}

	Counter operator -- () // Prefix
	{
		--count;
		return Counter(count);
	}

	Counter operator -- (int) // Postfix
	{
		count--;
		return Counter(count);
	}


};

