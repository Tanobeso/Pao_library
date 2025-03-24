Class Series public: Video{
private:
	unsigned int seasons;
	unsigned int episodes;
public:
	Series(string title, string desc, string publ, string genre, string cast, string dir, unsigned int season, unsigned int ep);
	~Series();

	unsigned int GetSeasons();
	void SetSeasons(unsigned int);
	unsigned int GetEpisodes();
	void SetEpisodes(unsigned int);
}

