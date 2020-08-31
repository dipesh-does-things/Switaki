# Switaki

[![Version](https://img.shields.io/badge/alpha-v0.1-red)](https://github.com/nathan-casabieille/Switaki)
[![License](https://img.shields.io/badge/license-GPL-yellowgreen)](https://github.com/nathan-casabieille/Switaki)
[![Build Status](https://travis-ci.org/nathan-casabieille/Switaki.svg?branch=master)](https://travis-ci.org/nathan-casabieille/Switaki)
[![Files](https://tokei.rs/b1/github/nathan-casabieille/Switaki?category=files)](https://github.com/nathan-casabieille/Switaki)
[![Lines](https://tokei.rs/b1/github/nathan-casabieille/Switaki?category=lines)](https://github.com/nathan-casabieille/Switaki)


```diff
- WARNING! -

Switaki is under development and is not working yet.
We would be very happy to welcome contributors to the project!.
```

You want to write or run old IBM-PCs programs ? Switaki is what you need !

Switaki is an Intel 8086 emulator, allowing you to write and run programs for Intel 8086, 8088, 80286 and 80386 microprocessors on modern computers with improvements.

The 8086 is a 16-bit microprocessor chip designed by Intel between early 1976 and June 8, 1978, when it was released. It gave rise to the x86 architecture, which eventually became Intel's most successful line of processors.

<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Intel_8086_pinout.svg/800px-Intel_8086_pinout.svg.png" width="233" height="353"/>
</p>

#### 1. Clone the repository

```bash
git clone https://github.com/nathan-casabieille/Switaki.git
```

#### 2. Build Switaki

```bash
cd Switaki && make
```

#### 3. Usage

```bash
./Switaki program
```

Output: The video RAM starts at address 8000h. Switaki emulate a 80x25 screen to console (This is very similiar to the real video mode).

## Contributing

All contributions are welcome. This is a group effort, and even small contributions can make a difference.
Some tasks also don't require much knowledge to get started.

You are welcome to ask if you need help getting started, or if you have any questions regarding this project.

## License

    Copyright (C) 2020 Switaki-Dev

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
