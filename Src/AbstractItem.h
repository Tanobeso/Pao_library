Class AbstractItem{
private:
	string title;
	string description;
	//date
public:
	AbstractItem(string title, string desc);
	virtual ~AbstractItem();
	
	string GetTitle();
	void SetTitle(string);
	string GetDescription();
	void SetDescription(string);
	//fun date
}
