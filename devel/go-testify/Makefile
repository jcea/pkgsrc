# $NetBSD: Makefile,v 1.5 2016/12/04 16:29:59 bsiegert Exp $

DISTNAME=	go-testify-1.1.3
PKGREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=stretchr/}
GITHUB_PROJECT=	testify
GITHUB_TAG=	v1.1.3

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/stretchr/testify
COMMENT=	Extension to the standard Go testing package
LICENSE=	modified-bsd

WRKSRC=		${WRKDIR}
GO_DIST_BASE=	${GITHUB_PROJECT}-${GITHUB_TAG:S/v//}
GO_SRCPATH=	github.com/stretchr/testify

.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
