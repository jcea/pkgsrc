# $NetBSD: Makefile,v 1.13 2017/01/19 14:16:34 wen Exp $

DISTNAME=	JSON-MaybeXS-1.003008
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	www perl5 converters
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=JSON/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/JSON-MaybeXS/
COMMENT=	Use Cpanel::JSON::XS with a fallback to JSON::PP
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	{perl>=5.21.5,p5-JSON-PP>=2.27300}:../../converters/p5-JSON-PP

PERL5_PACKLIST=		auto/JSON/MaybeXS/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
