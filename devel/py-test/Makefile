# $NetBSD: Makefile,v 1.26 2017/01/03 13:23:02 jperkin Exp $

DISTNAME=	pytest-3.0.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/py//}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PYPI:=p/pytest/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/pytest
COMMENT=	Python testing tool
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-py>=1.4.29:../../devel/py-py
DEPENDS+=	${PYPKGPREFIX}-expat-[0-9]*:../../textproc/py-expat
# TEST_DEPENDS
BUILD_DEPENDS+=	${PYPKGPREFIX}-yaml-[0-9]*:../../textproc/py-yaml
BUILD_DEPENDS+=	${PYPKGPREFIX}-hypothesis-[0-9]*:../../devel/py-hypothesis
USE_TOOLS+=	bash:build

USE_LANGUAGES=	# none

REPLACE_PYTHON+=	_pytest/standalonetemplate.py

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
		${MV} py.test py.test-${PYVERSSUFFIX} && \
		${MV} pytest pytest-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
