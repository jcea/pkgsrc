# $NetBSD: Makefile,v 1.3 2014/07/16 08:37:20 rodent Exp $

DISTNAME=	rack-openid-1.4.2
PKGNAME=	${RUBY_PKGPREFIX}-${DISTNAME}
CATEGORIES=	ruby security

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	https://github.com/grosser/rack-openid
COMMENT=	Provides a more HTTPish API around the ruby-openid library
LICENSE=	mit

DEPENDS+=	${RUBY_PKGPREFIX}-rack>=1.1.0:../../www/ruby-rack
DEPENDS+=	${RUBY_PKGPREFIX}-ruby-openid>=2.1.8:../../security/ruby-ruby-openid

USE_LANGUAGES=	# none

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
