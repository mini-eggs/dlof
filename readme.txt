     _ _        __ 
  __| | | ___  / _|
 / _` | |/ _ \| |_ 
| (_| | | (_) |  _|
 \__,_|_|\___/|_|  
                   
 _   _                                        _ _                __ 
| |_| |__   ___    ___  _ __  _ __   ___  ___(_) |_ ___    ___  / _|
| __| '_ \ / _ \  / _ \| '_ \| '_ \ / _ \/ __| | __/ _ \  / _ \| |_ 
| |_| | | |  __/ | (_) | |_) | |_) | (_) \__ \ | ||  __/ | (_) |  _|
 \__|_| |_|\___|  \___/| .__/| .__/ \___/|___/_|\__\___|  \___/|_|  
                       |_|   |_|                                    
  __       _     _   
 / _| ___ | | __| |  
| |_ / _ \| |/ _` |  
|  _| (_) | | (_| |_ 
|_|  \___/|_|\__,_(_)

Unfold a folded file.

Usage:

$ cat hi.txt | dlof

Given the file "hi.txt" is wrapped it will print out the unwrapped version to 
standard out.

Installation: 

On an Arch Linux or Arch Linux derivative you can install via AUR. Assuming you
have "yay" installed:

$ yay -S dlof

If you're not on an Arch Linux based distrobution clone this repo and run:

$ make

Then move the resulting "dlof" executable into your path.

MIT licensed.

