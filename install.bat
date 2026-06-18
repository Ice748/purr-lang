@echo off
echo Installing purr-lang...

mkdir C:\purr 2>nul

if not exist purr.exe (
    echo Error: purr.exe not found in this folder!
    pause
    exit /b 1
)

copy purr.exe C:\purr\purr.exe >nul

set "OLD_PATH="
for /f "tokens=2,*" %%A in ('reg query "HKCU\Environment" /v Path 2^>nul') do (
    set "OLD_PATH=%%B"
)

if defined OLD_PATH (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "%OLD_PATH%;C:\purr" /f >nul
) else (
    reg add "HKCU\Environment" /v Path /t REG_EXPAND_SZ /d "C:\purr" /f >nul
)

echo Done! Please restart your terminal.
pause
