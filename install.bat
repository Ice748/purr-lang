@echo off
echo Installing meow-lang...
mkdir C:\meow
copy meow.exe C:\meow\meow.exe
setx PATH "%PATH%;C:\meow"
echo Done! Please restart your terminal.
pause
