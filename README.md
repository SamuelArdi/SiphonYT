Convert YouTube videos into mp4, mp3, flac, m4a, etc. Using commands from yt-dlp.

## About
This project is a starting point for another project I will be doing after this, it's going to be more fleshed out,
and plus it's going to be a GUI which will be 10x better.

## Purpose
The purpose of this project is simple, get the basic fundamental of using yt-dlp, and once I've gotten the grasp on how
it works and how I can use it to the fullest, I will be moving on to my real project, which will involve a GUI to make
the user experience better

## Requirements
[yt-dlp](https://github.com/yt-dlp/yt-dlp). The core of this program, it can't and will not work without it.  
[FFmpeg](https://github.com/BtbN/FFmpeg-Builds). Required for merging video and audio. Without this, your video will be separated into it's video format and it's audio format.  
It is recommended to put these executables into a folder and add said folder into your environment variables, to make
setting up easier.

## Arguments
The current arguments that are working right now are:  
-h --help  
-v --version  
-x  

-f --format  
-q --quality  
-o --output

Arguments that are WIP:  
- [x] --yes-playlist
- [x] --write-subs
- [x] --sub-langs
- [ ] --verbose
- [ ] --skip-download
- [ ] --proxy
- [ ] --cookies-from-browser
- [x] -F
- [ ] --concurrent-fragments / -N
- [ ] --quiet / -q
- [ ] -t
- [x] --list-subs
- [x] --sub-format
- [x] --write-auto-subs
- [x] --no-write-auto-subs

Plan to add arguments:  
no arguments planned to be added as of this moment.