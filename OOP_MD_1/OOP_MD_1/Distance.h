#pragma once
class Distance
{
	private:
		int feet;
		double inches;
	
	public:
		Distance();
		Distance(int ft, double in);
		void setDistance(int ft, double in);
		void Print();
		Distance Add_distance(Distance d2);
		~Distance();

		Distance operator +(Distance d2)
		{
			int f = feet + d2.feet;
			int i = inches + d2.inches;
			if (i >= 12.0)
			{
				i -= 12.0;
				f++;
			}
			return Distance(f, i);
		}

		Distance operator -(Distance d2)
		{
			int f = feet - d2.feet;
			int i = inches - d2.inches;
			if (i < 0.0)
			{
				i += 12.0;
				f--;
			}
			return Distance(f, i);
		}
};

