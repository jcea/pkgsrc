# $NetBSD: Makefile,v 1.21 2016/06/08 19:23:48 wiz Exp $
#

DISTNAME=	prefork-1.04
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	7
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Net/ADAMK/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/prefork/
COMMENT=	Optimize module loading across forking and non-forking scenarios
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/prefork/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
