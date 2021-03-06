$NetBSD: patch-plugin.h,v 1.2 2016/11/28 14:41:40 leot Exp $

Update to mupdf-1.10 API.

--- plugin.h.orig	2016-02-14 22:49:46.000000000 +0000
+++ plugin.h
@@ -21,8 +21,8 @@ typedef struct mupdf_page_s
 {
   fz_page* page; /**< Reference to the mupdf page */
   fz_context* ctx; /**< Context */
-  fz_text_sheet* sheet; /**< Text sheet */
-  fz_text_page* text; /**< Page text */
+  fz_stext_sheet* sheet; /**< Text sheet */
+  fz_stext_page* text; /**< Page text */
   fz_rect bbox; /**< Bbox */
   bool extracted_text; /**< If text has already been extracted */
 } mupdf_page_t;
