:loop
	rand.exe > 1.in
	hoj1012.exe < 1.in > 1.out
	ac.exe < 1.in > 1.ans
	fc 1.out 1.ans
	if not errorlevel 1 goto loop