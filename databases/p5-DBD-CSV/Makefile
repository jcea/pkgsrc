# $NetBSD: Makefile,v 1.47 2016/07/25 07:43:46 wen Exp $

DISTNAME=	DBD-CSV-0.49
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=DBD/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/DBD-CSV/
COMMENT=	Access CSV files via DBI
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-SQL-Statement>=1.31:../../databases/p5-SQL-Statement
DEPENDS+=	p5-Text-CSV_XS>=1.01:../../textproc/p5-Text-CSV_XS

#BUILD_DEPENDS+=	{perl>=5.10.1,p5-Test-Simple>=0.90}:../../devel/p5-Test-Simple

CONFLICTS+=	p5-SQL-Statement<=1.27
CONFLICTS+=	p5-DBI<=1.611

PERL5_PACKLIST=	auto/DBD/CSV/.packlist
REPLACE_PERL+=	lib/DBD/CSV.pm

BUILDLINK_API_DEPENDS.p5-DBI+=	p5-DBI>=1.614
.include "../../databases/p5-DBI/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
