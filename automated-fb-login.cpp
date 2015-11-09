#include <windows.h>
#include <iostream>

void sendKeyDown(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

void sendKeyUp(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}
int main()
{
     int x,y;
     system("start chrome.exe https:\\www.facebook.com");
     Sleep(10000);  // Time to open facebook site
     
     /* Username Field */
     SetCursorPos(824,105);                                                     // USER-NAME FIELD
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,35,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
     /* Your username */  ( if username is ' uditraikwar@rediffmail.com ' )
     Sleep(200);   sendKeyDown(85); sendKeyUp(85);
     Sleep(200);   sendKeyDown(68); sendKeyUp(68);
     Sleep(200);   sendKeyDown(73); sendKeyUp(73);
     Sleep(200);   sendKeyDown(84); sendKeyUp(84);
     Sleep(200);   sendKeyDown(82); sendKeyUp(82);
     Sleep(200);   sendKeyDown(65); sendKeyUp(65);
     Sleep(200);   sendKeyDown(73); sendKeyUp(73);
     Sleep(200);   sendKeyDown(75); sendKeyUp(75);
     Sleep(200);   sendKeyDown(87); sendKeyUp(87);
     Sleep(200);   sendKeyDown(65); sendKeyUp(65);
     Sleep(200);   sendKeyDown(82); sendKeyUp(82);
     /* '@' */     
	 Sleep(200);   sendKeyDown(VK_SHIFT); sendKeyDown(0x32); sendKeyUp(0x32); sendKeyUp(VK_SHIFT);
     /* rediffmail */     
	 Sleep(200);   sendKeyDown(82); sendKeyUp(82);
     Sleep(200);   sendKeyDown(69); sendKeyUp(69);
     Sleep(200);   sendKeyDown(68); sendKeyUp(68);
     Sleep(200);   sendKeyDown(73); sendKeyUp(73);
     Sleep(200);   sendKeyDown(70); sendKeyUp(70);
     Sleep(200);   sendKeyDown(70); sendKeyUp(70);
     Sleep(200);   sendKeyDown(77); sendKeyUp(77);
     Sleep(200);   sendKeyDown(65); sendKeyUp(65);
     Sleep(200);   sendKeyDown(73); sendKeyUp(73);
     Sleep(200);   sendKeyDown(76); sendKeyUp(76);
     Sleep(200);   sendKeyDown(110); sendKeyUp(110);
     Sleep(200);   sendKeyDown(67); sendKeyUp(67);
     Sleep(200);   sendKeyDown(79); sendKeyUp(79);
     Sleep(200);   sendKeyDown(77); sendKeyUp(77);
     
     /* Password Field */
     SetCursorPos(956,105);   // setting cursor postion in facebook password field                                                     // PASSOWRD FIELD
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,35,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
	 /* Your password */  ( if password is 'abcd98utwg' )
     Sleep(200);   sendKeyDown(65); sendKeyUp(65);  // 65 - a
     Sleep(200);   sendKeyDown(66); sendKeyUp(66);  // 66 - b
     Sleep(200);   sendKeyDown(67); sendKeyUp(67);  // 67 - c
     Sleep(200);   sendKeyDown(68); sendKeyUp(68);  // 68 - d
     Sleep(200);   sendKeyDown(57); sendKeyUp(57);  // 57 - 9
     Sleep(200);   sendKeyDown(56); sendKeyUp(56);  // 56 - 8
     Sleep(200);   sendKeyDown(85); sendKeyUp(85);  // 85 - u
     Sleep(200);   sendKeyDown(84); sendKeyUp(84);  // 84 - t
     Sleep(200);   sendKeyDown(87); sendKeyUp(87);  // 87 - w
     Sleep(200);   sendKeyDown(71); sendKeyUp(71);  // 71 - g
     
	 /* Clicking on Log In button */
	   SetCursorPos(1137,105); 
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,35,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
     //system("pause");
     return 0;  // Program exiting
}
