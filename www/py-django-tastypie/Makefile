# $NetBSD: Makefile,v 1.8 2017/01/12 01:13:12 rodent Exp $

DISTNAME=	django-tastypie-0.13.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	python www
MASTER_SITES=	${MASTER_SITE_PYPI:=d/django-tastypie/}

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://github.com/toastdriven/django-tastypie/
COMMENT=	Flexible and capable API layer for Django
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-python-mimeparse>=0.1.4:../../www/py-python-mimeparse
DEPENDS+=	${PYPKGPREFIX}-django>=1.5:../../www/py-django
DEPENDS+=	${PYPKGPREFIX}-lxml>3:../../textproc/py-lxml
DEPENDS+=	${PYPKGPREFIX}-yaml-[0-9]*:../../textproc/py-yaml
DEPENDS+=	${PYPKGPREFIX}-biplist-[0-9]*:../../textproc/py-biplist

PYTHON_VERSIONED_DEPENDENCIES=	dateutil

USE_LANGUAGES=	# none

.include "options.mk"

.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
