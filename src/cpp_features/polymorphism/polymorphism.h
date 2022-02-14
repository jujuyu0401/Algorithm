class First
{
public:
    First(){ cout << "first!" << endl;}
    virtual First* copy() {}
    virtual void show() {
   }
    void show() const{}
    ~First() { cout << "destroy"; }

    class Second
    {
    public:
        Second() { cout << "second" << endl; }
    };

};

class Third : public First
{
public:
    Third() { cout << "third" << endl; }
    void show() { cout << "show"; }
    Third* copy(){ return this; }
private:
    First s;

};
