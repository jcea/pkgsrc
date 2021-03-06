# $NetBSD: Makefile,v 1.28 2017/01/21 20:06:53 ryoon Exp $

FIREFOX_VER=	${MOZ_BRANCH}${MOZ_BRANCH_MINOR}esr
# Also update MOZ_BRANCH= in devel/xulrunner31/Makefile
MOZ_BRANCH=	31.8
MOZ_BRANCH_MINOR=	.0

DISTNAME=	firefox-${FIREFOX_VER}.source
PKGNAME=	firefox31-${MOZ_BRANCH}${MOZ_BRANCH_MINOR:S/b/beta/:S/esr//}
PKGREVISION=	11
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_MOZILLA:=firefox/releases/${FIREFOX_VER}/source/}
MASTER_SITES+=	${MASTER_SITE_MOZILLA_ALL:=firefox/releases/${FIREFOX_VER}/source/}
EXTRACT_SUFX=	.tar.bz2

WRKSRC=		${WRKDIR}/mozilla-esr31

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	http://www.mozilla.com/en-US/firefox/
COMMENT=	Web browser with support for extensions (version ${MOZ_BRANCH:C/\..*//})
LICENSE=	mpl-1.1

MOZILLA_DIR=	# empty

# Note: when updating remember to conditionalise about-background.png in PLIST
# XXX Firefox 21.0's firefox/xulrunner separation is not working.
#CONFIGURE_ARGS+=	--with-libxul-sdk
#CONFIGURE_ARGS+=	--with-system-libxul
CONFIGURE_ARGS+=	--enable-application=browser

# workround for link of libxul.so etc.
LDFLAGS+=		${COMPILER_RPATH_FLAG}${PREFIX}/lib/firefox31 ${COMPILER_RPATH_FLAG}${PREFIX}/lib
LDFLAGS.SunOS+=		-lm

ALL_ENV+=		MOZILLA_PKG_NAME=firefox31

# Avoid ld "invalid section index" errors.
BUILDLINK_TRANSFORM.SunOS+=	rm:-fdata-sections
BUILDLINK_TRANSFORM.SunOS+=	rm:-ffunction-sections

LDFLAGS.DragonFly=	-lplc4 -lnspr4
LDFLAGS.FreeBSD=	-lplc4 -lnspr4
LDFLAGS.Linux=		-lnspr4

.include "mozilla-common.mk"
.include "options.mk"

CHECK_INTERPRETER_SKIP+=lib/firefox31-sdk/sdk/bin/header.py
CHECK_INTERPRETER_SKIP+=lib/firefox31-sdk/sdk/bin/typelib.py
CHECK_INTERPRETER_SKIP+=lib/firefox31-sdk/sdk/bin/xpidl.py
CHECK_INTERPRETER_SKIP+=lib/firefox31-sdk/sdk/bin/xpt.py

MOZILLA=firefox31
MOZILLA_ICON=	${WRKSRC}/${OBJDIR}/dist/firefox/browser/chrome/icons/default/default48.png
.if !empty(PKG_OPTIONS:Mofficial-mozilla-branding)
MOZILLA_NAME=	Firefox
.else
MOZILLA_NAME=	Browser
.endif

SUBST_CLASSES+=		sys-dic
SUBST_STAGE.sys-dic=	pre-configure
SUBST_MESSAGE.sys-dic=	Reference to system hunspell dictionaries.
SUBST_FILES.sys-dic=	extensions/spellcheck/hunspell/src/mozHunspell.cpp
SUBST_VARS.sys-dic=	PREFIX

post-extract:
	mv ${WRKSRC}/gfx/ycbcr/yuv_row_arm.s ${WRKSRC}/gfx/ycbcr/yuv_row_arm.S

pre-configure:
	cd ${WRKSRC} && mkdir ${OBJDIR}
	cd ${WRKSRC} && autoconf
	cd ${WRKSRC}/js/src && autoconf
# XXX Makefile is broken? When libxul is provided from devel/xulrunner,
# XXX please remove this.
	mkdir ${WRKSRC}/js/src/.deps

post-build:
	${SED} -e 's|@MOZILLA@|${MOZILLA}|g'				\
	  -e 's|@MOZILLA_NAME@|${MOZILLA_NAME}|g'			\
	  -e 's|@FIREFOX_ICON@|${MOZILLA}.png|g'			\
	  < ${FILESDIR}/desktop.in					\
	  > ${WRKDIR}/desktop

INSTALLATION_DIRS+=	share/applications share/pixmaps
post-install:
	${INSTALL_DATA} ${WRKDIR}/desktop				\
	  ${DESTDIR}${PREFIX}/share/applications/${MOZILLA}.desktop
	${INSTALL_DATA} ${MOZILLA_ICON}					\
	  ${DESTDIR}${PREFIX}/share/pixmaps/${MOZILLA}.png

.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
