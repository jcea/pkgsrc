# $NetBSD: Makefile,v 1.51 2016/10/05 13:09:38 wiz Exp $

DISTNAME=	puzzles
PKGNAME=	puzzles-20160429
CATEGORIES=	games
# distfile changes every day
MASTER_SITES=	# http://www.chiark.greenend.org.uk/~sgtatham/puzzles/
DIST_SUBDIR=	${PKGNAME_NOREV}

MAINTAINER=	wiz@NetBSD.org
HOMEPAGE=	http://www.chiark.greenend.org.uk/~sgtatham/puzzles/
COMMENT=	Collection of small one-player puzzle games by Simon Tatham
LICENSE=	mit

INSTALLATION_DIRS=	bin share/doc/puzzles

WRKSRC=		${WRKDIR}/puzzles-20160429.b31155b
USE_TOOLS+=	gmake pkg-config

BUILDLINK_TRANSFORM+=	rm:-Werror
MAKE_FLAGS=	prefix=${PREFIX}
MAKE_FLAGS=	gamesdir=${PREFIX}/bin
MAKE_FILE=	Makefile.gtk
CFLAGS+=	-DREVISION=${DISTNAME:S/puzzles-r//}

post-install:
	${INSTALL_DATA} ${WRKSRC}/puzzles.txt \
		${DESTDIR}${PREFIX}/share/doc/puzzles

.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
