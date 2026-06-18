#!/bin/bash
echo "Installing purr-lang..."

if [ ! -f "purr" ]; then
    echo "Error: 'purr' executable not found in this folder!"
    exit 1
fi

mkdir -p "$HOME/.local/bin"

cp purr "$HOME/.local/bin/purr"

chmod +x "$HOME/.local/bin/purr"

if [[ ":$PATH:" != *":$HOME/.local/bin:"* ]]; then
    if [ -f "$HOME/.bashrc" ]; then
        echo 'export PATH="$HOME/.local/bin:$PATH"' >> "$HOME/.bashrc"
    fi
    if [ -f "$HOME/.zshrc" ]; then
        echo 'export PATH="$HOME/.local/bin:$PATH"' >> "$HOME/.zshrc"
    fi
fi

echo "Done! Please restart your terminal."
