# $NetBSD: Makefile,v 1.43 2016/11/25 17:32:14 prlw1 Exp $

DISTNAME=	pangomm-2.40.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/pangomm/${PKGVERSION_NOREV:R}/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	adam@NetBSD.org
HOMEPAGE=	http://www.gtkmm.org/
COMMENT=	C++ bindings for pango
LICENSE=	gnu-lgpl-v2.1

CONFLICTS+=		gtkmm<=2.13.5

USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake pkg-config perl:run
GNU_CONFIGURE=		yes
PKGCONFIG_OVERRIDE+=	pango/pangomm.pc.in

CXXFLAGS+=		-std=c++11

BUILDLINK_API_DEPENDS.mm-common+=      mm-common>=0.9.10
.include "../../devel/mm-common/buildlink3.mk"
.include "../../devel/glibmm/buildlink3.mk"
BUILDLINK_API_DEPENDS.pango+=	pango>=1.26.0
.include "../../devel/pango/buildlink3.mk"
.include "../../graphics/cairomm/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
