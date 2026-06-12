#!/bin/bash
echo "Installing meow-lang..."

mkdir -p ~/.local/bin
cp meow ~/.local/bin/meow

if [[ ":$PATH:" != *":$HOME/.local/bin:"* ]]; then
    echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bashrc
    echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.zshrc
fi

echo "Done! Please restart your terminal."
