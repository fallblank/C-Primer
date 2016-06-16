#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data
{
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);
public:
	Sales_data() = default;
	Sales_data(const std::string&,unsigned,double);
	Sales_data(const std::string&);
	Sales_data(std::istream&);
	~Sales_data();
	std::string isbn() const{return book_no;}
	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const;
	std::string book_no;
	unsigned int units_sold;
	double revenue;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif