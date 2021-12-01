#include <string>

class PassWiz_Generator{

    private:
        std::string password;
        int length;
        
    public:
        PassWiz_Generator();
        ~PassWiz_Generator();
        std::string password_builder(int len);
        std::string getPword();
        void setPword(std::string pword);

};