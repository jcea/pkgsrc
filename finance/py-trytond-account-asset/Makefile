# $NetBSD: Makefile,v 1.4 2016/12/04 21:13:00 rodent Exp $
TRYTON_MODULE_NAME=	trytond_account_asset
.include "../../devel/py-trytond/Makefile.common"
CATEGORIES=	finance python

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.tryton.org/
COMMENT=	Account_asset module of the Tryton application platform
LICENSE=	gnu-gpl-v3

DEPENDS+=   ${PYPKGPREFIX}-cached-property-[0-9]*:../../devel/py-cached-property
DEPENDS+=   ${PYPKGPREFIX}-trytond-account>=${TRYTON_BASEVER}:../../finance/py-trytond-account
DEPENDS+=   ${PYPKGPREFIX}-trytond-account-product>=${TRYTON_BASEVER}:../../finance/py-trytond-account-product
DEPENDS+=   ${PYPKGPREFIX}-trytond-account-invoice>=${TRYTON_BASEVER}:../../finance/py-trytond-account-invoice
DEPENDS+=   ${PYPKGPREFIX}-trytond-product>=${TRYTON_BASEVER}:../../misc/py-trytond-product
DEPENDS+=   ${PYPKGPREFIX}-trytond>=${TRYTON_BASEVER}:../../devel/py-trytond

USE_LANGUAGES=	# none

PYTHON_VERSIONED_DEPENDENCIES=	dateutil

REPLACE_PYTHON+=	tests/test_account_asset.py tests/tools.py

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
