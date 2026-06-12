@echo off
echo Installing meow-lang...

mkdir C:\meow 2>nul
copy meow.exe C:\meow\meow.exe >nul

for /f "tokens=2*" %%a in ('reg query "HKCU\Environment" /v Path 2^>nul') do set "OLD_PATH=%%b"
if defined OLD_PATH (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "%OLD_PATH%;C:\meow" /f >nul
) else (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "C:\meow" /f >nul
)

echo Done! Please restart your terminal.
pause
