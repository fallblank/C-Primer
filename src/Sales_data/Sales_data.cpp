#include "Sales_data.h"

Sales_data::Sales_data(const std::string &s,unsigned n,double p)
:book_no(s),units_sold(n),revenue(p*n){}

Sales_data::Sales_data(const std::string &s):book_no(s){}

Sales_data::Sales_data(std::istream &is)
{
	read(is,*this);
}

Sales_data::~Sales_data(){}

Sales_data& Sales_data::combine(const Sales_data& item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data add(const Sales_data &s,const Sales_data& d)
{
	Sales_data item;
	item.book_no = s.book_no;
	item.units_sold = s.units_sold + d.units_sold;
	item.revenue = s.revenue+d.revenue;
	return item;
}

std::ostream& print(std::ostream &os, const Sales_data &s)
{
	os << s.book_no << s.units_sold << s.revenue;
	return os;
}

std::istream& read(std::istream &is, Sales_data &s)
{
	is >> s.book_no >> s.units_sold >>s.revenue;
	return is;
}