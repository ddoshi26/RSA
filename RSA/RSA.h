#ifndef RSA_SERVER
#define RSA_SERVER
using namespace std;

#define PASSWORD_FILE "password.txt"

class RSAServer {
	// Add any variables you need

private:
	int open_server_socket(int port);

public:
	void initialize();
	bool checkPassword(int fd, const char * user, const char * password);
	void processRequest( int socket );
	int isPrime(int num);
	int gcdCalculator (int x, int y);
	int generateCipherValue (int m, int e, int n);
	char decryptCipherValue (int val, int d, int n);
	int modInverse (int e, int phi);
	void encryptMessage(int fd, const char * user, const char * password, const char * args);
	void decryptMessage(int fd, const char * user, const char * password, const char * args);
	void addUser(int fd, const char * user, const char * password, const char * args);
	void checkLogin(int fd, const char * user, const char * password, const char * args);
	void runServer(int port);
};

#endif
  
               
