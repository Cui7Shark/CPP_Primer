class Screen{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht *wd, c){ }
    char get() const {return contents[curssor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(posr r, pos c);
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contens;
}