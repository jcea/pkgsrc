# $NetBSD: Makefile,v 1.8 2016/12/18 23:33:11 joerg Exp $

DISTNAME=	include-what-you-use-0.7.src
PKGNAME=	${DISTNAME:.src=}
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://include-what-you-use.org/downloads/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://include-what-you-use.org/
COMMENT=	Analyze \#includes in C and C++ source files
LICENSE=	modified-bsd

WRKSRC=		${WRKDIR}/llvm/tools/clang/tools/include-what-you-use/
USE_CMAKE=	yes
CMAKE_ARGS=     -DIWYU_LLVM_ROOT_PATH:PATH=${BUILDLINK_PREFIX.clang}
USE_LANGUAGES=	c c++
GCC_REQD+=	4.8

REPLACE_PYTHON= *.py

.include "../../lang/clang/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
