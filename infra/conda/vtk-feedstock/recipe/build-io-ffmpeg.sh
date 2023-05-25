#!/bin/bash

set -x


# Move vtkIOFFMPEG files to $PREFIX
# and the ffmpeg-related files in the FFMPEG_DIR and process each of them
FFMPEG_DIR="$(dirname $PREFIX)/ffmpeg_dir"
find $FFMPEG_DIR -name "*vtkIOFFMPEG*" -print0 | while IFS= read -r -d '' file; do
    dest_dir="$PREFIX/${file#$FFMPEG_DIR/}"
    mkdir -p "$(dirname "$dest_dir")"
    mv "$file" "$dest_dir"
done
