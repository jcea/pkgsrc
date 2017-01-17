# $NetBSD: Makefile,v 1.36 2017/01/03 13:23:03 jperkin Exp $

DISTNAME=	virtualenv-15.1.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=v/virtualenv/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pypi.python.org/pypi/virtualenv
COMMENT=	Virtual Python Environment builder
LICENSE=	mit

REPLACE_PYTHON=	virtualenv.py

SUBST_CLASSES+=		arch
SUBST_STAGE.arch=	pre-configure
SUBST_MESSAGE.arch=	Fixing multiarch support
SUBST_FILES.arch=	virtualenv.py
SUBST_SED.arch=		-e 's|@BINARCHSUFFIX32@|${BINARCHSUFFIX.32:S/\///}|'
SUBST_SED.arch+=	-e 's|@BINARCHSUFFIX64@|${BINARCHSUFFIX.64:S/\///}|'

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/virtualenv ${DESTDIR}${PREFIX}/bin/virtualenv-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
