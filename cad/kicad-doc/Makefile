# $NetBSD: Makefile,v 1.3 2016/09/08 09:32:28 bouyer Exp $
#

V=		4.0.4
DISTNAME=	kicad-doc-${V}
CATEGORIES=	cad
MASTER_SITES=	http://downloads.kicad-pcb.org/docs/

MAINTAINER=	bouyer@NetBSD.org
HOMEPAGE=	http://kicad-pcb.org/
COMMENT=	Documentation for the PCB CAD software
LICENSE=	gnu-gpl-v2

DOCDIR=		${DESTDIR}${PREFIX}/share/doc/kicad

do-build:
do-install:
	${INSTALL_DATA_DIR} ${DOCDIR}
	${CP} -R ${WRKSRC}/share/doc/kicad/help ${DOCDIR}/
	${FIND} ${DOCDIR} -type d -print | ${XARGS} ${CHMOD} ${PKGDIRMODE}
	${FIND} ${DOCDIR} -type f -print | ${XARGS} ${CHMOD} ${SHAREMODE}

.include "../../mk/bsd.prefs.mk"
.include "../../mk/bsd.pkg.mk"
