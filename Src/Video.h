Class Video public: DigitalItem{
private:
	string cast;
	string director;
public:
	Video(string title, string desc, string publ, string genre, string cast, string dir);
	~Video();

	string GetCast();
	void SetCast();
	string GetDirector();
	void SetDirector();
}