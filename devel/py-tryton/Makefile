# $NetBSD: Makefile,v 1.25 2017/01/11 17:01:23 rodent Exp $
TRYTON_MODULE_NAME=	tryton
.include "../../devel/py-trytond/Makefile.common"
CATEGORIES=	devel python

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://www.tryton.org/
COMMENT=	Three-tiers high-level general purpose application platform
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=		# none

PYTHON_VERSIONED_DEPENDENCIES=	dateutil

PYTHON_VERSIONS_INCOMPATIBLE=   34 35 36

.include "options.mk"

DEPENDS+=		${PYPKGPREFIX}-chardet-[0-9]*:../../converters/py-chardet
DEPENDS.Darwin+=	${PYPKGPREFIX}-py2app-[0-9]*:../../devel/py-py2app

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/tryton \
		${DESTDIR}${PREFIX}/bin/tryton${PYVERSSUFFIX} || ${TRUE}

.include "../../graphics/librsvg/buildlink3.mk"
.include "../../x11/py-gtk2/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
