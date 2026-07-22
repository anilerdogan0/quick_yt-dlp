# Quick YT-DLP
### Installing:
* Download [yt-dlp](https://github.com/yt-dlp/yt-dlp/releases)
* Extract yt-dlp files to a local folder.
* Download [yt.exe](https://github.com/anilerdogan0/quick_yt-dlp/releases/tag/builds)
* Extract copy yt.exe to yt-dlp folder.
* Press Win + R keys.
* Write "sysdm.cpl" to Run and press enter.
* Press "Environment Variables" on this window.
* Find "Path" under "System Variables" on new window.
* Select "Path" and press "Edit".
* Press "New" on new window.
* Paste yt-dlp folder path to this area.
* Close all windows with press "OK" buttons.

### Using:
* Open Command Prompt.
* Text "yt" and add link. (example: "yt https://www.youtube.com/watch?v=EfSJnVJyZvo")
* You will see formats table.
* Select formats you want.
* Text "yt", link again and add formats. (example: "yt https://www.youtube.com/watch?v=zmBMil5vmCo 251+137")
* Download will be starts.

### Compilation:
* This program is haven't any dependency.
* Download [quick_yt-dlp.c](https://github.com/anilerdogan0/quick_yt-dlp/blob/main/quick_yt-dlp.c)
* You need a compiler now, I recommend [MinGW](https://sourceforge.net/projects/mingw/) to you for GNU C Compiler (GCC) on Windows.
* Press path area on Windows Explorer, press backspace and remove path, write "cmd" and press enter; CMD will run on current path.
* Write "gcc quick_yt-dlp.c -o yt" and press enter, yt.exe will compile.
* You can go to "Installing" steps with yt.exe now.
