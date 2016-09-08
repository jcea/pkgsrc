$NetBSD$

Disable -fomit-frame-pointer.
Add support for -fstrict-calling-conventions.

--- gcc/config/i386/i386.c.orig	2016-05-20 13:24:29.000000000 +0000
+++ gcc/config/i386/i386.c
@@ -3973,7 +3973,7 @@ ix86_option_override_internal (bool main
     }
 
   /* Keep nonleaf frame pointers.  */
-  if (opts->x_flag_omit_frame_pointer)
+  if (0)
     opts->x_target_flags &= ~MASK_OMIT_LEAF_FRAME_POINTER;
   else if (TARGET_OMIT_LEAF_FRAME_POINTER_P (opts->x_target_flags))
     opts->x_flag_omit_frame_pointer = 1;
@@ -5863,6 +5863,7 @@ ix86_function_regparm (const_tree type,
 	 and callee not, or vice versa.  Instead look at whether the callee
 	 is optimized or not.  */
       if (target && opt_for_fn (target->decl, optimize)
+	  && (TARGET_64BIT || !flag_strict_calling_conventions)
 	  && !(profile_flag && !flag_fentry))
 	{
 	  cgraph_local_info *i = &target->local;
@@ -5954,6 +5955,7 @@ ix86_function_sseregparm (const_tree typ
       /* TARGET_SSE_MATH */
       && (target_opts_for_fn (target->decl)->x_ix86_fpmath & FPMATH_SSE)
       && opt_for_fn (target->decl, optimize)
+      && (TARGET_64BIT || !flag_strict_calling_conventions)
       && !(profile_flag && !flag_fentry))
     {
       cgraph_local_info *i = &target->local;
@@ -11294,7 +11296,7 @@ ix86_finalize_stack_realign_flags (void)
   if (stack_realign
       && frame_pointer_needed
       && crtl->is_leaf
-      && flag_omit_frame_pointer
+      && 0
       && crtl->sp_is_unchanging
       && !ix86_current_function_calls_tls_descriptor
       && !crtl->accesses_prior_frames
