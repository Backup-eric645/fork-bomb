#include <Windows.h>
int main(int argc, const char * argv[])
{
    auto s = new SECURITY_ATTRIBUTES;
    s->nLength = sizeof(SECURITY_ATTRIBUTES);
    s->lpSecurityDescriptor = 0;
    s->bInheritHandle = 0;
    while (true)
    {
        CreateProcess(argv[0], 0, s, s, 0, NORMAL_PRIORITY_CLASS, 0, 0, 0, 0);
    }
}
