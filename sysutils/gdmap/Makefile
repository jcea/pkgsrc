# $NetBSD: Makefile,v 1.4 2016/08/03 10:23:22 adam Exp $
#

DISTNAME=		gdmap-0.8.1
PKGREVISION=		2
CATEGORIES=		sysutils
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=gdmap/}

MAINTAINER=		dhowland@users.sourceforge.net
HOMEPAGE=		http://gdmap.sourceforge.net/
COMMENT=		Tool to visualize disk space
LICENSE=		gnu-gpl-v3

GNU_CONFIGURE=		yes
USE_LANGUAGES=		c c++
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake pkg-config msgfmt xgettext perl intltool

LDFLAGS.SunOS+=		-lm

.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
