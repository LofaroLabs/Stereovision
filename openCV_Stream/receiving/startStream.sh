#!/bin/sh
gnome-terminal --tab --command "python left.py" --tab -e "python right.py" 
echo "======Stream started. There should be 2 tabs open======"
echo "======The left stream, and the right stream=="
echo "======The text will show: get jpeg when the respective cam image is being received=="