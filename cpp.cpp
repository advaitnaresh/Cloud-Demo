#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void run_backup(string backup_dir) {
    // VULNERABILITY: Command Injection
    // If backup_dir contains "; rm -rf /", the system executes it.
    string cmd = "tar -czf backup.tar.gz " + backup_dir;
    system(cmd.c_str());
}

void connect_db() {
    // VULNERABILITY: Hardcoded Credentials
    string db_host = "192.168.1.15";
    string db_user = "admin";
    string db_pass = "P@ssw0rd123!"; // Weak and hardcoded

    cout << "Connecting to " << db_host << " as " << db_user << endl;
}

int main() {
    connect_db();
    run_backup("/var/www/html");
    return 0;
}