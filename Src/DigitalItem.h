Class DigitalItem public: AbstractItem{
private:
	string publisher;
	string genre;
public:
	DigitalItem(string title, string desc, string publ, string genre);
	~DigitalItem();

	string GetPublisher();
	void SetPublisher(string);
	string GetGenre();
	void SetGenre(string);
}
