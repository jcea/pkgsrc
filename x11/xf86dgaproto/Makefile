# $NetBSD: Makefile,v 1.5 2012/10/29 05:07:08 asau Exp $
#

DISTNAME=		xf86dgaproto-2.1
CATEGORIES=		x11
MASTER_SITES=		${MASTER_SITE_XORG:=proto/}
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		joerg@NetBSD.org
HOMEPAGE=		http://xorg.freedesktop.org/
COMMENT=		XF86DGA extension headers

PKGCONFIG_OVERRIDE+=	xf86dgaproto.pc.in
USE_TOOLS+=		pkg-config
GNU_CONFIGURE=		yes

.include "../../x11/xproto/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
