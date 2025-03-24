Class PhysicalItem public: AbstractItem{
private:
	string author;
	string size;
public:
	PhysicalItem(string title, string desc, string aut, string size);
	~PhysicalItem();
	
	string GetAuthor();
	void SetAuthor(string);
	string GetSize();
	void SetSize();
}