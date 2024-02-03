#!/bin/bash

# Warning! The build script is tailored to my environment and may contain hard coded paths.
# Use it only as a reference.

set -e

# Ensure $HOME/.local/bin is in path.
export PATH="$HOME/.local/bin:$PATH"

km_repo=$(realpath .)
km_src="${km_repo}/keymaps/main"
firmware_repo=$(realpath ~/src/github/zsa/qmk_firmware)
firmware_km="${firmware_repo}/keyboards/voyager/keymaps/mrahhal_main"

# Ensure mrahhal_main keymap dir exists under voyager keyboard.
mkdir -p $firmware_km

# Copy the keymap source from this repo to the firmware source.
printf "Copying from\n'${km_src}'\nto\n'${firmware_km}'\n"
cp -a $km_src/. $firmware_km
echo "---"

# Build it.
make -C $firmware_repo voyager:mrahhal_main

# Copy the built bins back to this repo.
cp $firmware_repo/*.bin $km_repo

GREEN='\e[1;32m'
NC='\e[0m'

echo "---"
printf "${GREEN}Success!${NC} Copied bins to '${km_repo}'\n"
echo "Ready to flash."
