#include <Windows.h>
int main(int argc, const char * argv[])
{
    while (true)
    {
        system("\"" + argv[0] + "\"");
    }
}
