# $NetBSD: Makefile,v 1.11 2016/06/08 19:22:43 wiz Exp $

DISTNAME=	Config-Auto-0.44
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	2
CATEGORIES=	devel perl5
#MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/B/BI/BINGOS/}
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Config/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Config-Auto/
COMMENT=	Perl 5 module providing a magical config file parser
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Config-IniFiles-[0-9]*:../../devel/p5-Config-IniFiles
DEPENDS+=	p5-IO-String-[0-9]*:../../devel/p5-IO-String
DEPENDS+=	p5-XML-Simple-[0-9]*:../../textproc/p5-XML-Simple
DEPENDS+=	p5-YAML-[0-9]*:../../textproc/p5-YAML

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Config/Auto/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
