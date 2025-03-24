Class Book public: PhysicalItem{
private:
	string publisher;
	string genre;
	string edition;
public:
	Book(string title, string desc, string aut, string size, string publ, string genre, string ed);
	~Book();
	
	string GetPublisher();
	void SetPublisher(string);
	string GetGenre();
	void setGenre(string);
	string GetEdition();
	void SetEdition();
