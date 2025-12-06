#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void run_backup(string backup_dir) {
    string cmd = "tar -czf backup.tar.gz " + backup_dir;
    system(cmd.c_str());
}

void connect_db() {
    string db_host = "192.168.1.15";
    string db_user = "admin";
    string db_pass = "P@ssw0rd123!";

    cout << "Connecting to " << db_host << " as " << db_user << endl;
}

int main() {
    connect_db();
    run_backup("/var/www/html");
    return 0;
}
