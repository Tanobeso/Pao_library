Class Movie public: Video{
private:
	unsigned int length;
public:
	Movie(string title, string desc, string publ, string genre, string cast, string dir, unsigned int min);
	~Movie();

	string GetLength(); 
	void SetLength(unsigned int h, unsigned int min);
}

