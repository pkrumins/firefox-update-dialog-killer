#include <windows.h>
#include <cstdio>

int WINAPI
WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    while (1) {
        HWND dialog = FindWindow("MozillaDialogClass", "FireFox Update");
        if (dialog) {
            printf("Found dialog: %x\n", dialog);
            HWND dialogItem = NULL;
            SendMessage(dialog, WM_CLOSE, 0, 0);
        }
        Sleep(2000);
    }
}
