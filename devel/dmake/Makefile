# $NetBSD: Makefile,v 1.17 2016/03/27 23:08:14 jperkin Exp $

DISTNAME=	dmake-4.12.2
CATEGORIES=	devel
MASTER_SITES=	http://dmake.apache-extras.org.codespot.com/files/
EXTRACT_SUFX=.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://code.google.com/a/apache-extras.org/p/dmake
COMMENT=	Portable make supported by many platforms
LICENSE=	gnu-gpl-v1

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--datarootdir=${PREFIX}/share/dmake

TEST_TARGET=		check
INSTALLATION_DIRS=	bin share/dmake ${PKGMANDIR}/man1

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "SunOS"
PLIST_SUBST+=	STARTUPOS=solaris
.elif ${OPSYS} == "Darwin"
PLIST_SUBST+=	STARTUPOS=macosx
.else
PLIST_SUBST+=	STARTUPOS=linux
.endif

pre-test:
	${SH} -c 'for a in 1 2 3 4 5 6 7 8 9 10 11 12;\
	 do ${CHMOD} u+x ${WRKSRC}/tests/targets-$$a ;done'

pre-install:
	${INSTALL_MAN} ${WRKSRC}/man/dmake.tf \
		${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/dmake.1

.include "../../mk/bsd.pkg.mk"
