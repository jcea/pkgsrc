# $NetBSD: Makefile,v 1.5 2017/01/01 14:43:22 wiz Exp $

DISTNAME=	eyeD3-0.7.5
CATEGORIES=	audio
MASTER_SITES=	http://eyed3.nicfit.net/releases/
EXTRACT_SUFX=	.tgz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://eyed3.nicfit.net/
COMMENT=	Python tool for working with audio files (in particular, mp3)
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	# none
PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 # not yet ported as of 0.7.5
REPLACE_SH+=		bin/eyeD3

SUBST_CLASSES+=		python
SUBST_SED.python+=	-e "s,python,${PYTHONBIN},"
SUBST_MESSAGE.python=	Fixing path to python executable.
SUBST_FILES.python+=	bin/eyeD3
SUBST_STAGE.python+=	post-configure

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
