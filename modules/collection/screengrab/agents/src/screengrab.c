#include <windows.h>
#include <stdio.h>
#include "screengrab.h"

// https://docs.microsoft.com/en-us/windows/desktop/dlls/dynamic-link-library-entry-point-function


BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved )  // reserved
{
    // // Perform actions based on the reason for calling.
    // switch( fdwReason )
    // {
    //     case DLL_PROCESS_ATTACH:
    //         //MessageBoxA( NULL, "Starting DllMain-PROCESS_ATTACH", "Fuck Reflective Dll Injection", MB_OK );
    //         //Test();
    //         //MessageBoxA( NULL, "Ending DllMain-PROCESS_ATTACH", "Fuck Reflective Dll Injection", MB_OK );
    //         break;
    // }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
//Starts the module and takes in the RPC port the module talks with
int Module(char *port){
    StartModule(port);
    return 0;
}