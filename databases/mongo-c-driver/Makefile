# $NetBSD: Makefile,v 1.23 2017/01/12 14:48:15 fhajny Exp $

DISTNAME=	mongo-c-driver-1.5.3
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_GITHUB:=mongodb/}

MAINTAINER=	filip@joyent.com
HOMEPAGE=	http://github.com/mongodb/mongo-c-driver/
COMMENT=	MongoDB client library written in C
LICENSE=	apache-2.0

GITHUB_RELEASE=	${PKGVERSION_NOREV}

# Requires shm_open()
NOT_FOR_PLATFORM+=	OpenBSD-*-*

.include "options.mk"

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake pkg-config

CONFIGURE_ARGS+=	--enable-man-pages=yes
CONFIGURE_ARGS+=	--with-libbson=system

PKGCONFIG_OVERRIDE+=	src/libmongoc-1.0.pc.in
PKGCONFIG_OVERRIDE+=	src/libmongoc-ssl-1.0.pc.in

INSTALLATION_DIRS+=	${PKGMANDIR}/man3

# Test behaves incosistently
#TEST_MAKE_FLAGS+=	MONGOC_TEST_SKIP_LIVE=on
#TEST_TARGET=		check

BUILD_DEPENDS+=	${PYPKGPREFIX}-expat-[0-9]*:../../textproc/py-expat

PYTHON_FOR_BUILD_ONLY=	yes
REPLACE_PYTHON+=	doc/mallard2man.py

.include "../../lang/python/application.mk"

# libbson and mongo-c-driver released are tied
BUILDLINK_API_DEPENDS.libbson+=	libbson>=${PKGVERSION_NOREV}
.include "../../devel/libbson/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
