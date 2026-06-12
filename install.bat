@echo off
echo Installing meow-lang...

mkdir C:\meow 2>nul

if not exist meow.exe (
    echo Error: meow.exe not found in this folder!
    pause
    exit /b 1
)

copy meow.exe C:\meow\meow.exe >nul

set "OLD_PATH="
for /f "tokens=2,*" %%A in ('reg query "HKCU\Environment" /v Path 2^>nul') do (
    set "OLD_PATH=%%B"
)

if defined OLD_PATH (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "%OLD_PATH%;C:\meow" /f >nul
) else (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "C:\meow" /f >nul
)

echo Done! Please restart your terminal.
pause
