$NetBSD$

Add basic multiarch support to virtualenv. Creates copies of real binaries (in addition to the abiexec wrapper.)

--- virtualenv.py.orig	2016-08-05 12:22:20.000000000 +0000
+++ virtualenv.py
@@ -1199,6 +1199,9 @@ def install_python(home_dir, lib_dir, in
                  symlink=False)
 
     mkdir(bin_dir)
+    # Create multiarch bin dirs
+    mkdir(join(bin_dir, '@BINARCHSUFFIX32@'))
+    mkdir(join(bin_dir, '@BINARCHSUFFIX64@'))
     py_executable = join(bin_dir, os.path.basename(sys.executable))
     if 'Python.framework' in prefix:
         # OS X framework builds cause validation to break
@@ -1229,6 +1232,19 @@ def install_python(home_dir, lib_dir, in
         executable = sys.executable
         shutil.copyfile(executable, py_executable)
         make_exe(py_executable)
+        # Copy multiarch binaries
+        executable32 = os.path.join(os.path.dirname(executable),
+                                    '@BINARCHSUFFIX32@', os.path.basename(executable))
+        executable64 = os.path.join(os.path.dirname(executable),
+                                    '@BINARCHSUFFIX64@', os.path.basename(executable))
+        py_executable32 = os.path.join(os.path.dirname(py_executable),
+                                       '@BINARCHSUFFIX32@', os.path.basename(py_executable))
+        py_executable64 = os.path.join(os.path.dirname(py_executable),
+                                       '@BINARCHSUFFIX64@', os.path.basename(py_executable))
+        shutil.copyfile(executable32, py_executable32)
+        shutil.copyfile(executable64, py_executable64)
+        make_exe(py_executable32)
+        make_exe(py_executable64)
         if is_win or is_cygwin:
             pythonw = os.path.join(os.path.dirname(sys.executable), 'pythonw.exe')
             if os.path.exists(pythonw):
