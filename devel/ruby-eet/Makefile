# $NetBSD: Makefile,v 1.16 2016/09/08 15:19:16 joerg Exp $

DISTNAME=	ruby-eet-0.1.4
PKGNAME=	${RUBY_PKGPREFIX}-${DISTNAME:S/ruby-//}
PKGREVISION=	9
CATEGORIES=	devel
MASTER_SITES=	ftp://code-monkey.de/pub/ruby-eet/

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	http://code-monkey.de/pages/ruby-eet
COMMENT=	Ruby module to read and write EET files
LICENSE=	mit

RUBY_VERSIONS_ACCEPTED= 18

RUBY_RDOC_REQD=	2.0.0
USE_RAKE=	YES
USE_TOOLS+=	pkg-config

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${RAKE}

do-install:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${INSTALL_ENV} ${RAKE} install

.include "../../lang/ruby/modules.mk"
.include "../../devel/eet/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
