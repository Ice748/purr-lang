# purr
An esolang where all commands are exactly 2-character long.
> "It's designed to write absolutely unreadable code,  
> but it's still humanly possible to read (unlike Malbolge)."

---

## Features
- **Cross-platform**: purr is a **completely** cross-platform language. I'm working really hard on this feature!
- **Lightweight**: Designed with a focus on an ultra-lightweight interpreter.
- **Zero-dependency**: The interpreter is written using only the **C Standard Library** (`stdlib.h`, `stdio.h`).

## Examples
`Hello World!` program example:
```Assembly
pH pe pl pl po sp pW po pr pl pd p! ln
```

`Calculator` program example:
```Assembly
[Title]
pC pa pl pc pu pl pa pt po pr sp pi pn sp pp pu pr pr ln ln

[Input the 1st & 2nd numbers]
pP pl pe pa ps pe sp pe pn pt pe pr sp pt ph pe sp p1 ps pt sp pn pu pm pb pe pr p: sp i0
pP pl pe pa ps pe sp pe pn pt pe pr sp pt ph pe sp p2 pn pd sp pn pu pm pb pe pr p: sp i1 ln

[Calculating the result]
w2 c0 a1
pR pe ps pu pl pt p: sp o2 ln

[Exit with code 0]
e0
```

See more examples on [examples](examples/)

---

## Quick Start
**Download**:
1. Open the [Releases](https://github.com/Ice748/purr-lang/releases) page.
2. Find the latest version.
3. Download the **executable file**.
4. Add this file to PATH.
5. Make sure installation is completed successfully — run `purr version` in your terminal.

**Start programming**:
1. Read the [documentation](DOCUMENTATION.md) (it's not huge or boring).
2. Practice a little bit.
3. **Congratulations!** Now you have learned one of the **most confusing** programming languages!

**Enjoy! (:**

---

## Tech Stack
- **Language**: Pure **C (C23)**.
- **Compiler**: **GCC 15.2.0**

Made with [Notepad++](https://notepad-plus-plus.org)

---

## Arni
```text
|\__/ |  ( )
|o o  |   ) )
```
This is **Arni**, mascot of **purr-lang**!

## Support ❤️
You can easily support purr — just **star** this repository and you'll make me **REALLY** happy! (:

## License
This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
