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
```
# Basic Commands
-h --help                       Print this help text and exit
-v --version                    Print program version and exit
-f --format <FORMAT>            Video format code
-q --quality <RESOLUTION>       Convert video into specified resolution
-o --output <[TYPES:]TEMPLATE>  Output filename template; see "OUTPUT
                                TEMPLATE" for details
-x                              Convert video files to audio-only files
                                (requires ffmpeg and ffprobe)
-F                              List available formats of each video.
                                Simulate unless --no-simulate is used

# Advanced Commands
-k                              Keep the intermediate video file on disk
                                after post-processing
--verbose                       Print various debugging information
--skip-download                 Do not download the video but write all
                                related files (Alias: --no-download)
--quiet                         Activate quiet mode. If used with --verbose,
                                print the log to stderr
--proxy <URL>                   Use the specified HTTP/HTTPS/SOCKS proxy. To
                                enable SOCKS proxy, specify a proper scheme,
                                e.g. socks5://user:pass@127.0.0.1:1080/.
                                Pass in an empty string (--proxy "") for
                                direct connection
--cookies-from-browser <BROWSER[+KEYRING][:PROFILE][::CONTAINER]>  
                                The name of the browser to load cookies
                                from. Currently supported browsers are:
                                brave, chrome, chromium, edge, firefox,
                                opera, safari, vivaldi, whale. Optionally,
                                the KEYRING used for decrypting Chromium
                                cookies on Linux, the name/path of the
                                PROFILE to load cookies from, and the
                                CONTAINER name (if Firefox) ("none" for no
                                container) can be given with their
                                respective separators. By default, all
                                containers of the most recently accessed
                                profile are used. Currently supported
                                keyrings are: basictext, gnomekeyring,
                                kwallet, kwallet5, kwallet6
-N --concurrent-fragments <N>   Number of fragments of a dash/hlsnative
                                video that should be downloaded concurrently
                                (default is 1)
-t --preset-alias <PRESET>      Applies a predefined set of options. e.g.
                                --preset-alias mp3. The following presets
                                are available: mp3, aac, mp4, mkv, sleep.
                                See the "Preset Aliases" section at the end
                                for more info. This option can be used
                                multiple times

# Playlist Commands
--yes-playlist                  Download the playlist, if the URL refers to
                                a video and a playlist

# Subtitles Commands
--write-subs                    Write subtitle file
--list-subs                     List available subtitles of each video.
                                Simulate unless --no-simulate is used
--sub-format <FORMAT>           Subtitle format; accepts formats preference
                                separated by "/", e.g. "srt" or "ass/srt/best"
--write-auto-subs               Write automatically generated subtitle file
                                (Alias: --write-automatic-subs)
--no-write-auto-subs            Do not write auto-generated subtitles
                                (default) (Alias: --no-write-automatic-subs)
```

Commands that need testing/further testing:
- --skip-download
- --proxy
- --cookies-from-browser
- -t --preset-alias
