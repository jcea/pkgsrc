# $NetBSD: Makefile,v 1.5 2016/12/04 16:30:01 bsiegert Exp $
#

DISTNAME=		lf-20160819
PKGREVISION=		3
CATEGORIES=		sysutils
MASTER_SITES=		${MASTER_SITE_GITHUB:=gokcehan/}
GITHUB_TAG=		a6d92f4

HOMEPAGE=		https://${GO_SRCPATH}
COMMENT=		Terminal file manager
LICENSE=		2-clause-bsd

GO_SRCPATH=		github.com/gokcehan/lf
GO_DIST_BASE=		${GITHUB_PROJECT}-${GITHUB_TAG}*

.include "../../devel/go-termbox/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
