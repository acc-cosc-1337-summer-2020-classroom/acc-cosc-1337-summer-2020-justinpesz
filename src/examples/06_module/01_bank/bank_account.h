//bank_account.h


class BankAccount
{

public:
    BankAccount() : BankAccount(500){}
    BankAccount(int b) : balance{b} { bank balance }
    int get_balance() const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private:
    int balance;
    static int bank_balance;
};

