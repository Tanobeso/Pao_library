Class Videogame public: DigitalItem{
private:
	string developer;
public:
	Videogame(string title, string desc, string publ, string genre, string dev);
	~Videogame();

	string GetDeveloper();
	void SetDeveloper(string);

}

