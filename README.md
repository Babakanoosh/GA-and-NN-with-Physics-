An openGL rendering program. The command line and openGL window are on separate threads so the user can give commands to the openGL loop; the command line I/O inaccessible if not in a separate thread.
The camera is controlled by WASD and the world is controlled by the command I/O and the num pad.
Objects are read in from an OBJ file and rendered.