
Debian
====================
This directory contains files used to package protcoind/protcoin-qt
for Debian-based Linux systems. If you compile protcoind/protcoin-qt yourself, there are some useful files here.

## protcoin: URI support ##


protcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install protcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your protcoinqt binary to `/usr/bin`
and the `../../share/pixmaps/protcoin128.png` to `/usr/share/pixmaps`

protcoin-qt.protocol (KDE)

