#!/bin/bash
echo "Installing meow-lang..."

if [ ! -f "meow" ]; then
    echo "Error: 'meow' executable not found in this folder!"
    exit 1
fi

mkdir -p "$HOME/.local/bin"

cp meow "$HOME/.local/bin/meow"

chmod +x "$HOME/.local/bin/meow"

if [[ ":$PATH:" != *":$HOME/.local/bin:"* ]]; then
    if [ -f "$HOME/.bashrc" ]; then
        echo 'export PATH="$HOME/.local/bin:$PATH"' >> "$HOME/.bashrc"
    fi
    if [ -f "$HOME/.zshrc" ]; then
        echo 'export PATH="$HOME/.local/bin:$PATH"' >> "$HOME/.zshrc"
    fi
fi

echo "Done! Please restart your terminal."
