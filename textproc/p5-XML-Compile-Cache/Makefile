# $NetBSD: Makefile,v 1.1 2016/11/23 09:21:14 wiz Exp $

DISTNAME=	XML-Compile-Cache-1.05
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/M/MA/MARKOV/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-Compile-Cache/
COMMENT=	Perl module for caching compilation based XML processing
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-XML-LibXML-Simple-[0-9]*:../../textproc/p5-XML-LibXML-Simple
DEPENDS+=	p5-Log-Report-[0-9]*:../../devel/p5-Log-Report
#DEPENDS+=	p5-Log-Report-Optional-[0-9]*:../../devel/p5-Log-Report-Optional
DEPENDS+=	p5-XML-Compile-[0-9]*:../../textproc/p5-XML-Compile
#DEPENDS+=	p5-Devel-GlobalDestruction-[0-9]*:../../devel/p5-Devel-GlobalDestruction
# TEST_DEPENDS
BUILD_DEPENDS+=	p5-XML-Compile-Tester-[0-9]*:../../textproc/p5-XML-Compile-Tester
#BUILD_DEPENDS+=	p5-Test-Deep-[0-9]*:../../devel/p5-Test-Deep

PERL5_PACKLIST=	auto/XML/Compile/Cache/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
