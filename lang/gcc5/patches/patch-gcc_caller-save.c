$NetBSD$

Disable -fomit-frame-pointer.

--- gcc/caller-save.c.orig	2015-01-15 13:28:42.000000000 +0000
+++ gcc/caller-save.c
@@ -405,7 +405,7 @@ saved_hard_reg_compare_func (const void
   const struct saved_hard_reg *p1 = *(struct saved_hard_reg * const *) v1p;
   const struct saved_hard_reg *p2 = *(struct saved_hard_reg * const *) v2p;
 
-  if (flag_omit_frame_pointer)
+  if (0)
     {
       if (p1->call_freq - p2->call_freq != 0)
 	return p1->call_freq - p2->call_freq;
