#include <CoreFoundation/CoreFoundation.h>

int main()
{
    if (getuid() != 0) {
        printf("Run this as root!\n");
        return 1;
    }

    chown("/Library/LaunchDaemons/com.michael.httpserverd.plist", 0, 0);
    system("launchctl load /Library/LaunchDaemons/com.michael.httpserverd.plist");

    return 0;
}
