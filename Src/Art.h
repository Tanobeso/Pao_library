Class Art public: PhysicalItem{
private:
	string style;
public:
	Art(string title, string desc, string aut, string size, string style);
	~Art();

	string GetStyle();
	void SetStyle(string style);
}