# $NetBSD: Makefile,v 1.22 2017/01/22 20:48:07 maya Exp $

DISTNAME=	corebird-1.4.1
PKGREVISION=	1
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_GITHUB:=baedert/}
GITHUB_PROJECT=	corebird
GITHUB_RELEASE=	1.4.1
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://corebird.baedert.org/
COMMENT=	Native Gtk+ Twitter Client
LICENSE=	gnu-gpl-v3

USE_LIBTOOL=	yes
USE_LANGUAGES=	c
GNU_CONFIGURE=	yes
USE_TOOLS+=	gettext-m4 pkg-config gmake msgfmt

.include "options.mk"

TEST_TARGET=	check

.include "../../graphics/adwaita-icon-theme/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../www/librest07/buildlink3.mk"
BUILDLINK_API_DEPENDS.gspell+=	gspell>=1.2.2
.include "../../textproc/gspell/buildlink3.mk"
.include "../../textproc/json-glib/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../net/libsoup/buildlink3.mk"
.include "../../devel/libgee/buildlink3.mk"
BUILDLINK_DEPMETHOD.vala=	build
.include "../../lang/vala/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../devel/glib2/schemas.mk"
.include "../../mk/bsd.pkg.mk"
